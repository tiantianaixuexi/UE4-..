// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 *   登录游戏用的Slate
 */
class GAMEPROJECT_API SJoinMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SJoinMenuUI)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class AOverallHUD>, OverallHUD)   //声明Slate参数
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);


	

private:

	//开始游戏事件
	void BeginGameEvent();

	//退出游戏
	void QuitGameEvent();

	//HUD类
	TWeakObjectPtr<class AOverallHUD> OverallHUD;


	//样式
	const struct FOverallStyle* JoinWidgetStyle = nullptr;

};
