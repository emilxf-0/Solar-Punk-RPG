// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterCreationDoll.h"


// Sets default values
ACharacterCreationDoll::ACharacterCreationDoll()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	for (int i = 0; i < (uint8)LastEnum; i++) 
	{
		FString string = FString::FromInt(i);
		FName name = FName(*string);
		USkeletalMeshComponent* mesh = NewObject<USkeletalMeshComponent>(this, name);
		mesh->SetupAttachment(this->GetRootComponent());
		mesh->RegisterComponent();
		SkeletalMeshMap.Add(static_cast<EBodyPart>(i), mesh);
		
	}
	UAC_MeshChanger* meshChanger = NewObject<UAC_MeshChanger>(this, "MeshChanger");
	meshChanger->RegisterComponent();
	meshChangerComponent = meshChanger;
}

// Called when the game starts or when spawned
void ACharacterCreationDoll::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterCreationDoll::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterCreationDoll::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

