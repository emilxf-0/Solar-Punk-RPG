// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SolarPunkRPG/AC_MeshChanger.h"
#include "CharacterCreationDoll.generated.h"

UCLASS()
class SOLARPUNKRPG_API ACharacterCreationDoll : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterCreationDoll();
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TArray <USkeletalMeshComponent*> SkeletalMeshes;
	UPROPERTY(EditDefaultsOnly)
	EBodyPart LastEnum = EBodyPart::LASTELEMENT; // this needs to always be the last enum

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TMap<EBodyPart, USkeletalMeshComponent*> SkeletalMeshMap;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UAC_MeshChanger* meshChangerComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
