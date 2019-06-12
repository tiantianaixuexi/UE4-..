 // Fill out your copyright notice in the Description page of Project Settings.


#include "JoinGameMode.h"
#include "JoinCharacter.h"
#include "JoinController.h"
#include "OverallHUD.h"

AJoinGameMode::AJoinGameMode()
{
	DefaultPawnClass = AJoinCharacter::StaticClass();
	PlayerControllerClass = AJoinController::StaticClass();
	HUDClass = AOverallHUD::StaticClass();
}
