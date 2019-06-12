// Fill out your copyright notice in the Description page of Project Settings.


#include "Style.h"
#include "SlateGameResources.h"
#include "SlateStyleRegistry.h"

TSharedPtr<FSlateStyleSet> Style::StyleInstance = NULL;

void Style::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

FName Style::GetStyleSetName()
{
	static FName StyleSetName(TEXT("FOverallStyle"));
	 return StyleSetName;
}

void Style::ShutDown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

const ISlateStyle& Style::Get()
{
	return *StyleInstance;
}

TSharedRef<class FSlateStyleSet> Style::Create()
{
	TSharedRef<FSlateStyleSet> StyleRef = FSlateGameResources::New(GetStyleSetName(),TEXT("/Game/Style"),TEXT("/Game/Style"));
	return StyleRef;
}
