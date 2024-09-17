// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ResourceCarrierPawn.generated.h"

UCLASS()
class LOGISTIC_API AResourceCarrierPawn : public APawn
{
	GENERATED_BODY()

public:
	// ����������� �� ���������
	AResourceCarrierPawn();

protected:
    // ��������� ��� ������������ Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // ���������� ��� ������������ �� NavMesh
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    class UNavigationSystemV1* NavSystem;

    // ������� ��� ���������� ������� ���� � ������ ������
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    // ������� ��� ����������� � ������
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToWarehouse(AActor* TargetWarehouse);
};
