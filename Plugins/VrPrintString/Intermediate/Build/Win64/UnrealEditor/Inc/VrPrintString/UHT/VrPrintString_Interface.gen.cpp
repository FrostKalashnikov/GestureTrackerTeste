// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPrintString/Public/VrPrintString_Interface.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrPrintString_Interface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_VrPrintString();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Interface();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Interface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVrPrintString_Interface::execSetupHUD)
	{
		P_GET_STRUCT(FVector2D,Z_Param_HUD_Size);
		P_GET_STRUCT(FSlateFontInfo,Z_Param_FontInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupHUD_Implementation(Z_Param_HUD_Size,Z_Param_FontInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrPrintString_Interface::execRemoveMessageByKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMessageByKey_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrPrintString_Interface::execClearAllMessagesOnVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMessagesOnVR_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrPrintString_Interface::execAddOrUpdateMessageOnVR)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bShowKeyInPrint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateMessageOnVR_Implementation(Z_Param_InString,Z_Param_Duration,Z_Param_Color,Z_Param_Key,Z_Param_bShowKeyInPrint);
		P_NATIVE_END;
	}
	struct VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms
	{
		FString InString;
		float Duration;
		FLinearColor Color;
		FName Key;
		bool bShowKeyInPrint;
	};
	struct VrPrintString_Interface_eventRemoveMessageByKey_Parms
	{
		FName Key;
	};
	struct VrPrintString_Interface_eventSetupHUD_Parms
	{
		FVector2D HUD_Size;
		FSlateFontInfo FontInfo;
	};
	void IVrPrintString_Interface::AddOrUpdateMessageOnVR(const FString& InString, float Duration, FLinearColor Color, const FName Key, bool bShowKeyInPrint)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddOrUpdateMessageOnVR instead.");
	}
	void IVrPrintString_Interface::ClearAllMessagesOnVR()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearAllMessagesOnVR instead.");
	}
	void IVrPrintString_Interface::RemoveMessageByKey(FName Key)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveMessageByKey instead.");
	}
	void IVrPrintString_Interface::SetupHUD(FVector2D HUD_Size, FSlateFontInfo FontInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetupHUD instead.");
	}
	void UVrPrintString_Interface::StaticRegisterNativesUVrPrintString_Interface()
	{
		UClass* Class = UVrPrintString_Interface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateMessageOnVR", &IVrPrintString_Interface::execAddOrUpdateMessageOnVR },
			{ "ClearAllMessagesOnVR", &IVrPrintString_Interface::execClearAllMessagesOnVR },
			{ "RemoveMessageByKey", &IVrPrintString_Interface::execRemoveMessageByKey },
			{ "SetupHUD", &IVrPrintString_Interface::execSetupHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics
	{
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_InString_MetaData), Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_InString_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Key_MetaData) };
	void Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_bShowKeyInPrint_SetBit(void* Obj)
	{
		((VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms*)Obj)->bShowKeyInPrint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_bShowKeyInPrint = { "bShowKeyInPrint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms), &Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_bShowKeyInPrint_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::NewProp_bShowKeyInPrint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Print String" },
		{ "ModuleRelativePath", "Public/VrPrintString_Interface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Interface, nullptr, "AddOrUpdateMessageOnVR", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::PropPointers), sizeof(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::PropPointers) < 2048);
	static_assert(sizeof(VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Print String" },
		{ "ModuleRelativePath", "Public/VrPrintString_Interface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Interface, nullptr, "ClearAllMessagesOnVR", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventRemoveMessageByKey_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Print String" },
		{ "ModuleRelativePath", "Public/VrPrintString_Interface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Interface, nullptr, "RemoveMessageByKey", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::PropPointers), sizeof(VrPrintString_Interface_eventRemoveMessageByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(VrPrintString_Interface_eventRemoveMessageByKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HUD_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::NewProp_HUD_Size = { "HUD_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventSetupHUD_Parms, HUD_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::NewProp_FontInfo = { "FontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrPrintString_Interface_eventSetupHUD_Parms, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(0, nullptr) }; // 2074891513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::NewProp_HUD_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::NewProp_FontInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Print String" },
		{ "ModuleRelativePath", "Public/VrPrintString_Interface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrPrintString_Interface, nullptr, "SetupHUD", nullptr, nullptr, Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::PropPointers), sizeof(VrPrintString_Interface_eventSetupHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::PropPointers) < 2048);
	static_assert(sizeof(VrPrintString_Interface_eventSetupHUD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrPrintString_Interface);
	UClass* Z_Construct_UClass_UVrPrintString_Interface_NoRegister()
	{
		return UVrPrintString_Interface::StaticClass();
	}
	struct Z_Construct_UClass_UVrPrintString_Interface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrPrintString_Interface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VrPrintString,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Interface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrPrintString_Interface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrPrintString_Interface_AddOrUpdateMessageOnVR, "AddOrUpdateMessageOnVR" }, // 3548675295
		{ &Z_Construct_UFunction_UVrPrintString_Interface_ClearAllMessagesOnVR, "ClearAllMessagesOnVR" }, // 3850101438
		{ &Z_Construct_UFunction_UVrPrintString_Interface_RemoveMessageByKey, "RemoveMessageByKey" }, // 645166739
		{ &Z_Construct_UFunction_UVrPrintString_Interface_SetupHUD, "SetupHUD" }, // 1094672275
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Interface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrPrintString_Interface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrPrintString_Interface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrPrintString_Interface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVrPrintString_Interface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrPrintString_Interface_Statics::ClassParams = {
		&UVrPrintString_Interface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Interface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrPrintString_Interface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVrPrintString_Interface()
	{
		if (!Z_Registration_Info_UClass_UVrPrintString_Interface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrPrintString_Interface.OuterSingleton, Z_Construct_UClass_UVrPrintString_Interface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrPrintString_Interface.OuterSingleton;
	}
	template<> VRPRINTSTRING_API UClass* StaticClass<UVrPrintString_Interface>()
	{
		return UVrPrintString_Interface::StaticClass();
	}
	UVrPrintString_Interface::UVrPrintString_Interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrPrintString_Interface);
	UVrPrintString_Interface::~UVrPrintString_Interface() {}
	static FName NAME_UVrPrintString_Interface_AddOrUpdateMessageOnVR = FName(TEXT("AddOrUpdateMessageOnVR"));
	void IVrPrintString_Interface::Execute_AddOrUpdateMessageOnVR(UObject* O, const FString& InString, float Duration, FLinearColor Color, const FName Key, bool bShowKeyInPrint)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrPrintString_Interface::StaticClass()));
		VrPrintString_Interface_eventAddOrUpdateMessageOnVR_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrPrintString_Interface_AddOrUpdateMessageOnVR);
		if (Func)
		{
			Parms.InString=InString;
			Parms.Duration=Duration;
			Parms.Color=Color;
			Parms.Key=Key;
			Parms.bShowKeyInPrint=bShowKeyInPrint;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrPrintString_Interface*)(O->GetNativeInterfaceAddress(UVrPrintString_Interface::StaticClass())))
		{
			I->AddOrUpdateMessageOnVR_Implementation(InString,Duration,Color,Key,bShowKeyInPrint);
		}
	}
	static FName NAME_UVrPrintString_Interface_ClearAllMessagesOnVR = FName(TEXT("ClearAllMessagesOnVR"));
	void IVrPrintString_Interface::Execute_ClearAllMessagesOnVR(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrPrintString_Interface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVrPrintString_Interface_ClearAllMessagesOnVR);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVrPrintString_Interface*)(O->GetNativeInterfaceAddress(UVrPrintString_Interface::StaticClass())))
		{
			I->ClearAllMessagesOnVR_Implementation();
		}
	}
	static FName NAME_UVrPrintString_Interface_RemoveMessageByKey = FName(TEXT("RemoveMessageByKey"));
	void IVrPrintString_Interface::Execute_RemoveMessageByKey(UObject* O, FName Key)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrPrintString_Interface::StaticClass()));
		VrPrintString_Interface_eventRemoveMessageByKey_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrPrintString_Interface_RemoveMessageByKey);
		if (Func)
		{
			Parms.Key=Key;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrPrintString_Interface*)(O->GetNativeInterfaceAddress(UVrPrintString_Interface::StaticClass())))
		{
			I->RemoveMessageByKey_Implementation(Key);
		}
	}
	static FName NAME_UVrPrintString_Interface_SetupHUD = FName(TEXT("SetupHUD"));
	void IVrPrintString_Interface::Execute_SetupHUD(UObject* O, FVector2D HUD_Size, FSlateFontInfo FontInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrPrintString_Interface::StaticClass()));
		VrPrintString_Interface_eventSetupHUD_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrPrintString_Interface_SetupHUD);
		if (Func)
		{
			Parms.HUD_Size=HUD_Size;
			Parms.FontInfo=FontInfo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrPrintString_Interface*)(O->GetNativeInterfaceAddress(UVrPrintString_Interface::StaticClass())))
		{
			I->SetupHUD_Implementation(HUD_Size,FontInfo);
		}
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrPrintString_Interface, UVrPrintString_Interface::StaticClass, TEXT("UVrPrintString_Interface"), &Z_Registration_Info_UClass_UVrPrintString_Interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrPrintString_Interface), 1201241466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_2101688243(TEXT("/Script/VrPrintString"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
