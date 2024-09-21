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

    // Функция для задания списка складов
    void SetWarehouses(TMap<int32, TArray<AWarehouse*>>* WarehouseList);

    //// Добавление нового склада в список
    //void AddWarehouse(AWarehouse* Warehouse);

    // Скорость перемещения
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed;

protected:
    // Компонент для визуализации Pawn
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

    // Текущий тип ресурса, с которым работает грузчик
    int32 CurrentResourceType;

    // Индекс текущего склада
    int32 CurrentWarehouseIndex;

    // Списки складов по типам ресурсов (указатель на карту из GameMode)
    TMap<int32, TArray<AWarehouse*>>* WarehousePtr;

    // Флаг для обозначения, идет ли перемещение
    bool bIsMoving;

    // Таймер для задержки между перемещениями
    FTimerHandle TimerHandle_WaitAtWarehouse;

    // Функция перемещения к следующему складу
    void MoveToNextWarehouse();

    // Функция для перемещения грузчика
    void MoveToWarehouse(float DeltaTime);

    // Функция для задержки на складе
    void WaitAtWarehouse();

    // Функция для нового обхода складов
    void SwitchResourceType();
};

