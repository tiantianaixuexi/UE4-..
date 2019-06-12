// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OverallHUD.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPROJECT_API AOverallHUD : public AHUD
{
	GENERATED_BODY()



private:

	//��ʼ������
	virtual void PostInitializeComponents() override;


	//��ҵ�¼��Ϸ��Slate
	TSharedPtr<class SJoinMenuUI> JoinMenUI;
};
