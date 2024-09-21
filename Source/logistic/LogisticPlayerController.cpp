// Fill out your copyright notice in the Description page of Project Settings.


#include "LogisticPlayerController.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

ALogisticPlayerController::ALogisticPlayerController()
{
    bShowMouseCursor = true;  // Show the mouse cursor
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    //// Set up the spring arm (camera boom)
    //CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    //CameraBoom->SetupAttachment(RootComponent);
    //CameraBoom->TargetArmLength = 800.0f;  // Default distance for camera
    //CameraBoom->bEnableCameraLag = true;
    //CameraBoom->CameraLagSpeed = 3.0f;

    //// Set up the camera
    //CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    //CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
}

void ALogisticPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Bind movement to WASD
    InputComponent->BindAxis("MoveForward", this, &ALogisticPlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &ALogisticPlayerController::MoveRight);

    //// Bind mouse wheel to zoom
    //InputComponent->BindAxis("ZoomCamera", this, &ALogisticPlayerController::ZoomCamera);
}

void ALogisticPlayerController::MoveForward(float Value)
{
    // Moves the camera forward (W moves forward, S moves backward)
    if (Value != 0.0f)
    {
        FVector ForwardDirection = FVector(1.0f, 0.0f, 0.0f);  // Move along the X axis
        GetPawn()->AddMovementInput(ForwardDirection, Value * CameraSpeed * GetWorld()->DeltaTimeSeconds);
    }
}

void ALogisticPlayerController::MoveRight(float Value)
{
    // Moves the camera right (D moves right, A moves left)
    if (Value != 0.0f)
    {
        FVector RightDirection = FVector(0.0f, 1.0f, 0.0f);  // Move along the Y axis
        GetPawn()->AddMovementInput(RightDirection, Value * CameraSpeed * GetWorld()->DeltaTimeSeconds);
    }
}

//void ALogisticPlayerController::ZoomCamera(float AxisValue)
//{
//    if (AxisValue != 0.0f && CameraBoom)
//    {
//        // Adjust the target arm length to zoom in or out
//        float NewArmLength = FMath::Clamp(CameraBoom->TargetArmLength - AxisValue * ZoomSpeed, MinZoomDistance, MaxZoomDistance);
//        CameraBoom->TargetArmLength = NewArmLength;
//    }
//}
