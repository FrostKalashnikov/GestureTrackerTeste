// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestureTrackerVR_init() {}
	GESTURETRACKERVR_API UFunction* Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GestureTrackerVR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GestureTrackerVR()
	{
		if (!Z_Registration_Info_UPackage__Script_GestureTrackerVR.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GestureTrackerVR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9684970A,
				0x9BBF2CE3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GestureTrackerVR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GestureTrackerVR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GestureTrackerVR(Z_Construct_UPackage__Script_GestureTrackerVR, TEXT("/Script/GestureTrackerVR"), Z_Registration_Info_UPackage__Script_GestureTrackerVR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9684970A, 0x9BBF2CE3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
