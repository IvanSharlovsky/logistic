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
    void SetWarehouses(const TArray<AWarehouse*>& WarehousesList);

    // �������� �����������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed;

protected:
    // ��������� ��� ������������ Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // ������ ������� ��� �����������
    TArray<AWarehouse*> Warehouses;

    // ������ �������� ������
    int32 CurrentWarehouseIndex;

    // ���� ��� �����������, ���� �� �����������
    bool bIsMoving;

    // ������ ��� �������� ����� �������������
    FTimerHandle TimerHandle_WaitAtWarehouse;

    // ������� ����������� � ���������� ������
    void MoveToNextWarehouse();

    // ������� ��� ����������� ��������
    void MoveToWarehouse(float DeltaTime);

    // ������� ��� �������� � 3 ������� �� ������
    void WaitAtWarehouse();
};
