// Fill out your copyright notice in the Description page of Project Settings.

#include "GameProject.h"
#include "Modules/ModuleManager.h"
#include "Style.h"
#include "SlateStyleRegistry.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, GameProject, "GameProject" );

void FSlateStyleModule::StartupModule()
{

	FSlateStyleRegistry::UnRegisterSlateStyle(Style::GetStyleSetName());
	Style::Initialize();
}

void FSlateStyleModule::ShutdownModule()
{

	Style::ShutDown();
}
