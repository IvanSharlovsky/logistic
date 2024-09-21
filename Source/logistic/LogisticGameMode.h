// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warehouse.h"
#include "LogisticPlayerController.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LogisticGameMode.generated.h"

UCLASS()
class LOGISTIC_API ALogisticGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    // Конструктор
    ALogisticGameMode();

    virtual void BeginPlay() override;

    // Функция для спауна склада
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    void SpawnWarehouse();

protected:
    // Референс на класс склада для спауна
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    TSubclassOf<class AWarehouse> WarehouseClass;

    // Храним склады в виде массива массивов по типам ресурсов
    TMap<int32, TArray<AWarehouse*>> Warehouses;

    // Ссылка на грузчика
    UPROPERTY()
    class AResourceCarrierPawn* CarrierPawn;

    // Добавляем новый склад в массив
    void AddWarehouseToArray(AWarehouse* NewWarehouse);
};