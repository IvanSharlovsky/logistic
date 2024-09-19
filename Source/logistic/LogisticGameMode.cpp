// Fill out your copyright notice in the Description page of Project Settings.


#include "LogisticGameMode.h"
#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Kismet/GameplayStatics.h"

void ALogisticGameMode::BeginPlay()
{
    Super::BeginPlay();

    // ������ ������ �������� �� �����
    AResourceCarrierPawn* CarrierPawn = Cast<AResourceCarrierPawn>(UGameplayStatics::GetActorOfClass(GetWorld(), AResourceCarrierPawn::StaticClass()));

    // ������ ��� ������� ���� AWarehouse �� �����
    TArray<AActor*> FoundWarehouses;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWarehouse::StaticClass(), FoundWarehouses);

    // ����������� ��������� ������� � ������ ������� (AWarehouse)
    TArray<AWarehouse*> Warehouses;
    for (AActor* Actor : FoundWarehouses)
    {
        AWarehouse* Warehouse = Cast<AWarehouse>(Actor);
        if (Warehouse)
        {
            Warehouses.Add(Warehouse);
        }
    }

    // �������� ������ ������� � ��������
    if (CarrierPawn)
    {
        CarrierPawn->SetWarehouses(Warehouses);
    }
}