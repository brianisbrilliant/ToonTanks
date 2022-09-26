// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
// #include "Components/CapsuleComponent.h"			// not here, but in the .cpp file.
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

private:
	
	UPROPERTY() class UCapsuleComponent* CapsuleComp;		// add an include to the .cpp file.

	UPROPERTY() UStaticMeshComponent* BaseMesh;				// type included by default with all actors.

	UPROPERTY() UStaticMeshComponent* TurretMesh;

	UPROPERTY() USceneComponent* ProjectileSpawnPoint;

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
