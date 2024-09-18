// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

// �����������
AResourceCarrierPawn::AResourceCarrierPawn()
{
    // ������������� StaticMesh ����������
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    // ��������� �������� �������� �� ���������
    MovementSpeed = 300.0f;

    // ���������, ��� Pawn ����� ���� �������������� ����� AIController
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    // ������� �� �������� �� ���������
    bIsMoving = false;
}

// ������� BeginPlay
void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();
}

// �������, ���������� ������ ����
void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsMoving && TargetWarehouse)
    {
        // ����������� � ������
        MoveToWarehouse(DeltaTime);
    }
}

// ������������� ���� ��� ����������� (�����)
void AResourceCarrierPawn::SetTargetWarehouse(AWarehouse* Target)
{
    TargetWarehouse = Target;
    bIsMoving = true;
}

// ���������� ����������� � ������
void AResourceCarrierPawn::MoveToWarehouse(float DeltaTime)
{
    if (TargetWarehouse)
    {
        FVector TargetLocation = TargetWarehouse->GetActorLocation();
        FVector CurrentLocation = GetActorLocation();

        // ������������ ����������� ��������
        FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

        // ��������� ����� �������
        FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

        // ��������� �������
        SetActorLocation(NewLocation);

        // ���������, �������� �� �� ����
        if (FVector::Dist(CurrentLocation, TargetLocation) < 100.0f) // 100.0f - ���������� ���������� �� ������
        {
            bIsMoving = false; // ������������� ��������
            // ����� ����� �������� ������ ��� ��������/�������� ��������
        }
    }
}
