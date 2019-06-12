// Fill out your copyright notice in the Description page of Project Settings.


#include "JoinCharacter.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>

// Sets default values
AJoinCharacter::AJoinCharacter()
{

	//初始化摄像机手臂
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->TargetArmLength = 300.0f;
	SpringArmComponent->SetupAttachment(RootComponent);

	//初始化摄像机
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CamerComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
}
