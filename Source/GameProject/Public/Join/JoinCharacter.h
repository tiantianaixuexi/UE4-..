// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JoinCharacter.generated.h"

/*
* ����ǵ�¼��Ϸ�Ľ�ɫ
*/
UCLASS()
class GAMEPROJECT_API AJoinCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AJoinCharacter();


	//������ֱ�
	class USpringArmComponent* SpringArmComponent = nullptr;
	//�����
	class UCameraComponent* CameraComponent = nullptr;
};
