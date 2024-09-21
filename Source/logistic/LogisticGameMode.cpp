// Fill out your copyright notice in the Description page of Project Settings.


#include "LogisticGameMode.h"
#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ALogisticGameMode::ALogisticGameMode()
{
    // Set the PlayerController class to use your custom LogisticPlayerController
    PlayerControllerClass = ALogisticPlayerController::StaticClass();
}

void ALogisticGameMode::BeginPlay()
{
    Super::BeginPlay();

    // ��������� WarehouseClass
    if (WarehouseClass)
    {
        UE_LOG(LogTemp, Log, TEXT("WarehouseClass is set to: %s"), *WarehouseClass->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("WarehouseClass is not set in GameMode!"));
    }

    // ������ ������ �������� �� �����
    CarrierPawn = Cast<AResourceCarrierPawn>(UGameplayStatics::GetActorOfClass(GetWorld(), AResourceCarrierPawn::StaticClass()));

    // ������� ��������� ������� ��� �����
    for (int32 i = 0; i < 8; ++i)
    {
        SpawnWarehouse();
    }

    UE_LOG(LogTemp, Log, TEXT("Warehouses.Num = %d"), Warehouses.Num());

    // ����������� �������� ������ ������ � �������
    if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
    {
        InputComponent = NewObject<UInputComponent>(this);
        InputComponent->RegisterComponent();
        PlayerController->PushInputComponent(InputComponent);

        InputComponent->BindAction("SpawnWarehouse", IE_Pressed, this, &ALogisticGameMode::SpawnWarehouse);
    }

    // Passing a pointer to the pawn
    if (CarrierPawn)
    {
        CarrierPawn->SetWarehouses(&Warehouses);
    }
}

void ALogisticGameMode::SpawnWarehouse()
{
    UE_LOG(LogTemp, Log, TEXT("SpawnWarehouse called!"));

    if (WarehouseClass)
    {
        // ������� ����� �� ��������� �������
        FVector SpawnLocation = FVector(FMath::RandRange(-3000.0f, 3000.0f), FMath::RandRange(-3000.0f, 3000.0f), 50.0f);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        AWarehouse* NewWarehouse = GetWorld()->SpawnActor<AWarehouse>(WarehouseClass.Get(), SpawnLocation, SpawnRotation);

        if (NewWarehouse && CarrierPawn)
        {
            // ��������� ����� ����� � ������ ������� ��������
            AddWarehouseToArray(NewWarehouse);
            UE_LOG(LogTemp, Log, TEXT("Tick: Warehouse %d for resource type: %d"), Warehouses[NewWarehouse->ResourceType].Find(NewWarehouse), NewWarehouse->ResourceType);
        }
    }
}

void ALogisticGameMode::AddWarehouseToArray(AWarehouse* NewWarehouse)
{
    int32 ResourceType = NewWarehouse->ResourceType;

    // ���������, ���� �� ������ ��� ����� ���� �������
    if (!Warehouses.Contains(ResourceType))
    {
        Warehouses.Add(ResourceType, TArray<AWarehouse*>());
    }

    // ��������� ����� ����� � ��������������� ������
    Warehouses[ResourceType].Add(NewWarehouse);
}