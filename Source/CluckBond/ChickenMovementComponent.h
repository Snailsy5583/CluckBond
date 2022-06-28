// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ChickenMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class CLUCKBOND_API UChickenMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
protected:
	virtual void PhysFlying(float deltaTime, int32 Iterations) override;
};
