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

	// Устанавливаем случайное количество ресурсов (от 0 до 100)
	ResourceAmount = FMath::RandRange(0, 100);
	// Устанавливаем случайный тип ресурса (например, от 1 до 4 для 4 типов ресурсов)
	ResourceType = FMath::RandRange(1, 4);
	// По умолчанию установим вместимость на 100 (можно рандомизировать)
	StorageLimit = 100;  

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
		UE_LOG(LogTemp, Log, TEXT("Resources added, new amount: %d"), ResourceAmount); // Логирование для проверки
		return true;  // Успешно добавлено
	}
	UE_LOG(LogTemp, Warning, TEXT("Too many resources to add")); // Логирование превышение лимита
	return false;  // Превышен лимит
}

// Метод для извлечения ресурса
bool AWarehouse::RemoveResource(int32 Amount)
{
	if (ResourceAmount >= Amount)
	{
		ResourceAmount -= Amount;
		UE_LOG(LogTemp, Log, TEXT("Resources removed, new amount: %d"), ResourceAmount); // Логирование для проверки
		return true;  // Успешно извлечено
	}
	UE_LOG(LogTemp, Warning, TEXT("Not enough resource to remove")); // Логирование недостатка ресурса
	return false;  // Недостаточно ресурса
}
