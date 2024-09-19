// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LogisticGameMode.generated.h"

UCLASS()
class LOGISTIC_API ALogisticGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

    // Функция для спауна склада
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    void SpawnWarehouse();

protected:
    // Референс на класс склада для спауна
    UPROPERTY(EditAnywhere, Category = "Warehouse")
    TSubclassOf<AWarehouse> WarehouseClass;

    // Ссылка на грузчика
    UPROPERTY()
    class AResourceCarrierPawn* CarrierPawn;
};