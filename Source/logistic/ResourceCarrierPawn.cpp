// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

// �����������
AResourceCarrierPawn::AResourceCarrierPawn()
{
    // ������������� StaticMesh ����������
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    PrimaryActorTick.bCanEverTick = true;

    // ��������� �������� �������� �� ���������
    MovementSpeed = 600.0f;

    // ������� �� �������� �� ���������
    bIsMoving = false;  
    // �������� � ������� ���� �������
    CurrentResourceType = 1;
    CurrentWarehouseIndex = 0;
}

// ������� BeginPlay
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

// �������, ���������� ������ ����
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ���� ������� ��������, ���������� �������� � ������
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

// ������� ����������� � ���������� ������
void AResourceCarrierPawn::MoveToNextWarehouse()
{
    // ���������, ��� ������ ������ ������������
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

// ���������� ����������� � ������
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

            // ������������ ����������� ��������
            FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

            // ���������� ��������
            SetActorLocation(CurrentLocation + Direction * MovementSpeed * DeltaTime);

            // ���������, �������� �� ����
            if (FVector::Dist(CurrentLocation, TargetLocation) < 100.0f)
            {
                bIsMoving = false;
                /*
                // ������ �������� ��������
                if (AWarehouse* Warehouse = Cast<AWarehouse>(TargetWarehouse))
                {
                    Warehouse->AddResource(ResourceType, ResourceAmount); // ��������� ������� �� �����
                }
                */
                // ������ ����� �� 1 �������
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
    // ��������� � ���������� ������ � �������
    CurrentWarehouseIndex++;
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: WaitAtWarehouse: CurrentResourceType = %d, NextWarehouseIndex = %d"), CurrentResourceType, CurrentWarehouseIndex);

    // �������� �������� � ���������� ������
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
    // ���� ����� �� ����� ������, ������������� �� ��������� ��� �������
    CurrentResourceType = (CurrentResourceType + 1) % ((*WarehousePtr).Num() + 1);

    // ���������, ���� �� ������ ��� ������ ���� �������
    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: SwitchResourceType: CurrentResourceType = %d"), CurrentResourceType);
    while (!(*WarehousePtr).Contains(CurrentResourceType))
    {
        // ���� ������� ���, ���������� ����������� ���� ��������
        CurrentResourceType = (CurrentResourceType + 1) % ((*WarehousePtr).Num() + 1);
    }

    CurrentWarehouseIndex = 0;

    UE_LOG(LogTemp, Log, TEXT("ResourceCarrierPawn: SwitchResourceType: CurrentResourceType = %d, CurrentWarehouseIndex = %d"), CurrentResourceType, CurrentWarehouseIndex);

}