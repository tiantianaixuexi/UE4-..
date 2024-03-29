// Fill out your copyright notice in the Description page of Project Settings.


#include "SJoinMenuUI.h"
#include "SlateOptMacros.h"
#include <Kismet/KismetSystemLibrary.h>
#include <SButton.h>
#include "OverallHUD.h"
#include <SConstraintCanvas.h>
#include <STextBlock.h>
#include "Engine/Engine.h"
#include "Style.h"
#include "OverallWidgetStyle.h"



BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SJoinMenuUI::Construct(const FArguments& InArgs)
{
	//获取样式
	JoinWidgetStyle = &Style::Get().GetWidgetStyle<FOverallStyle>(TEXT("JoinStyle"));
	
		ChildSlot
		[
			// Populate the widget
			SNew(SConstraintCanvas)
			+ SConstraintCanvas::Slot()								//设置插槽
			.Anchors(FAnchors(1.0f, 0.5f))					//设置锚点
			.Offset(FMargin(-370.0f, -400.0f, 300.0f, 150.0f)) //设置位置
			[
				SNew(SButton)  //开始游戏按钮
				.ButtonStyle(&JoinWidgetStyle->JoinButtonStyle)
				.OnReleased(this, &SJoinMenuUI::BeginGameEvent)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.ContentPadding(FMargin())
				[
				  SNew(STextBlock)
				  .Text(FText::FromString(TEXT("开始游戏")))
				  .TextStyle(&JoinWidgetStyle->JoinTextBlockStyle)	
				]
					
			]
			+ SConstraintCanvas::Slot()
				.Anchors(FAnchors(1.0f, 0.5f))
				.Offset(FMargin(-370.0f, -200.0f, 300.0f, 150.0f))
				[
					SNew(SButton) //退出出游戏按钮
					.ButtonStyle(&JoinWidgetStyle->JoinButtonStyle)
				.OnReleased(this, &SJoinMenuUI::QuitGameEvent)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.ContentPadding(FMargin())
				[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("退出游戏")))
				.TextStyle(&JoinWidgetStyle->JoinTextBlockStyle)
				]
			]

		];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SJoinMenuUI::BeginGameEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("Pressed"));
}


void SJoinMenuUI::QuitGameEvent()
{
	UE_LOG(LogTemp, Warning, TEXT("Released"));
}
