// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GestureTracker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGestureMeshComponent;
class UMaterialInterface;
class UStaticMesh;
enum class EGestureLibFunctionResult : uint8;
enum class EGestureRecognizeResult : uint8;
enum class EGestureRecordResult : uint8;
#ifdef GESTURETRACKERVR_GestureTracker_generated_h
#error "GestureTracker.generated.h already included, missing '#pragma once' in GestureTracker.h"
#endif
#define GESTURETRACKERVR_GestureTracker_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_21_DELEGATE \
GESTURETRACKERVR_API void FGestureRecognizedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GestureRecognizedDelegate, int32 id, const FString& name, float recognitionDuration, float lengthRatio);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateDrawIds); \
	DECLARE_FUNCTION(execUpdatePredictDrawMaterials); \
	DECLARE_FUNCTION(execUpdateTrackDrawMaterials); \
	DECLARE_FUNCTION(execDrawGestureByName); \
	DECLARE_FUNCTION(execDrawGestureById); \
	DECLARE_FUNCTION(execStopDrawPredictedGesture); \
	DECLARE_FUNCTION(execStartDrawPredictedGesture); \
	DECLARE_FUNCTION(execStopDrawTrackedGesture); \
	DECLARE_FUNCTION(execStartDrawTrackedGesture); \
	DECLARE_FUNCTION(execGetPercentageComplete); \
	DECLARE_FUNCTION(execGetPredictedGestureId); \
	DECLARE_FUNCTION(execUpdateTrackIds); \
	DECLARE_FUNCTION(execGetPredictedGesturePath); \
	DECLARE_FUNCTION(execGetGesturePath); \
	DECLARE_FUNCTION(execGetIds); \
	DECLARE_FUNCTION(execGetNumGestures); \
	DECLARE_FUNCTION(execClearGestures); \
	DECLARE_FUNCTION(execLoadGestures); \
	DECLARE_FUNCTION(execSaveGestures); \
	DECLARE_FUNCTION(execStopContinuousRecognition); \
	DECLARE_FUNCTION(execStartContinuousRecognition); \
	DECLARE_FUNCTION(execFinishRecognition); \
	DECLARE_FUNCTION(execStartRecognition); \
	DECLARE_FUNCTION(execFinishRecording); \
	DECLARE_FUNCTION(execStartRecording);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGestureTracker(); \
	friend struct Z_Construct_UClass_UGestureTracker_Statics; \
public: \
	DECLARE_CLASS(UGestureTracker, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GestureTrackerVR"), NO_API) \
	DECLARE_SERIALIZER(UGestureTracker)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestureTracker(UGestureTracker&&); \
	NO_API UGestureTracker(const UGestureTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestureTracker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestureTracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestureTracker) \
	NO_API virtual ~UGestureTracker();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_50_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GESTURETRACKERVR_API UClass* StaticClass<class UGestureTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h


#define FOREACH_ENUM_EGESTURERECORDRESULT(op) \
	op(EGestureRecordResult::Recorded) \
	op(EGestureRecordResult::Failed) 

enum class EGestureRecordResult : uint8;
template<> struct TIsUEnumClass<EGestureRecordResult> { enum { Value = true }; };
template<> GESTURETRACKERVR_API UEnum* StaticEnum<EGestureRecordResult>();

#define FOREACH_ENUM_EGESTURERECOGNIZERESULT(op) \
	op(EGestureRecognizeResult::Recognized) \
	op(EGestureRecognizeResult::Failed) 

enum class EGestureRecognizeResult : uint8;
template<> struct TIsUEnumClass<EGestureRecognizeResult> { enum { Value = true }; };
template<> GESTURETRACKERVR_API UEnum* StaticEnum<EGestureRecognizeResult>();

#define FOREACH_ENUM_EGESTURELIBFUNCTIONRESULT(op) \
	op(EGestureLibFunctionResult::Success) \
	op(EGestureLibFunctionResult::Failed) 

enum class EGestureLibFunctionResult : uint8;
template<> struct TIsUEnumClass<EGestureLibFunctionResult> { enum { Value = true }; };
template<> GESTURETRACKERVR_API UEnum* StaticEnum<EGestureLibFunctionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
