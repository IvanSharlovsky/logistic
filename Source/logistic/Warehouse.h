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
    // Конструктор по умолчанию
	AWarehouse();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    // Компонент для отображения меша склада
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* StaticMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Тип ресурса, который хранит склад (от 0 до 49 для 50 типов ресурсов)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 ResourceType;

    // Количество ресурса на складе
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 ResourceAmount;

    // Максимальная вместимость ресурса на складе
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Warehouse")
    int32 StorageLimit;

    // Метод для добавления ресурса
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    bool AddResource(int32 Amount);

    // Метод для извлечения ресурса
    UFUNCTION(BlueprintCallable, Category = "Warehouse")
    bool RemoveResource(int32 Amount);
};

