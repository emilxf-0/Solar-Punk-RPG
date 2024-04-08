// Fill out your copyright notice in the Description page of Project Settings.

#include "AC_MeshChanger.h"

// Sets default values for this component's properties
UAC_MeshChanger::UAC_MeshChanger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


void UAC_MeshChanger::ChangeMesh(EBodyPart bodypart, int index)
{
	UBodySlot* data = BodyMap.FindRef(bodypart);
}

// Called when the game starts
void UAC_MeshChanger::BeginPlay()
{
	Super::BeginPlay();
	InitializeBodyMap();
	// ...
	
}

void UAC_MeshChanger::InitializeBodyMap()
{
	for (auto It = AvailableSlots.CreateConstIterator(); It; ++It) {
		UBodySlot* bodySlot = NewObject<UBodySlot>(this, It->Value);
		BodyMap.Add(It->Key, bodySlot);
	}
}


// Called every frame
void UAC_MeshChanger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

