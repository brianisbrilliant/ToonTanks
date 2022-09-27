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
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess)); 
	class UCapsuleComponent* CapsuleComp;		// add an include to the .cpp file.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess)); 
	UStaticMeshComponent* BaseMesh;				// type included by default with all actors.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess)); 
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess)); 
	USceneComponent* ProjectileSpawnPoint;

public:
	// Sets default values for this pawn's properties
	ABasePawn();


	// Here's some dumb bullshit.
	// these variables are exposed to the details panel, but not the eventgraph.
	UPROPERTY(VisibleAnywhere) int32 VisibleAnywhereInt = 12;
	UPROPERTY(EditAnywhere) int32 EditAnywhereInt = 22;
	UPROPERTY(VisibleInstanceOnly) int32 VisibleInstanceOnlyInt = 32;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PawnName = "DestructoBot";
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Health = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Damage = 5;

		

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
