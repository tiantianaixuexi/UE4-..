// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class GAMEPROJECT_API Style
{




public:
	
	//ע�ắ��
	static void Initialize();

	//��ȡ���͵�����
	static FName GetStyleSetName();

	//ȡ��ע��
	static void ShutDown();

	static const ISlateStyle& Get();

private:


	static TSharedRef<class FSlateStyleSet> Create();

	static TSharedPtr<FSlateStyleSet> StyleInstance;
};
