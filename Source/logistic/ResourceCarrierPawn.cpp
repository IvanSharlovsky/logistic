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

    // ��������� �������� �������� �� ���������
    MovementSpeed = 300.0f;

    // �������������� ����������
    bIsMoving = false;  // ������� �� �������� �� ���������
    CurrentWarehouseIndex = 0;
}

// ������� BeginPlay
void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();

    // �������� ����������� � ������� ������
    if (Warehouses.Num() > 0)
    {
        MoveToNextWarehouse();
    }
}

// �������, ���������� ������ ����
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ���� ������� ��������, ���������� �������� � ������
    if (bIsMoving && Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        MoveToWarehouse(DeltaTime);
    }
}
// ������� ��� ������� ������ �������
void AResourceCarrierPawn::SetWarehouses(const TArray<AWarehouse*>& WarehousesList)
{
    Warehouses = WarehousesList;
}

// ������� ����������� � ���������� ������
void AResourceCarrierPawn::MoveToNextWarehouse()
{
    // ���������, ��� ������ ������ ������������
    if (Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        bIsMoving = true;
    }
    else
    {
        // ���� ����� �� ������� �������, ���������� ������ � ���������� � ������
        CurrentWarehouseIndex = 0;
        bIsMoving = true;
    }
}

// ���������� ����������� � ������
void AResourceCarrierPawn::MoveToWarehouse(float DeltaTime)
{
    if (Warehouses.IsValidIndex(CurrentWarehouseIndex))
    {
        AWarehouse* TargetWarehouse = Warehouses[CurrentWarehouseIndex];
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
            // ������ ����� �� 3 �������
            GetWorldTimerManager().SetTimer(TimerHandle_WaitAtWarehouse, this, &AResourceCarrierPawn::WaitAtWarehouse, 3.0f, false);
        }
    }
}

void AResourceCarrierPawn::WaitAtWarehouse()
{
    // ��������� � ���������� ������
    CurrentWarehouseIndex++;

    // �������� �������� � ���������� ������
    MoveToNextWarehouse();
}