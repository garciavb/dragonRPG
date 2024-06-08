// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedPlayerInput.h"
#include "PaperCharacter.h"
#include "EnhancedInputComponent.h"
#include "DragonCharacter.generated.h"

/**
 * 
 */
UCLASS()
class DRAGONRPG_API ADragonCharacter : public APaperCharacter
{
	GENERATED_BODY()

private:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void moveTheDragon(const FInputActionValue& value);

    UPROPERTY(EditAnywhere, Category=Input)
    UInputAction* MoveAction;
	
};
