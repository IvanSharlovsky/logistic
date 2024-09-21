// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Конструктор
AResourceCarrierPawn::AResourceCarrierPawn()
{
    // Инициализация StaticMesh компонента
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    PrimaryActorTick.bCanEverTick = true;

    // Установка скорости движения по умолчанию
    MovementSpeed = 600.0f;

    // Грузчик не движется по умолчанию
    bIsMoving = false;  
    // Начинаем с первого типа ресурса
    CurrentResourceType = 1;
    CurrentWarehouseIndex = 0;
}

// Функция BeginPlay
void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: BeginPlay: Calling MoveToNextWarehouse()"));
    MoveToNextWarehouse();
}

void AResourceCarrierPawn::SetWarehouses(TMap<int32, TArray<AWarehouse*>>* WarehouseList)
{
    WarehousePtr = WarehouseList;
}

// Функция, вызываемая каждый кадр
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Если грузчик движется, продолжаем движение к складу
    if (bIsMoving)
    {
        if (WarehousePtr && (*WarehousePtr)[CurrentResourceType].IsValidIndex(CurrentWarehouseIndex))
        {
            MoveToWarehouse(DeltaTime);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("ResourceCarrierPawn: Tick: Warehouse %d not available for resource type: %d"), CurrentWarehouseIndex, CurrentResourceType);
            MoveToNextWarehouse();
        }
    }
    else
    {
        //UE_LOG(LogTemp, Log, TEXT("Not moving"));
    }
}

// Функция перемещения к следующему складу
void AResourceCarrierPawn::MoveToNextWarehouse()
{
    // Проверяем, что индекс склада действителен
    if (WarehousePtr && (*WarehousePtr)[CurrentResourceType].IsValidIndex(CurrentWarehouseIndex))
    {
        bIsMoving = true;
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: MoveToNextWarehouse: Calling SwitchResourceType()"));
        SwitchResourceType();
        bIsMoving = true;
    }
}

// Реализация перемещения к складу
void AResourceCarrierPawn::MoveToWarehouse(float DeltaTime)
{
    const TArray<AWarehouse*>& CurrentWarehouses = (*WarehousePtr)[CurrentResourceType];

    if (CurrentWarehouseIndex < CurrentWarehouses.Num())
    {
        AWarehouse* TargetWarehouse = CurrentWarehouses[CurrentWarehouseIndex];
        if (TargetWarehouse)
        {
            FVector TargetLocation = TargetWarehouse->GetActorLocation();
            FVector CurrentLocation = GetActorLocation();

            // Рассчитываем направление движения
            FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

            // Перемещаем грузчика
            SetActorLocation(CurrentLocation + Direction * MovementSpeed * DeltaTime);

            // Проверяем, достигли ли цели
            if (FVector::Dist(CurrentLocation, TargetLocation) < 100.0f)
            {
                bIsMoving = false;
                /*
                // Логика передачи ресурсов
                if (AWarehouse* Warehouse = Cast<AWarehouse>(TargetWarehouse))
                {
                    Warehouse->AddResource(ResourceType, ResourceAmount); // Добавляем ресурсы на склад
                }
                */
                // Делаем паузу на 1 секунду
                UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: MoveToWarehouse: Calling GetWorldTimerManager()"));
                GetWorldTimerManager().SetTimer(TimerHandle_WaitAtWarehouse, this, &AResourceCarrierPawn::WaitAtWarehouse, 1.0f, false);
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("TargetWarehouse is null at index %d for resource type %d"), CurrentWarehouseIndex, CurrentResourceType);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid warehouse index: %d for resource type: %d"), CurrentWarehouseIndex, CurrentResourceType);
        UE_LOG(LogTemp, Warning, TEXT("ResourceCarrierPawn: MoveToWarehouse: Calling MoveToNextWarehouse()"));
        MoveToNextWarehouse();
    }
}

void AResourceCarrierPawn::WaitAtWarehouse()
{
    // Переходим к следующему складу в массиве
    CurrentWarehouseIndex++;
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: WaitAtWarehouse: CurrentResourceType = %d, NextWarehouseIndex = %d"), CurrentResourceType, CurrentWarehouseIndex);

    // Начинаем движение к следующему складу
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: WaitAtWarehouse: Calling MoveToNextWarehouse()"));
    MoveToNextWarehouse();
}

void AResourceCarrierPawn::SwitchResourceType()
{
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: SwitchResourceType: Number of resource types (Warehouses.Num()): %d"), (*WarehousePtr).Num());
    if ((*WarehousePtr).Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("No warehouses available to switch resource types!"));
        return;
    }
    UE_LOG(LogTemp, Log, TEXT("doing %"));
    // Если дошли до конца списка, переключаемся на следующий тип ресурса
    CurrentResourceType = (CurrentResourceType + 1) % ((*WarehousePtr).Num() + 1);

    // Проверяем, есть ли склады для нового типа ресурса
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: SwitchResourceType: CurrentResourceType = %d"), CurrentResourceType);
    while (!(*WarehousePtr).Contains(CurrentResourceType))
    {
        // Если складов нет, продолжаем переключать типы ресурсов
        CurrentResourceType = (CurrentResourceType + 1) % ((*WarehousePtr).Num() + 1);
    }

    CurrentWarehouseIndex = 0;

    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: SwitchResourceType: CurrentResourceType = %d, CurrentWarehouseIndex = %d"), CurrentResourceType, CurrentWarehouseIndex);

}
