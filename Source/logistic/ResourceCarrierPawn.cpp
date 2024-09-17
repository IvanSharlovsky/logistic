// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/PlayerController.h"
#include "AIController.h"

AResourceCarrierPawn::AResourceCarrierPawn()
{
    // �������� � ��������� StaticMesh ����������
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    // �������� ���� ���� �� ����������� �������� Unreal Engine
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (SphereMesh.Succeeded())
    {
        StaticMesh->SetStaticMesh(SphereMesh.Object);
    }

    // ��������� ���������� ������� �����
    PrimaryActorTick.bCanEverTick = true;
}

void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();
    // ��������� ������� ������� ���������
    NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
}

void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // ������ ����������� � ��������������
}

void AResourceCarrierPawn::MoveToWarehouse(AActor* TargetWarehouse)
{
    if (NavSystem && TargetWarehouse)
    {
        // ���������� AIController ��� ����������� ��������
        AAIController* AIController = Cast<AAIController>(GetController());
        if (AIController)
        {
            // ����������� �������� � ����
            AIController->MoveToActor(TargetWarehouse, 5.0f); // 5.0f - ���������� ���������� �� ����
        }
    }
}

