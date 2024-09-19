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

    // Установка скорости движения по умолчанию
    MovementSpeed = 300.0f;

    // Инициализируем переменные
    bIsMoving = false;  // Грузчик не движется по умолчанию
    CurrentWarehouseIndex = 0;
}

// Функция BeginPlay
void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();

    // Начинаем перемещение к первому складу
    if (Warehouses.Num() > 0)
    {
        MoveToNextWarehouse();
    }
}

// Функция, вызываемая каждый кадр
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Если грузчик движется, продолжаем движение к складу
    if (bIsMoving && Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        MoveToWarehouse(DeltaTime);
    }
}
// Функция для задания списка складов
void AResourceCarrierPawn::SetWarehouses(const TArray<AWarehouse*>& WarehousesList)
{
    Warehouses = WarehousesList;
}

// Функция перемещения к следующему складу
void AResourceCarrierPawn::MoveToNextWarehouse()
{
    // Проверяем, что индекс склада действителен
    if (Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        bIsMoving = true;
    }
    else
    {
        // Если вышли за пределы массива, сбрасываем индекс и продолжаем с начала
        CurrentWarehouseIndex = 0;
        bIsMoving = true;
    }
}

// Реализация перемещения к складу
void AResourceCarrierPawn::MoveToWarehouse(float DeltaTime)
{
    if (Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        AWarehouse* TargetWarehouse = Warehouses[CurrentWarehouseIndex];
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
            // Делаем паузу на 3 секунды
            GetWorldTimerManager().SetTimer(TimerHandle_WaitAtWarehouse, this, &AResourceCarrierPawn::WaitAtWarehouse, 3.0f, false);
        }
    }
}

void AResourceCarrierPawn::WaitAtWarehouse()
{
    // Переходим к следующему складу
    CurrentWarehouseIndex++;

    // Начинаем движение к следующему складу
    MoveToNextWarehouse();
}