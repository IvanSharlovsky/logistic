// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h" 
#include "GameFramework/PlayerController.h"
#include "LogisticPlayerController.generated.h"

UCLASS()
class LOGISTIC_API ALogisticPlayerController : public APlayerController
{
    GENERATED_BODY()

protected:
    virtual void SetupInputComponent() override;

public:
    ALogisticPlayerController();

    // Movement input handlers
    void MoveForward(float Value);
    void MoveRight(float Value);
    /*void ZoomCamera(float AxisValue);*/

    /*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;*/

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
    float CameraSpeed = 1000.0f;  // Adjust movement speed here

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
    //float ZoomSpeed = 500.0f;     // Adjust zoom speed here

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
    //float MinZoomDistance = 300.0f; // Minimum zoom distance

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
    //float MaxZoomDistance = 300000.0f; // Maximum zoom distance

    FVector2D MovementInput;   // Store the input for movement
};