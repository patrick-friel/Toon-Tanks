// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksPlayerController.h"

void AToonTanksPlayerController::SetPlayerEnabledState(book bPlayerEnabled)
{
     if (bPlayerEnabled)
     {
         GetPawn()->EnableInput()
     }
}