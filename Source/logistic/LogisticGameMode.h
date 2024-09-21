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
    // �����������
    ALogisticGameMode();

    virtual void BeginPlay() override;

    // ������� ��� ������ ������
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    void SpawnWarehouse();

protected:
    // �������� �� ����� ������ ��� ������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    TSubclassOf<class AWarehouse> WarehouseClass;

    // ������ ������ � ���� ������� �������� �� ����� ��������
    TMap<int32, TArray<AWarehouse*>> Warehouses;

    // ������ �� ��������
    UPROPERTY()
    class AResourceCarrierPawn* CarrierPawn;

    // ��������� ����� ����� � ������
    void AddWarehouseToArray(AWarehouse* NewWarehouse);
};