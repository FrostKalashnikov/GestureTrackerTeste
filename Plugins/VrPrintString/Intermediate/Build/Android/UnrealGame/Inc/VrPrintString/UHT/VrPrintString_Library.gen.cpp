// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPrintString/Public/VrPrintString_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrPrintString_Library() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VrPrintString();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Library();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Library_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrPrintString_Library::execClear_All_VR_Prints)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrPrintString_Library::Clear_All_VR_Prints(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrPrintString_Library::execRemove_VR_Print_By_Key)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrPrintString_Library::Remove_VR_Print_By_Key(Z_Param_WorldContextObject,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrPrintString_Library::execVR_Print_String_DevOnly)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bShowKeyInPrint);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrPrintString_Library::VR_Print_String_DevOnly(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_Duration,Z_Param_Color,Z_Param_Key,Z_Param_bShowKeyInPrint,Z_Param_bPrintToLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrPrintString_Library::execVR_Print_String)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bShowKeyInPrint);
		P_GET_UBOOL(Z_Param_bPrintToLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrPrintString_Library::VR_Print_String(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_Duration,Z_Param_Color,Z_Param_Key,Z_Param_bShowKeyInPrint,Z_Param_bPrintToLog);
		P_NATIVE_END;
	}
	void UVrPrintString_Library::StaticRegisterNativesUVrPrintString_Library()
	{
		UClass* Class = UVrPrintString_Library::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear_All_VR_Prints", &UVrPrintString_Library::execClear_All_VR_Prints },
			{ "Remove_VR_Print_By_Key", &UVrPrintString_Library::execRemove_VR_Print_By_Key },
			{ "VR_Print_String", &UVrPrintString_Library::execVR_Print_String },
			{ "VR_Print_String_DevOnly", &UVrPrintString_Library::execVR_Print_String_DevOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics
	{
		struct VrPrintString_Library_eventClear_All_VR_Prints_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventClear_All_VR_Prints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VR Print String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Clears all prints from view\n" },
#endif
		{ "ModuleRelativePath", "Public/VrPrintString_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all prints from view" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Library, nullptr, "Clear_All_VR_Prints", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::VrPrintString_Library_eventClear_All_VR_Prints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::VrPrintString_Library_eventClear_All_VR_Prints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics
	{
		struct VrPrintString_Library_eventRemove_VR_Print_By_Key_Parms
		{
			const UObject* WorldContextObject;
			FName Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventRemove_VR_Print_By_Key_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventRemove_VR_Print_By_Key_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VR Print String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes a specific print according to the key\n\x09* @param\x09Key\x09\x09Print key to be removed\n\x09*/" },
#endif
		{ "CPP_Default_Key", "None" },
		{ "ModuleRelativePath", "Public/VrPrintString_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specific print according to the key\n@param        Key             Print key to be removed" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Library, nullptr, "Remove_VR_Print_By_Key", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::VrPrintString_Library_eventRemove_VR_Print_By_Key_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::VrPrintString_Library_eventRemove_VR_Print_By_Key_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics
	{
		struct VrPrintString_Library_eventVR_Print_String_Parms
		{
			const UObject* WorldContextObject;
			FString InString;
			float Duration;
			FLinearColor Color;
			FName Key;
			bool bShowKeyInPrint;
			bool bPrintToLog;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_bShowKeyInPrint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowKeyInPrint;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_InString_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Key_MetaData) };
	void Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bShowKeyInPrint_SetBit(void* Obj)
	{
		((VrPrintString_Library_eventVR_Print_String_Parms*)Obj)->bShowKeyInPrint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bShowKeyInPrint = { "bShowKeyInPrint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrPrintString_Library_eventVR_Print_String_Parms), &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bShowKeyInPrint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((VrPrintString_Library_eventVR_Print_String_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrPrintString_Library_eventVR_Print_String_Parms), &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bShowKeyInPrint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::NewProp_bPrintToLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VR Print String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Prints a string to the VR view, and optionally, to the Log\n\x09* @param\x09InString\x09\x09\x09The string to log out\n\x09* @param\x09""Duration\x09\x09\x09The display duration\n\x09* @param\x09""Color\x09\x09\x09\x09The color of the text to display\n\x09* @param\x09Key\x09\x09\x09\x09\x09If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n\x09* @param\x09""bShowKeyInPrint\x09\x09Whether or not to print the output of the string along with the key. example: \"Key : String\"\n\x09* @param\x09""bPrintToLog\x09\x09\x09Whether or not to print the output to the log\n\x09*/" },
#endif
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bShowKeyInPrint", "false" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_Key", "None" },
		{ "Keywords", "vr print" },
		{ "ModuleRelativePath", "Public/VrPrintString_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a string to the VR view, and optionally, to the Log\n@param        InString                        The string to log out\n@param        Duration                        The display duration\n@param        Color                           The color of the text to display\n@param        Key                                     If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n@param        bShowKeyInPrint         Whether or not to print the output of the string along with the key. example: \"Key : String\"\n@param        bPrintToLog                     Whether or not to print the output to the log" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Library, nullptr, "VR_Print_String", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::VrPrintString_Library_eventVR_Print_String_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::VrPrintString_Library_eventVR_Print_String_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics
	{
		struct VrPrintString_Library_eventVR_Print_String_DevOnly_Parms
		{
			const UObject* WorldContextObject;
			FString InString;
			float Duration;
			FLinearColor Color;
			FName Key;
			bool bShowKeyInPrint;
			bool bPrintToLog;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_bShowKeyInPrint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowKeyInPrint;
		static void NewProp_bPrintToLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_InString_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Key_MetaData) };
	void Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bShowKeyInPrint_SetBit(void* Obj)
	{
		((VrPrintString_Library_eventVR_Print_String_DevOnly_Parms*)Obj)->bShowKeyInPrint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bShowKeyInPrint = { "bShowKeyInPrint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms), &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bShowKeyInPrint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bPrintToLog_SetBit(void* Obj)
	{
		((VrPrintString_Library_eventVR_Print_String_DevOnly_Parms*)Obj)->bPrintToLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bPrintToLog = { "bPrintToLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrPrintString_Library_eventVR_Print_String_DevOnly_Parms), &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bPrintToLog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bShowKeyInPrint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::NewProp_bPrintToLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VR Print String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Prints a string to the VR view, and optionally, to the Log\n\x09* @param\x09InString\x09\x09\x09The string to log out\n\x09* @param\x09""Duration\x09\x09\x09The display duration\n\x09* @param\x09""Color\x09\x09\x09\x09The color of the text to display\n\x09* @param\x09Key\x09\x09\x09\x09\x09If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n\x09* @param\x09""bShowKeyInPrint\x09\x09Whether or not to print the output of the string along with the key. example: \"Key : String\"\n\x09* @param\x09""bPrintToLog\x09\x09\x09Whether or not to print the output to the log\n\x09*/" },
#endif
		{ "CPP_Default_bPrintToLog", "true" },
		{ "CPP_Default_bShowKeyInPrint", "false" },
		{ "CPP_Default_Color", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_Key", "None" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "vr print devonly" },
		{ "ModuleRelativePath", "Public/VrPrintString_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a string to the VR view, and optionally, to the Log\n@param        InString                        The string to log out\n@param        Duration                        The display duration\n@param        Color                           The color of the text to display\n@param        Key                                     If a non-empty key is provided, the message will replace any existing on-screen messages with the same key.\n@param        bShowKeyInPrint         Whether or not to print the output of the string along with the key. example: \"Key : String\"\n@param        bPrintToLog                     Whether or not to print the output to the log" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Library, nullptr, "VR_Print_String_DevOnly", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::VrPrintString_Library_eventVR_Print_String_DevOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::VrPrintString_Library_eventVR_Print_String_DevOnly_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrPrintString_Library);
	UClass* Z_Construct_UClass_UVrPrintString_Library_NoRegister()
	{
		return UVrPrintString_Library::StaticClass();
	}
	struct Z_Construct_UClass_UVrPrintString_Library_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrPrintString_Library_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VrPrintString,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Library_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrPrintString_Library_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrPrintString_Library_Clear_All_VR_Prints, "Clear_All_VR_Prints" }, // 3613330166
		{ &Z_Construct_UFunction_UVrPrintString_Library_Remove_VR_Print_By_Key, "Remove_VR_Print_By_Key" }, // 3274444174
		{ &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String, "VR_Print_String" }, // 299700562
		{ &Z_Construct_UFunction_UVrPrintString_Library_VR_Print_String_DevOnly, "VR_Print_String_DevOnly" }, // 2675732451
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Library_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrPrintString_Library_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrPrintString_Library.h" },
		{ "ModuleRelativePath", "Public/VrPrintString_Library.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrPrintString_Library_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrPrintString_Library>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrPrintString_Library_Statics::ClassParams = {
		&UVrPrintString_Library::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Library_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrPrintString_Library_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVrPrintString_Library()
	{
		if (!Z_Registration_Info_UClass_UVrPrintString_Library.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrPrintString_Library.OuterSingleton, Z_Construct_UClass_UVrPrintString_Library_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrPrintString_Library.OuterSingleton;
	}
	template<> VRPRINTSTRING_API UClass* StaticClass<UVrPrintString_Library>()
	{
		return UVrPrintString_Library::StaticClass();
	}
	UVrPrintString_Library::UVrPrintString_Library(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrPrintString_Library);
	UVrPrintString_Library::~UVrPrintString_Library() {}
	struct Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Library_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Library_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrPrintString_Library, UVrPrintString_Library::StaticClass, TEXT("UVrPrintString_Library"), &Z_Registration_Info_UClass_UVrPrintString_Library, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrPrintString_Library), 496158419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Library_h_3755240801(TEXT("/Script/VrPrintString"),
		Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Library_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Library_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
