// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Конструктор
AResourceCarrierPawn::AResourceCarrierPawn()
{
    // Инициализация StaticMesh компонента
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    // Установка скорости движения по умолчанию
    MovementSpeed = 300.0f;

    // Установим, что Pawn может быть контролируемым через AIController
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    // Грузчик не движется по умолчанию
    bIsMoving = false;
}

// Функция BeginPlay
void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();
}

// Функция, вызываемая каждый кадр
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsMoving && TargetWarehouse)
    {
        // Перемещение к складу
        MoveToWarehouse(DeltaTime);
    }
}

// Устанавливаем цель для перемещения (склад)
void AResourceCarrierPawn::SetTargetWarehouse(AWarehouse* Target)
{
    TargetWarehouse = Target;
    bIsMoving = true;
}

// Реализация перемещения к складу
void AResourceCarrierPawn::MoveToWarehouse(float DeltaTime)
{
    if (TargetWarehouse)
    {
        FVector TargetLocation = TargetWarehouse->GetActorLocation();
        FVector CurrentLocation = GetActorLocation();

        // Рассчитываем направление движения
        FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

        // Вычисляем новую позицию
        FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

        // Обновляем позицию
        SetActorLocation(NewLocation);

        // Проверяем, достигли ли мы цели
        if (FVector::Dist(CurrentLocation, TargetLocation) < 100.0f) // 100.0f - допустимое расстояние до склада
        {
            bIsMoving = false; // Останавливаем движение
            // Здесь можно добавить логику для выгрузки/загрузки ресурсов
        }
    }
}
