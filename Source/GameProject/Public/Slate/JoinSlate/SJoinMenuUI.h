// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 *   ��¼��Ϸ�õ�Slate
 */
class GAMEPROJECT_API SJoinMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SJoinMenuUI)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class AOverallHUD>, OverallHUD)   //����Slate����
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);


	

private:

	//��ʼ��Ϸ�¼�
	void BeginGameEvent();

	//�˳���Ϸ
	void QuitGameEvent();

	//HUD��
	TWeakObjectPtr<class AOverallHUD> OverallHUD;


	//��ʽ
	const struct FOverallStyle* JoinWidgetStyle = nullptr;

};
