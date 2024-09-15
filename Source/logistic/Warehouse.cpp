// Fill out your copyright notice in the Description page of Project Settings.


#include "Warehouse.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AWarehouse::AWarehouse()
{
	// ������������� StaticMesh ����������
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	// ����������� ���������� ��� � StaticMeshComponent
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(MeshAsset.Object);
	}

	// ������������� ��������� ��������
	ResourceType = FMath::RandRange(0, 49);  // ��������� ��� ������� �� 0 �� 49
	ResourceAmount = 0;  // ��������� ���������� �������
	StorageLimit = 100;  // �� ��������� ��������� ����������� �� 100 (����� ���������������)

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

// ����� ��� ���������� �������
bool AWarehouse::AddResource(int32 Amount)
{
	if (ResourceAmount + Amount <= StorageLimit)
	{
		ResourceAmount += Amount;
		return true;  // ������� ���������
	}
	return false;  // �������� �����
}

// ����� ��� ���������� �������
bool AWarehouse::RemoveResource(int32 Amount)
{
	if (ResourceAmount >= Amount)
	{
		ResourceAmount -= Amount;
		return true;  // ������� ���������
	}
	return false;  // ������������ �������
}