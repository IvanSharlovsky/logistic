// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceCarrierPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/PlayerController.h"
#include "AIController.h"

AResourceCarrierPawn::AResourceCarrierPawn()
{
    // Создание и настройка StaticMesh компонента
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    RootComponent = StaticMesh;

    // Загрузка меша шара из стандартных ресурсов Unreal Engine
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (SphereMesh.Succeeded())
    {
        StaticMesh->SetStaticMesh(SphereMesh.Object);
    }

    // Включение обновлений каждого кадра
    PrimaryActorTick.bCanEverTick = true;
}

void AResourceCarrierPawn::BeginPlay()
{
    Super::BeginPlay();
    // Получение текущей системы навигации
    NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
}

void AResourceCarrierPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Логика перемещения и взаимодействия
}

void AResourceCarrierPawn::MoveToWarehouse(AActor* TargetWarehouse)
{
    if (NavSystem && TargetWarehouse)
    {
        // Используем AIController для перемещения грузчика
        AAIController* AIController = Cast<AAIController>(GetController());
        if (AIController)
        {
            // Перемещение грузчика к цели
            AIController->MoveToActor(TargetWarehouse, 5.0f); // 5.0f - допустимое расстояние до цели
        }
    }
}

