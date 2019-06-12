// Fill out your copyright notice in the Description page of Project Settings.


#include "OverallHUD.h"
#include "SJoinMenuUI.h"
#include "SWeakWidget.h"
#include "Engine/Engine.h"



void AOverallHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();



	//�ж��ӿ��Ƿ����
	if (GEngine && GEngine->GameViewport){	
		SAssignNew(JoinMenUI, SJoinMenuUI);
		//���Slate
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(JoinMenUI.ToSharedRef()));
	}
}
