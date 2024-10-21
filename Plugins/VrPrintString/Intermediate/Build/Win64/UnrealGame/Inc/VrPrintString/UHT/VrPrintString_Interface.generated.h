// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrPrintString_Interface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateFontInfo;
#ifdef VRPRINTSTRING_VrPrintString_Interface_generated_h
#error "VrPrintString_Interface.generated.h already included, missing '#pragma once' in VrPrintString_Interface.h"
#endif
#define VRPRINTSTRING_VrPrintString_Interface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupHUD_Implementation(FVector2D HUD_Size, FSlateFontInfo FontInfo) {}; \
	virtual void RemoveMessageByKey_Implementation(FName Key) {}; \
	virtual void ClearAllMessagesOnVR_Implementation() {}; \
	virtual void AddOrUpdateMessageOnVR_Implementation(const FString& InString, float Duration, FLinearColor Color, const FName Key, bool bShowKeyInPrint) {}; \
 \
	DECLARE_FUNCTION(execSetupHUD); \
	DECLARE_FUNCTION(execRemoveMessageByKey); \
	DECLARE_FUNCTION(execClearAllMessagesOnVR); \
	DECLARE_FUNCTION(execAddOrUpdateMessageOnVR);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRPRINTSTRING_API UVrPrintString_Interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRPRINTSTRING_API UVrPrintString_Interface(UVrPrintString_Interface&&); \
	VRPRINTSTRING_API UVrPrintString_Interface(const UVrPrintString_Interface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRPRINTSTRING_API, UVrPrintString_Interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrPrintString_Interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrPrintString_Interface) \
	VRPRINTSTRING_API virtual ~UVrPrintString_Interface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVrPrintString_Interface(); \
	friend struct Z_Construct_UClass_UVrPrintString_Interface_Statics; \
public: \
	DECLARE_CLASS(UVrPrintString_Interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VrPrintString"), VRPRINTSTRING_API) \
	DECLARE_SERIALIZER(UVrPrintString_Interface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVrPrintString_Interface() {} \
public: \
	typedef UVrPrintString_Interface UClassType; \
	typedef IVrPrintString_Interface ThisClass; \
	static void Execute_AddOrUpdateMessageOnVR(UObject* O, const FString& InString, float Duration, FLinearColor Color, const FName Key, bool bShowKeyInPrint); \
	static void Execute_ClearAllMessagesOnVR(UObject* O); \
	static void Execute_RemoveMessageByKey(UObject* O, FName Key); \
	static void Execute_SetupHUD(UObject* O, FVector2D HUD_Size, FSlateFontInfo FontInfo); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRPRINTSTRING_API UClass* StaticClass<class UVrPrintString_Interface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VrPrintString_Source_VRPrintString_Public_VrPrintString_Interface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
