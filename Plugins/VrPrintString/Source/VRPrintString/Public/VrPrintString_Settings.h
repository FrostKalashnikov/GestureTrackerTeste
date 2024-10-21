// Copyright 2024 Michel Brito.

#pragma once

#include "Fonts/SlateFontInfo.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VrPrintString_Settings.generated.h"

UCLASS(config = MySetting)
class VRPRINTSTRING_API UVrPrintString_Settings : public UObject
{
	GENERATED_BODY()
	
public:
	UVrPrintString_Settings(const FObjectInitializer& obj);
	
	//Size of the area where prints will be displayed
	UPROPERTY(Config, EditAnywhere, Category = "Settings", meta=(ClampMin=0, ClampMax=800, UIMin=0, UIMax=800))
	FVector2D HUD_Size;

	UPROPERTY(Config, EditAnywhere, Category = "Settings")
	FSlateFontInfo FontInfo;
	
};
