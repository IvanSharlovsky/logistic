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

    // ������� ��� ������ ������
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    void SpawnWarehouse();

protected:
    // �������� �� ����� ������ ��� ������
    UPROPERTY(EditAnywhere, Category = "Warehouse")
    TSubclassOf<AWarehouse> WarehouseClass;

    // ������ �� ��������
    UPROPERTY()
    class AResourceCarrierPawn* CarrierPawn;
};