// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/BodySlot.h"
#include "AC_MeshChanger.generated.h"

UENUM(BlueprintType)
enum class EBodyPart : uint8 {
	VE_HeadPiece  UMETA(DisplayName = "Head Piece"),
	VE_ChestPiece  UMETA(DisplayName = "Chest Piece"),
	VE_LegPiece  UMETA(DisplayName = "Legs"),
	VE_Charm UMETA(DisplayName = "Charm"),
};
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOLARPUNKRPG_API UAC_MeshChanger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_MeshChanger();

	
	UPROPERTY(EditDefaultsOnly, Category = "Body Slots")
	USkeletalMeshComponent* characterMeshComponent;
	UPROPERTY(EditDefaultsOnly, Category = "Body Slots")
	TMap<EBodyPart, UBodySlot*> bodyMap;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
