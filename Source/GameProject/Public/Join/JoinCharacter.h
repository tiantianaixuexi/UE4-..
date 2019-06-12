// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JoinCharacter.generated.h"

/*
* 这个是登录游戏的角色
*/
UCLASS()
class GAMEPROJECT_API AJoinCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AJoinCharacter();


	//摄像机手臂
	class USpringArmComponent* SpringArmComponent = nullptr;
	//摄像机
	class UCameraComponent* CameraComponent = nullptr;
};
