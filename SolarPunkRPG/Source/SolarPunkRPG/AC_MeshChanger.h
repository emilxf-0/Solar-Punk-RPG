// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/BodySlot.h"
#include "AC_MeshChanger.generated.h"



UENUM(BlueprintType)
enum class EBodyPart : uint8 {
	VE_HeadPiece UMETA(DisplayName = "Head Piece"),
	VE_Torso UMETA(DisplayName = "Torso"),
	VE_LegPiece UMETA(DisplayName = "Pants"),
	VE_Shoes UMETA(DisplayName = "Shoes"),
	VE_MainHand UMETA(DisplayName = "Main Weapon"),
	VE_Gloves UMETA(DisplayName = "Gloves"),
	VE_Offhand UMETA(DisplayName = "Offhand Weapon"),
	VE_TwoHand UMETA(DisplayName = "Two Handed"),
	LASTELEMENT UMETA(DisplayName = "LAST ELEMENT DO NOT USE")
};
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOLARPUNKRPG_API UAC_MeshChanger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_MeshChanger();

	
	UPROPERTY(EditDefaultsOnly, Category = "Body Slots")
	TMap<EBodyPart, TSubclassOf<UBodySlot>> AvailableSlots;
	

	UPROPERTY()
	TMap<EBodyPart, UBodySlot*> BodyMap;
	UFUNCTION(BlueprintCallable)
	void ChangeMesh(EBodyPart bodypart, int index);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void InitializeBodyMap();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
