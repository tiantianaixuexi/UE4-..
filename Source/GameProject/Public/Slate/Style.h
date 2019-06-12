// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GAMEPROJECT_API Style
{




public:
	
	//注册函数
	static void Initialize();

	//获取类型的名字
	static FName GetStyleSetName();

	//取消注册
	static void ShutDown();

	static const ISlateStyle& Get();

private:


	static TSharedRef<class FSlateStyleSet> Create();

	static TSharedPtr<FSlateStyleSet> StyleInstance;
};
