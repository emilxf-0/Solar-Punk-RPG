// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BodySlotData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SOLARPUNKRPG_API UBodySlotData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FString BoneName;

	UPROPERTY(EditDefaultsOnly)
	USkeletalMesh* AssociatedMesh;

	
private:

	
};
