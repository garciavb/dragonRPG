// Fill out your copyright notice in the Description page of Project Settings.


#include "DragonCharacter.h"

void ADragonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    if (Input)
    {
        if (MoveAction)
        {
            Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADragonCharacter::moveTheDragon);
        }
    }
}

void ADragonCharacter::moveTheDragon(const FInputActionValue& value)
{
    UE_LOG(LogTemp, Warning, TEXT("This dragon is moving!"));
}