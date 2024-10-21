// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPrintString/Public/VrPrintString_Settings.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrPrintString_Settings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_VrPrintString();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Settings();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_UVrPrintString_Settings_NoRegister();
// End Cross Module References
	void UVrPrintString_Settings::StaticRegisterNativesUVrPrintString_Settings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrPrintString_Settings);
	UClass* Z_Construct_UClass_UVrPrintString_Settings_NoRegister()
	{
		return UVrPrintString_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UVrPrintString_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HUD_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrPrintString_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VrPrintString,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrPrintString_Settings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrPrintString_Settings.h" },
		{ "ModuleRelativePath", "Public/VrPrintString_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_HUD_Size_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "800" },
		{ "ClampMin", "0" },
		{ "Comment", "//Size of the area where prints will be displayed\n" },
		{ "ModuleRelativePath", "Public/VrPrintString_Settings.h" },
		{ "ToolTip", "Size of the area where prints will be displayed" },
		{ "UIMax", "800" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_HUD_Size = { "HUD_Size", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrPrintString_Settings, HUD_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_HUD_Size_MetaData), Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_HUD_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_FontInfo_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VrPrintString_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_FontInfo = { "FontInfo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrPrintString_Settings, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_FontInfo_MetaData), Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_FontInfo_MetaData) }; // 2074891513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrPrintString_Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_HUD_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrPrintString_Settings_Statics::NewProp_FontInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrPrintString_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrPrintString_Settings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrPrintString_Settings_Statics::ClassParams = {
		&UVrPrintString_Settings::StaticClass,
		"MySetting",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrPrintString_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrPrintString_Settings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrPrintString_Settings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVrPrintString_Settings()
	{
		if (!Z_Registration_Info_UClass_UVrPrintString_Settings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrPrintString_Settings.OuterSingleton, Z_Construct_UClass_UVrPrintString_Settings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrPrintString_Settings.OuterSingleton;
	}
	template<> VRPRINTSTRING_API UClass* StaticClass<UVrPrintString_Settings>()
	{
		return UVrPrintString_Settings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrPrintString_Settings);
	UVrPrintString_Settings::~UVrPrintString_Settings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Settings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Settings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrPrintString_Settings, UVrPrintString_Settings::StaticClass, TEXT("UVrPrintString_Settings"), &Z_Registration_Info_UClass_UVrPrintString_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrPrintString_Settings), 2403108635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Settings_h_4137833781(TEXT("/Script/VrPrintString"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Settings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
