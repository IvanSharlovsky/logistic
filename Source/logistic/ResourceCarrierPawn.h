// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ResourceCarrierPawn.generated.h"

class AWarehouse;

UCLASS()
class LOGISTIC_API AResourceCarrierPawn : public APawn
{
    GENERATED_BODY()

public:
    // �����������
    AResourceCarrierPawn();

    // ��������������� BeginPlay
    virtual void BeginPlay() override;

    // ��������������� Tick ��� ���������� ������ ����
    virtual void Tick(float DeltaTime) override;

    // ������� ��� ������� ������ �������
    void SetWarehouses(TMap<int32, TArray<AWarehouse*>>* WarehouseList);

    //// ���������� ������ ������ � ������
    //void AddWarehouse(AWarehouse* Warehouse);

    // �������� �����������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed;

protected:
    // ��������� ��� ������������ Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // ������� ��� �������, � ������� �������� �������
    int32 CurrentResourceType;

    // ������ �������� ������
    int32 CurrentWarehouseIndex;

    // ������ ������� �� ����� �������� (��������� �� ����� �� GameMode)
    TMap<int32, TArray<AWarehouse*>>* WarehousePtr;

    // ���� ��� �����������, ���� �� �����������
    bool bIsMoving;

    // ������ ��� �������� ����� �������������
    FTimerHandle TimerHandle_WaitAtWarehouse;

    // ������� ����������� � ���������� ������
    void MoveToNextWarehouse();

    // ������� ��� ����������� ��������
    void MoveToWarehouse(float DeltaTime);

    // ������� ��� �������� �� ������
    void WaitAtWarehouse();

    // ������� ��� ������ ������ �������
    void SwitchResourceType();
};

