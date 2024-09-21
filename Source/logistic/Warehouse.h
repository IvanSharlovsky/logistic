// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Warehouse.generated.h"

UCLASS()
class LOGISTIC_API AWarehouse : public AActor
{
	GENERATED_BODY()
	
public:	
    // ����������� �� ���������
	AWarehouse();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    // ��������� ��� ����������� ���� ������
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // ��� �������, ������� ������ ����� (�� 0 �� 49 ��� 50 ����� ��������)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 ResourceType;

    // ���������� ������� �� ������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 ResourceAmount;

    // ������������ ����������� ������� �� ������
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 StorageLimit;

    // ����� ��� ���������� �������
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    bool AddResource(int32 Amount);

    // ����� ��� ���������� �������
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    bool RemoveResource(int32 Amount);
};

