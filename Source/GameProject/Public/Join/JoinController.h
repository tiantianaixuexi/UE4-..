// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JoinController.generated.h"

/**
 *   ��¼�õ�Controller
 */
UCLASS()
class GAMEPROJECT_API AJoinController : public APlayerController
{
	GENERATED_BODY()


public:
	AJoinController();
	

protected:

	virtual void BeginPlay() override;



};
