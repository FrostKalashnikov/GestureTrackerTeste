// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GestureMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestureMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GESTURETRACKERVR_API UClass* Z_Construct_UClass_UGestureMeshComponent();
	GESTURETRACKERVR_API UClass* Z_Construct_UClass_UGestureMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GestureTrackerVR();
// End Cross Module References
	DEFINE_FUNCTION(UGestureMeshComponent::execSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Success();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGestureMeshComponent::execUpdateMaterials)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh);
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial);
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMaterials(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial);
		P_NATIVE_END;
	}
	void UGestureMeshComponent::StaticRegisterNativesUGestureMeshComponent()
	{
		UClass* Class = UGestureMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Success", &UGestureMeshComponent::execSuccess },
			{ "UpdateMaterials", &UGestureMeshComponent::execUpdateMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGestureMeshComponent_Success_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestureMeshComponent_Success_Statics::Function_MetaDataParams[] = {
		{ "Category", "GestureTrackerVR" },
		{ "Comment", "/**\n    * Applies the sucessMaterial to the entire Gesture mesh\n    */" },
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
		{ "ToolTip", "Applies the sucessMaterial to the entire Gesture mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGestureMeshComponent_Success_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGestureMeshComponent, nullptr, "Success", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGestureMeshComponent_Success_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGestureMeshComponent_Success_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGestureMeshComponent_Success()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGestureMeshComponent_Success_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics
	{
		struct GestureMeshComponent_eventUpdateMaterials_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
			UMaterialInterface* successMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_successMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GestureMeshComponent_eventUpdateMaterials_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_baseMaterial = { "baseMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GestureMeshComponent_eventUpdateMaterials_Parms, baseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_successMaterial = { "successMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GestureMeshComponent_eventUpdateMaterials_Parms, successMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_baseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::NewProp_successMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "GestureTrackerVR" },
		{ "Comment", "/**\n    * Update the draw mesh and materials with new ones.\n    * Leave an input blank to leave it unchanged.\n    */" },
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
		{ "ToolTip", "Update the draw mesh and materials with new ones.\nLeave an input blank to leave it unchanged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGestureMeshComponent, nullptr, "UpdateMaterials", nullptr, nullptr, Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::GestureMeshComponent_eventUpdateMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::GestureMeshComponent_eventUpdateMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGestureMeshComponent);
	UClass* Z_Construct_UClass_UGestureMeshComponent_NoRegister()
	{
		return UGestureMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGestureMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pathMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pathMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_successMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGestureMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GestureTrackerVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGestureMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGestureMeshComponent_Success, "Success" }, // 2670402514
		{ &Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials, "UpdateMaterials" }, // 3978135720
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GestureTrackerVR" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "GestureMeshComponent.h" },
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes_Inner = { "pathMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes = { "pathMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGestureMeshComponent, pathMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes_MetaData), Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGestureMeshComponent, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_baseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_baseMaterial = { "baseMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGestureMeshComponent, baseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_baseMaterial_MetaData), Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_baseMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_successMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GestureMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_successMaterial = { "successMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGestureMeshComponent, successMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_successMaterial_MetaData), Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_successMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGestureMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_pathMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_baseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGestureMeshComponent_Statics::NewProp_successMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGestureMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGestureMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGestureMeshComponent_Statics::ClassParams = {
		&UGestureMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGestureMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGestureMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGestureMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGestureMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UGestureMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGestureMeshComponent.OuterSingleton, Z_Construct_UClass_UGestureMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGestureMeshComponent.OuterSingleton;
	}
	template<> GESTURETRACKERVR_API UClass* StaticClass<UGestureMeshComponent>()
	{
		return UGestureMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGestureMeshComponent);
	UGestureMeshComponent::~UGestureMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGestureMeshComponent, UGestureMeshComponent::StaticClass, TEXT("UGestureMeshComponent"), &Z_Registration_Info_UClass_UGestureMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGestureMeshComponent), 3963952228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_1736282771(TEXT("/Script/GestureTrackerVR"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
