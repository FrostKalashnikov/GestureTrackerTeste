// Copyright 2024 Michel Brito.

#include "VrPrintString_Settings.h"
#include "UObject/ConstructorHelpers.h"

UVrPrintString_Settings::UVrPrintString_Settings(const FObjectInitializer& obj)
{
	static ConstructorHelpers::FObjectFinder<UObject> Font(TEXT("/VrPrintString/Fonts/Roboto"));
	if (Font.Succeeded())
		FontInfo = FSlateFontInfo(Font.Object, 16, FName("Regular"));
	
	HUD_Size = FVector2d(400.f, 400.f);
}