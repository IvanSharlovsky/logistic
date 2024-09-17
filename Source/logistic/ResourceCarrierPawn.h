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
	// Конструктор по умолчанию
	AResourceCarrierPawn();

protected:
    // Компонент для визуализации Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // Контроллер для передвижения по NavMesh
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    class UNavigationSystemV1* NavSystem;

    // Функции для управления началом игры и каждым кадром
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:
    // Функция для перемещения к складу
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToWarehouse(AActor* TargetWarehouse);
};
