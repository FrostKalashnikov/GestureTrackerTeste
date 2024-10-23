// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPrintString/Public/VrPrintString_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrPrintString_Actor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VrPrintString();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_AVrPrintString_Actor();
	VRPRINTSTRING_API UClass* Z_Construct_UClass_AVrPrintString_Actor_NoRegister();
// End Cross Module References
	void AVrPrintString_Actor::StaticRegisterNativesAVrPrintString_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrPrintString_Actor);
	UClass* Z_Construct_UClass_AVrPrintString_Actor_NoRegister()
	{
		return AVrPrintString_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AVrPrintString_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrPrintString_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VrPrintString,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPrintString_Actor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPrintString_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrPrintString_Actor.h" },
		{ "ModuleRelativePath", "Public/VrPrintString_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrPrintString_Actor_Statics::NewProp_WidgetComp_MetaData[] = {
		{ "Category", "VR Print String" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrPrintString_Actor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrPrintString_Actor_Statics::NewProp_WidgetComp = { "WidgetComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVrPrintString_Actor, WidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPrintString_Actor_Statics::NewProp_WidgetComp_MetaData), Z_Construct_UClass_AVrPrintString_Actor_Statics::NewProp_WidgetComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrPrintString_Actor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrPrintString_Actor_Statics::NewProp_WidgetComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrPrintString_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrPrintString_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrPrintString_Actor_Statics::ClassParams = {
		&AVrPrintString_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrPrintString_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrPrintString_Actor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPrintString_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVrPrintString_Actor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVrPrintString_Actor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVrPrintString_Actor()
	{
		if (!Z_Registration_Info_UClass_AVrPrintString_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrPrintString_Actor.OuterSingleton, Z_Construct_UClass_AVrPrintString_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrPrintString_Actor.OuterSingleton;
	}
	template<> VRPRINTSTRING_API UClass* StaticClass<AVrPrintString_Actor>()
	{
		return AVrPrintString_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrPrintString_Actor);
	AVrPrintString_Actor::~AVrPrintString_Actor() {}
	struct Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrPrintString_Actor, AVrPrintString_Actor::StaticClass, TEXT("AVrPrintString_Actor"), &Z_Registration_Info_UClass_AVrPrintString_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrPrintString_Actor), 1703394317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Actor_h_123531130(TEXT("/Script/VrPrintString"),
		Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
