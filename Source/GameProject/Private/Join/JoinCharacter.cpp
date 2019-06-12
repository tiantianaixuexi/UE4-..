// Fill out your copyright notice in the Description page of Project Settings.


#include "JoinCharacter.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>

// Sets default values
AJoinCharacter::AJoinCharacter()
{

	//��ʼ��������ֱ�
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->TargetArmLength = 300.0f;
	SpringArmComponent->SetupAttachment(RootComponent);

	//��ʼ�������
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CamerComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
}
