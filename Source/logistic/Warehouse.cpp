// Fill out your copyright notice in the Description page of Project Settings.


#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AWarehouse::AWarehouse()
{
	// Инициализация StaticMesh компонента
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	// Привязываем конкретный меш к StaticMeshComponent
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(MeshAsset.Object);
	}

	// Устанавливаем начальные значения
	ResourceType = FMath::RandRange(0, 49);  // Случайный тип ресурса от 0 до 49
	ResourceAmount = 0;  // Начальное количество ресурса
	StorageLimit = 100;  // По умолчанию установим вместимость на 100 (можно рандомизировать)

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWarehouse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarehouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Метод для добавления ресурса
bool AWarehouse::AddResource(int32 Amount)
{
	if (ResourceAmount + Amount <= StorageLimit)
	{
		ResourceAmount += Amount;
		return true;  // Успешно добавлено
	}
	return false;  // Превышен лимит
}

// Метод для извлечения ресурса
bool AWarehouse::RemoveResource(int32 Amount)
{
	if (ResourceAmount >= Amount)
	{
		ResourceAmount -= Amount;
		return true;  // Успешно извлечено
	}
	return false;  // Недостаточно ресурса
}