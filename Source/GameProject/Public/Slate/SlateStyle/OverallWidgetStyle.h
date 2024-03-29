// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "SlateWidgetStyleContainerBase.h"

#include "OverallWidgetStyle.generated.h"

/**
 * 
 */
USTRUCT()
struct GAMEPROJECT_API FOverallStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FOverallStyle();
	virtual ~FOverallStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FOverallStyle& GetDefault();


	UPROPERTY(EditAnywhere, Category = "JoinUI")
		FSlateBrush FirstJoinSlateBrush;
	
	UPROPERTY(EditAnywhere, Category = "登录游戏按钮的样式")
		struct FButtonStyle  JoinButtonStyle;

	UPROPERTY(EditAnywhere, Category = "登陆游戏中的字体")
		struct FTextBlockStyle JoinTextBlockStyle;
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UOverallWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FOverallStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
