// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../../Users/MichelBrito/Documents/Unreal Projects/GestureTrackerTeste/Plugins/MetaXR/Source/OculusXRAnchors/Public/OculusXRAnchorComponents.h"
#include "../../../../../../../../../Users/MichelBrito/Documents/Unreal Projects/GestureTrackerTeste/Plugins/MetaXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorComponents() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
	UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusXRSpaceComponentType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRBaseAnchorComponent::execIsComponentEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComponentEnabled();
		P_NATIVE_END;
	}
	void UOculusXRBaseAnchorComponent::StaticRegisterNativesUOculusXRBaseAnchorComponent()
	{
		UClass* Class = UOculusXRBaseAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetType", &UOculusXRBaseAnchorComponent::execGetType },
			{ "IsComponentEnabled", &UOculusXRBaseAnchorComponent::execIsComponentEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics
	{
		struct OculusXRBaseAnchorComponent_eventGetType_Parms
		{
			EOculusXRSpaceComponentType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRBaseAnchorComponent_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 2303346494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::OculusXRBaseAnchorComponent_eventGetType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics
	{
		struct OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms), &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent, nullptr, "IsComponentEnabled", nullptr, nullptr, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::OculusXRBaseAnchorComponent_eventIsComponentEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRBaseAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister()
	{
		return UOculusXRBaseAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_GetType, "GetType" }, // 1152131415
		{ &Z_Construct_UFunction_UOculusXRBaseAnchorComponent_IsComponentEnabled, "IsComponentEnabled" }, // 603754765
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRBaseAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams = {
		&UOculusXRBaseAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRBaseAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRBaseAnchorComponent>()
	{
		return UOculusXRBaseAnchorComponent::StaticClass();
	}
	UOculusXRBaseAnchorComponent::UOculusXRBaseAnchorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRBaseAnchorComponent);
	UOculusXRBaseAnchorComponent::~UOculusXRBaseAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRLocatableAnchorComponent::execGetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_outTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransform(Z_Param_Out_outTransform);
		P_NATIVE_END;
	}
	void UOculusXRLocatableAnchorComponent::StaticRegisterNativesUOculusXRLocatableAnchorComponent()
	{
		UClass* Class = UOculusXRLocatableAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransform", &UOculusXRLocatableAnchorComponent::execGetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics
	{
		struct OculusXRLocatableAnchorComponent_eventGetTransform_Parms
		{
			FTransform outTransform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform = { "outTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRLocatableAnchorComponent_eventGetTransform_Parms, outTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRLocatableAnchorComponent_eventGetTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRLocatableAnchorComponent_eventGetTransform_Parms), &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_outTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRLocatableAnchorComponent, nullptr, "GetTransform", nullptr, nullptr, Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::OculusXRLocatableAnchorComponent_eventGetTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRLocatableAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent_NoRegister()
	{
		return UOculusXRLocatableAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRLocatableAnchorComponent_GetTransform, "GetTransform" }, // 3196751775
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLocatableAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams = {
		&UOculusXRLocatableAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRLocatableAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRLocatableAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRLocatableAnchorComponent>()
	{
		return UOculusXRLocatableAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRLocatableAnchorComponent);
	UOculusXRLocatableAnchorComponent::~UOculusXRLocatableAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRPlaneAnchorComponent::execGetPositionAndSize)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
		P_NATIVE_END;
	}
	void UOculusXRPlaneAnchorComponent::StaticRegisterNativesUOculusXRPlaneAnchorComponent()
	{
		UClass* Class = UOculusXRPlaneAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPositionAndSize", &UOculusXRPlaneAnchorComponent::execGetPositionAndSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics
	{
		struct OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms
		{
			FVector outPosition;
			FVector outSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms), &Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPlaneAnchorComponent, nullptr, "GetPositionAndSize", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::OculusXRPlaneAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPlaneAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent_NoRegister()
	{
		return UOculusXRPlaneAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPlaneAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 3826966645
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPlaneAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::ClassParams = {
		&UOculusXRPlaneAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRPlaneAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRPlaneAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRPlaneAnchorComponent>()
	{
		return UOculusXRPlaneAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPlaneAnchorComponent);
	UOculusXRPlaneAnchorComponent::~UOculusXRPlaneAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRVolumeAnchorComponent::execGetPositionAndSize)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_outSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPositionAndSize(Z_Param_Out_outPosition,Z_Param_Out_outSize);
		P_NATIVE_END;
	}
	void UOculusXRVolumeAnchorComponent::StaticRegisterNativesUOculusXRVolumeAnchorComponent()
	{
		UClass* Class = UOculusXRVolumeAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPositionAndSize", &UOculusXRVolumeAnchorComponent::execGetPositionAndSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics
	{
		struct OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms
		{
			FVector outPosition;
			FVector outSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition = { "outPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize = { "outSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms, outSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms), &Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_outSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRVolumeAnchorComponent, nullptr, "GetPositionAndSize", nullptr, nullptr, Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::OculusXRVolumeAnchorComponent_eventGetPositionAndSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRVolumeAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent_NoRegister()
	{
		return UOculusXRVolumeAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRVolumeAnchorComponent_GetPositionAndSize, "GetPositionAndSize" }, // 3912473646
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRVolumeAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::ClassParams = {
		&UOculusXRVolumeAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRVolumeAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRVolumeAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRVolumeAnchorComponent>()
	{
		return UOculusXRVolumeAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRVolumeAnchorComponent);
	UOculusXRVolumeAnchorComponent::~UOculusXRVolumeAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_outClassifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSemanticClassifications(Z_Param_Out_outClassifications);
		P_NATIVE_END;
	}
	void UOculusXRSemanticClassificationAnchorComponent::StaticRegisterNativesUOculusXRSemanticClassificationAnchorComponent()
	{
		UClass* Class = UOculusXRSemanticClassificationAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSemanticClassifications", &UOculusXRSemanticClassificationAnchorComponent::execGetSemanticClassifications },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics
	{
		struct OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms
		{
			TArray<FString> outClassifications;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_outClassifications_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outClassifications;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications_Inner = { "outClassifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications = { "outClassifications", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms, outClassifications), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms), &Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_outClassifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, nullptr, "GetSemanticClassifications", nullptr, nullptr, Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::OculusXRSemanticClassificationAnchorComponent_eventGetSemanticClassifications_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSemanticClassificationAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_NoRegister()
	{
		return UOculusXRSemanticClassificationAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSemanticClassificationAnchorComponent_GetSemanticClassifications, "GetSemanticClassifications" }, // 2201630
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSemanticClassificationAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::ClassParams = {
		&UOculusXRSemanticClassificationAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRSemanticClassificationAnchorComponent>()
	{
		return UOculusXRSemanticClassificationAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSemanticClassificationAnchorComponent);
	UOculusXRSemanticClassificationAnchorComponent::~UOculusXRSemanticClassificationAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout)
	{
		P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outFloorUUID);
		P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_outCeilingUUID);
		P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outWallsUUIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRoomLayout(Z_Param_Out_outFloorUUID,Z_Param_Out_outCeilingUUID,Z_Param_Out_outWallsUUIDs);
		P_NATIVE_END;
	}
	void UOculusXRRoomLayoutAnchorComponent::StaticRegisterNativesUOculusXRRoomLayoutAnchorComponent()
	{
		UClass* Class = UOculusXRRoomLayoutAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoomLayout", &UOculusXRRoomLayoutAnchorComponent::execGetRoomLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics
	{
		struct OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms
		{
			FOculusXRUUID outFloorUUID;
			FOculusXRUUID outCeilingUUID;
			TArray<FOculusXRUUID> outWallsUUIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outFloorUUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outCeilingUUID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outWallsUUIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outWallsUUIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outFloorUUID = { "outFloorUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outFloorUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 2350961064
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outCeilingUUID = { "outCeilingUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outCeilingUUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 2350961064
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs_Inner = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 2350961064
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs = { "outWallsUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms, outWallsUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2350961064
	void Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outFloorUUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outCeilingUUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_outWallsUUIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, nullptr, "GetRoomLayout", nullptr, nullptr, Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::OculusXRRoomLayoutAnchorComponent_eventGetRoomLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRRoomLayoutAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_NoRegister()
	{
		return UOculusXRRoomLayoutAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutAnchorComponent_GetRoomLayout, "GetRoomLayout" }, // 4012515795
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRoomLayoutAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::ClassParams = {
		&UOculusXRRoomLayoutAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRRoomLayoutAnchorComponent>()
	{
		return UOculusXRRoomLayoutAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRoomLayoutAnchorComponent);
	UOculusXRRoomLayoutAnchorComponent::~UOculusXRRoomLayoutAnchorComponent() {}
	DEFINE_FUNCTION(UOculusXRSpaceContainerAnchorComponent::execGetUUIDs)
	{
		P_GET_TARRAY_REF(FOculusXRUUID,Z_Param_Out_outUUIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUUIDs(Z_Param_Out_outUUIDs);
		P_NATIVE_END;
	}
	void UOculusXRSpaceContainerAnchorComponent::StaticRegisterNativesUOculusXRSpaceContainerAnchorComponent()
	{
		UClass* Class = UOculusXRSpaceContainerAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUUIDs", &UOculusXRSpaceContainerAnchorComponent::execGetUUIDs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics
	{
		struct OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms
		{
			TArray<FOculusXRUUID> outUUIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outUUIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outUUIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner = { "outUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 2350961064
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs = { "outUUIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms, outUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2350961064
	void Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms), &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_outUUIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, nullptr, "GetUUIDs", nullptr, nullptr, Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::OculusXRSpaceContainerAnchorComponent_eventGetUUIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSpaceContainerAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_NoRegister()
	{
		return UOculusXRSpaceContainerAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRSpaceContainerAnchorComponent_GetUUIDs, "GetUUIDs" }, // 3124883399
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceContainerAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams = {
		&UOculusXRSpaceContainerAnchorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRSpaceContainerAnchorComponent>()
	{
		return UOculusXRSpaceContainerAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSpaceContainerAnchorComponent);
	UOculusXRSpaceContainerAnchorComponent::~UOculusXRSpaceContainerAnchorComponent() {}
	void UOculusXRSharableAnchorComponent::StaticRegisterNativesUOculusXRSharableAnchorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSharableAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent_NoRegister()
	{
		return UOculusXRSharableAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSharableAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams = {
		&UOculusXRSharableAnchorComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSharableAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSharableAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRSharableAnchorComponent>()
	{
		return UOculusXRSharableAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSharableAnchorComponent);
	UOculusXRSharableAnchorComponent::~UOculusXRSharableAnchorComponent() {}
	void UOculusXRStorableAnchorComponent::StaticRegisterNativesUOculusXRStorableAnchorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRStorableAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent_NoRegister()
	{
		return UOculusXRStorableAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStorableAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams = {
		&UOculusXRStorableAnchorComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRStorableAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRStorableAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRStorableAnchorComponent>()
	{
		return UOculusXRStorableAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRStorableAnchorComponent);
	UOculusXRStorableAnchorComponent::~UOculusXRStorableAnchorComponent() {}
	void UOculusXRTriangleMeshAnchorComponent::StaticRegisterNativesUOculusXRTriangleMeshAnchorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRTriangleMeshAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_NoRegister()
	{
		return UOculusXRTriangleMeshAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRBaseAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponents.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRTriangleMeshAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::ClassParams = {
		&UOculusXRTriangleMeshAnchorComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRTriangleMeshAnchorComponent>()
	{
		return UOculusXRTriangleMeshAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRTriangleMeshAnchorComponent);
	UOculusXRTriangleMeshAnchorComponent::~UOculusXRTriangleMeshAnchorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRBaseAnchorComponent, UOculusXRBaseAnchorComponent::StaticClass, TEXT("UOculusXRBaseAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRBaseAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRBaseAnchorComponent), 1310090597U) },
		{ Z_Construct_UClass_UOculusXRLocatableAnchorComponent, UOculusXRLocatableAnchorComponent::StaticClass, TEXT("UOculusXRLocatableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRLocatableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLocatableAnchorComponent), 1000417882U) },
		{ Z_Construct_UClass_UOculusXRPlaneAnchorComponent, UOculusXRPlaneAnchorComponent::StaticClass, TEXT("UOculusXRPlaneAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRPlaneAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPlaneAnchorComponent), 1841628118U) },
		{ Z_Construct_UClass_UOculusXRVolumeAnchorComponent, UOculusXRVolumeAnchorComponent::StaticClass, TEXT("UOculusXRVolumeAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRVolumeAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRVolumeAnchorComponent), 2793179799U) },
		{ Z_Construct_UClass_UOculusXRSemanticClassificationAnchorComponent, UOculusXRSemanticClassificationAnchorComponent::StaticClass, TEXT("UOculusXRSemanticClassificationAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSemanticClassificationAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSemanticClassificationAnchorComponent), 1002039270U) },
		{ Z_Construct_UClass_UOculusXRRoomLayoutAnchorComponent, UOculusXRRoomLayoutAnchorComponent::StaticClass, TEXT("UOculusXRRoomLayoutAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRRoomLayoutAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRoomLayoutAnchorComponent), 3303984878U) },
		{ Z_Construct_UClass_UOculusXRSpaceContainerAnchorComponent, UOculusXRSpaceContainerAnchorComponent::StaticClass, TEXT("UOculusXRSpaceContainerAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSpaceContainerAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceContainerAnchorComponent), 2664895234U) },
		{ Z_Construct_UClass_UOculusXRSharableAnchorComponent, UOculusXRSharableAnchorComponent::StaticClass, TEXT("UOculusXRSharableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSharableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSharableAnchorComponent), 1783002203U) },
		{ Z_Construct_UClass_UOculusXRStorableAnchorComponent, UOculusXRStorableAnchorComponent::StaticClass, TEXT("UOculusXRStorableAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRStorableAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStorableAnchorComponent), 1350249229U) },
		{ Z_Construct_UClass_UOculusXRTriangleMeshAnchorComponent, UOculusXRTriangleMeshAnchorComponent::StaticClass, TEXT("UOculusXRTriangleMeshAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRTriangleMeshAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRTriangleMeshAnchorComponent), 227334888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_3824476044(TEXT("/Script/OculusXRAnchors"),
		Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS