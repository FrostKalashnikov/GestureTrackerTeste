// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRBodyTrackingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSXRMOVEMENT_OculusXRBodyTrackingComponent_generated_h
#error "OculusXRBodyTrackingComponent.generated.h already included, missing '#pragma once' in OculusXRBodyTrackingComponent.h"
#endif
#define OCULUSXRMOVEMENT_OculusXRBodyTrackingComponent_generated_h

#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_SPARSE_DATA
#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAllBoneTransforms);


#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ACCESSORS
#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRBodyTrackingComponent(); \
	friend struct Z_Construct_UClass_UOculusXRBodyTrackingComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRBodyTrackingComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMovement"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRBodyTrackingComponent)


#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRBodyTrackingComponent(UOculusXRBodyTrackingComponent&&); \
	NO_API UOculusXRBodyTrackingComponent(const UOculusXRBodyTrackingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRBodyTrackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRBodyTrackingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRBodyTrackingComponent) \
	NO_API virtual ~UOculusXRBodyTrackingComponent();


#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_20_PROLOG
#define FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_SPARSE_DATA \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ACCESSORS \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRMOVEMENT_API UClass* StaticClass<class UOculusXRBodyTrackingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h


#define FOREACH_ENUM_EOCULUSXRBODYTRACKINGMODE(op) \
	op(EOculusXRBodyTrackingMode::PositionAndRotation) \
	op(EOculusXRBodyTrackingMode::RotationOnly) \
	op(EOculusXRBodyTrackingMode::NoTracking) 

enum class EOculusXRBodyTrackingMode : uint8;
template<> struct TIsUEnumClass<EOculusXRBodyTrackingMode> { enum { Value = true }; };
template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBodyTrackingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS