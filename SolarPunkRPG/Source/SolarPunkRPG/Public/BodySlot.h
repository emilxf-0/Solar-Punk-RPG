// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BodySlotData.h"
#include "BodySlot.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SOLARPUNKRPG_API UBodySlot : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, CateGory = "Body Slots")
	TArray<TSubclassOf<UBodySlotData>> BodySlotDatas;
	UFUNCTION()
	int GetAmountOfMeshes() {
		return BodySlotDatas.Num();
	}
	
};
