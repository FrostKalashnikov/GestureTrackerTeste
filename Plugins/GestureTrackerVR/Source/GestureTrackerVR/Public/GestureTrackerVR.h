// Copyright 2016-2017 Hunter Delattre. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FGestureTrackerVRModule : public IModuleInterface
{
public:

    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};