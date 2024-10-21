// Copyright 2024 Michel Brito.

#include "VrPrintString.h"
#include "Developer/Settings/Public/ISettingsModule.h"
#include "VrPrintString_Settings.h"
#include "UObject/ConstructorHelpers.h"

#define LOCTEXT_NAMESPACE "FVrPrintStringModule"

void FVrPrintStringModule::StartupModule()
{
	if(ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "VrPrintString_Settings",
			LOCTEXT("RuntimeSettingsName", "VR Print String"), LOCTEXT("RuntimeSettingsDescription", "A simple plugin to help develop virtual reality experiences"),
			GetMutableDefault<UVrPrintString_Settings>());
	}
}

void FVrPrintStringModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVrPrintStringModule, VrPrintString)