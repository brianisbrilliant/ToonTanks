// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category="Components") class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category="Components") class UCameraComponent* Camera;

public:
	ATank();		// constructor.visi
	
	
};
