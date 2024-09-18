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
    // Конструктор
    AResourceCarrierPawn();

    // Переопределение BeginPlay
    virtual void BeginPlay() override;

    // Переопределение Tick для обновления каждый кадр
    virtual void Tick(float DeltaTime) override;

    // Функция для задания склада, к которому нужно двигаться
    void SetTargetWarehouse(AWarehouse* Target);

    // Скорость перемещения
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed;

protected:
    // Компонент для визуализации Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // Склад, к которому движется грузчик
    AWarehouse* TargetWarehouse;

    // Флаг, обозначающий, нужно ли двигаться
    bool bIsMoving;

    // Функция перемещения к складу
    void MoveToWarehouse(float DeltaTime);
};
