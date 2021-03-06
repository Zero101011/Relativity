// Copyright 29.07.2018 Tefel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GravityCharacter.generated.h"

class UGravityMovementComponent;

// Gravity character class which overrides gravity movement component
UCLASS()
class DIRGRAVITY_API AGravityCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGravityCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Character")
	UGravityMovementComponent* GetGravityMovementComponent();

};
