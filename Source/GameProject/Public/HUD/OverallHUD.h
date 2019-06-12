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

	//初始化函数
	virtual void PostInitializeComponents() override;


	//玩家登录游戏的Slate
	TSharedPtr<class SJoinMenuUI> JoinMenUI;
};
