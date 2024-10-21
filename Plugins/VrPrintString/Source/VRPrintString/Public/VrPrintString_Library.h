// Copyright 2024 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VrPrintString_Library.generated.h"

UCLASS()
class VRPRINTSTRING_API UVrPrintString_Library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	* Prints a string to the VR view, and optionally, to the Log
	* @param	InString			The string to log out
	* @param	Duration			The display duration
	* @param	Color				The color of the text to display
	* @param	Key					If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.
	* @param	bShowKeyInPrint		Whether or not to print the output of the string along with the key. example: "Key : String"
	* @param	bPrintToLog			Whether or not to print the output to the log
	*/
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, Keywords = "vr print", AdvancedDisplay = "3"), Category = "VR Print String")
    static void VR_Print_String(const UObject* WorldContextObject, 
    	const FString& InString = "Hello",
    	float Duration = 2.f,
    	FLinearColor Color = FLinearColor(0.0, 0.66, 1.0),
    	const FName Key = NAME_None,
    	bool bShowKeyInPrint = false,
    	bool bPrintToLog = true);

	/**
	* Prints a string to the VR view, and optionally, to the Log
	* @param	InString			The string to log out
	* @param	Duration			The display duration
	* @param	Color				The color of the text to display
	* @param	Key					If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.
	* @param	bShowKeyInPrint		Whether or not to print the output of the string along with the key. example: "Key : String"
	* @param	bPrintToLog			Whether or not to print the output to the log
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, Keywords = "vr print devonly", AdvancedDisplay = "3", DevelopmentOnly), Category = "VR Print String")
	static void VR_Print_String_DevOnly(const UObject* WorldContextObject,
		const FString& InString = "Hello",
		float Duration = 2.f,
		FLinearColor Color = FLinearColor(0.0, 0.66, 1.0),
		const FName Key = NAME_None,
		bool bShowKeyInPrint = false,
		bool bPrintToLog = true);

	/**
	* Removes a specific print according to the key
	* @param	Key		Print key to be removed
	*/
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext), Category = "VR Print String")
	static void Remove_VR_Print_By_Key(const UObject* WorldContextObject, const FName Key = NAME_None);
	
	//Clears all prints from view
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext), Category = "VR Print String")
	static void Clear_All_VR_Prints(const UObject* WorldContextObject);
	
};
