// Fill out your copyright notice in the Description page of Project Settings.


#include "LogisticGameMode.h"
#include "ResourceCarrierPawn.h"
#include "Warehouse.h"
#include "Kismet/GameplayStatics.h"

void ALogisticGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Найдем объект грузчика на сцене
    AResourceCarrierPawn* CarrierPawn = Cast<AResourceCarrierPawn>(UGameplayStatics::GetActorOfClass(GetWorld(), AResourceCarrierPawn::StaticClass()));

    // Найдем все объекты типа AWarehouse на сцене
    TArray<AActor*> FoundWarehouses;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWarehouse::StaticClass(), FoundWarehouses);

    // Преобразуем найденные объекты в массив складов (AWarehouse)
    TArray<AWarehouse*> Warehouses;
    for (AActor* Actor : FoundWarehouses)
    {
        AWarehouse* Warehouse = Cast<AWarehouse>(Actor);
        if (Warehouse)
        {
            Warehouses.Add(Warehouse);
        }
    }

    // Передаем список складов в грузчика
    if (CarrierPawn)
    {
        CarrierPawn->SetWarehouses(Warehouses);
    }
}