// Copyright 2024 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FVrPrintStringModule : public IModuleInterface
{
public:
	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
