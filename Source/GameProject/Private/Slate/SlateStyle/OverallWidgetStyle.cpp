// Fill out your copyright notice in the Description page of Project Settings.


#include "OverallWidgetStyle.h"

FOverallStyle::FOverallStyle()
{
}

FOverallStyle::~FOverallStyle()
{
}

const FName FOverallStyle::TypeName(TEXT("FOverallStyle"));

const FOverallStyle& FOverallStyle::GetDefault()
{
	static FOverallStyle Default;
	return Default;
}

void FOverallStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them

}

