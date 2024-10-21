// Copyright 2024 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Fonts/SlateFontInfo.h"
#include "VrPrintString_Interface.generated.h"

UINTERFACE(MinimalAPI)
class UVrPrintString_Interface : public UInterface
{
	GENERATED_BODY()
};

class VRPRINTSTRING_API IVrPrintString_Interface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "VR Print String" )
	void AddOrUpdateMessageOnVR(
		const FString& InString = "Hello",
		float Duration = 2.f,
		FLinearColor Color = FLinearColor(0.0, 0.66, 1.0),
		const FName Key = NAME_None,
		bool bShowKeyInPrint = false);
	
	UFUNCTION(BlueprintNativeEvent, Category = "VR Print String" )
	void ClearAllMessagesOnVR();

	UFUNCTION(BlueprintNativeEvent, Category = "VR Print String" )
	void RemoveMessageByKey(FName Key = NAME_None);

	UFUNCTION(BlueprintNativeEvent, Category = "VR Print String" )
	void SetupHUD(FVector2D HUD_Size, FSlateFontInfo FontInfo);
	
};
