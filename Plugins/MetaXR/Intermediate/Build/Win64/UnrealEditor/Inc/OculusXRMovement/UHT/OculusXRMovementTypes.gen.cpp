// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Public/OculusXRMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState();
	UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRBodyJointSet;
	static UEnum* EOculusXRBodyJointSet_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBodyJointSet.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRBodyJointSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRBodyJointSet"));
		}
		return Z_Registration_Info_UEnum_EOculusXRBodyJointSet.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBodyJointSet>()
	{
		return EOculusXRBodyJointSet_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enumerators[] = {
		{ "EOculusXRBodyJointSet::UpperBody", (int64)EOculusXRBodyJointSet::UpperBody },
		{ "EOculusXRBodyJointSet::FullBody", (int64)EOculusXRBodyJointSet::FullBody },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullBody.Name", "EOculusXRBodyJointSet::FullBody" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "UpperBody.Name", "EOculusXRBodyJointSet::UpperBody" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRBodyJointSet",
		"EOculusXRBodyJointSet",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBodyJointSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRBodyJointSet.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRBodyJointSet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity;
	static UEnum* EOculusXRBodyTrackingFidelity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRBodyTrackingFidelity"));
		}
		return Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBodyTrackingFidelity>()
	{
		return EOculusXRBodyTrackingFidelity_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enumerators[] = {
		{ "EOculusXRBodyTrackingFidelity::Unset", (int64)EOculusXRBodyTrackingFidelity::Unset },
		{ "EOculusXRBodyTrackingFidelity::Low", (int64)EOculusXRBodyTrackingFidelity::Low },
		{ "EOculusXRBodyTrackingFidelity::High", (int64)EOculusXRBodyTrackingFidelity::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRBodyTrackingFidelity::High" },
		{ "Low.Name", "EOculusXRBodyTrackingFidelity::Low" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Unset.Hidden", "" },
		{ "Unset.Name", "EOculusXRBodyTrackingFidelity::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRBodyTrackingFidelity",
		"EOculusXRBodyTrackingFidelity",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRBoneID;
	static UEnum* EOculusXRBoneID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRBoneID"));
		}
		return Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBoneID>()
	{
		return EOculusXRBoneID_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators[] = {
		{ "EOculusXRBoneID::BodyRoot", (int64)EOculusXRBoneID::BodyRoot },
		{ "EOculusXRBoneID::BodyHips", (int64)EOculusXRBoneID::BodyHips },
		{ "EOculusXRBoneID::BodySpineLower", (int64)EOculusXRBoneID::BodySpineLower },
		{ "EOculusXRBoneID::BodySpineMiddle", (int64)EOculusXRBoneID::BodySpineMiddle },
		{ "EOculusXRBoneID::BodySpineUpper", (int64)EOculusXRBoneID::BodySpineUpper },
		{ "EOculusXRBoneID::BodyChest", (int64)EOculusXRBoneID::BodyChest },
		{ "EOculusXRBoneID::BodyNeck", (int64)EOculusXRBoneID::BodyNeck },
		{ "EOculusXRBoneID::BodyHead", (int64)EOculusXRBoneID::BodyHead },
		{ "EOculusXRBoneID::BodyLeftShoulder", (int64)EOculusXRBoneID::BodyLeftShoulder },
		{ "EOculusXRBoneID::BodyLeftScapula", (int64)EOculusXRBoneID::BodyLeftScapula },
		{ "EOculusXRBoneID::BodyLeftArmUpper", (int64)EOculusXRBoneID::BodyLeftArmUpper },
		{ "EOculusXRBoneID::BodyLeftArmLower", (int64)EOculusXRBoneID::BodyLeftArmLower },
		{ "EOculusXRBoneID::BodyLeftHandWristTwist", (int64)EOculusXRBoneID::BodyLeftHandWristTwist },
		{ "EOculusXRBoneID::BodyRightShoulder", (int64)EOculusXRBoneID::BodyRightShoulder },
		{ "EOculusXRBoneID::BodyRightScapula", (int64)EOculusXRBoneID::BodyRightScapula },
		{ "EOculusXRBoneID::BodyRightArmUpper", (int64)EOculusXRBoneID::BodyRightArmUpper },
		{ "EOculusXRBoneID::BodyRightArmLower", (int64)EOculusXRBoneID::BodyRightArmLower },
		{ "EOculusXRBoneID::BodyRightHandWristTwist", (int64)EOculusXRBoneID::BodyRightHandWristTwist },
		{ "EOculusXRBoneID::BodyLeftHandPalm", (int64)EOculusXRBoneID::BodyLeftHandPalm },
		{ "EOculusXRBoneID::BodyLeftHandWrist", (int64)EOculusXRBoneID::BodyLeftHandWrist },
		{ "EOculusXRBoneID::BodyLeftHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandThumbProximal", (int64)EOculusXRBoneID::BodyLeftHandThumbProximal },
		{ "EOculusXRBoneID::BodyLeftHandThumbDistal", (int64)EOculusXRBoneID::BodyLeftHandThumbDistal },
		{ "EOculusXRBoneID::BodyLeftHandThumbTip", (int64)EOculusXRBoneID::BodyLeftHandThumbTip },
		{ "EOculusXRBoneID::BodyLeftHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandIndexProximal", (int64)EOculusXRBoneID::BodyLeftHandIndexProximal },
		{ "EOculusXRBoneID::BodyLeftHandIndexIntermediate", (int64)EOculusXRBoneID::BodyLeftHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandIndexDistal", (int64)EOculusXRBoneID::BodyLeftHandIndexDistal },
		{ "EOculusXRBoneID::BodyLeftHandIndexTip", (int64)EOculusXRBoneID::BodyLeftHandIndexTip },
		{ "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleProximal", (int64)EOculusXRBoneID::BodyLeftHandMiddleProximal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandMiddleDistal", (int64)EOculusXRBoneID::BodyLeftHandMiddleDistal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleTip", (int64)EOculusXRBoneID::BodyLeftHandMiddleTip },
		{ "EOculusXRBoneID::BodyLeftHandRingMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandRingProximal", (int64)EOculusXRBoneID::BodyLeftHandRingProximal },
		{ "EOculusXRBoneID::BodyLeftHandRingIntermediate", (int64)EOculusXRBoneID::BodyLeftHandRingIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandRingDistal", (int64)EOculusXRBoneID::BodyLeftHandRingDistal },
		{ "EOculusXRBoneID::BodyLeftHandRingTip", (int64)EOculusXRBoneID::BodyLeftHandRingTip },
		{ "EOculusXRBoneID::BodyLeftHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandLittleProximal", (int64)EOculusXRBoneID::BodyLeftHandLittleProximal },
		{ "EOculusXRBoneID::BodyLeftHandLittleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandLittleDistal", (int64)EOculusXRBoneID::BodyLeftHandLittleDistal },
		{ "EOculusXRBoneID::BodyLeftHandLittleTip", (int64)EOculusXRBoneID::BodyLeftHandLittleTip },
		{ "EOculusXRBoneID::BodyRightHandPalm", (int64)EOculusXRBoneID::BodyRightHandPalm },
		{ "EOculusXRBoneID::BodyRightHandWrist", (int64)EOculusXRBoneID::BodyRightHandWrist },
		{ "EOculusXRBoneID::BodyRightHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyRightHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandThumbProximal", (int64)EOculusXRBoneID::BodyRightHandThumbProximal },
		{ "EOculusXRBoneID::BodyRightHandThumbDistal", (int64)EOculusXRBoneID::BodyRightHandThumbDistal },
		{ "EOculusXRBoneID::BodyRightHandThumbTip", (int64)EOculusXRBoneID::BodyRightHandThumbTip },
		{ "EOculusXRBoneID::BodyRightHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyRightHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandIndexProximal", (int64)EOculusXRBoneID::BodyRightHandIndexProximal },
		{ "EOculusXRBoneID::BodyRightHandIndexIntermediate", (int64)EOculusXRBoneID::BodyRightHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyRightHandIndexDistal", (int64)EOculusXRBoneID::BodyRightHandIndexDistal },
		{ "EOculusXRBoneID::BodyRightHandIndexTip", (int64)EOculusXRBoneID::BodyRightHandIndexTip },
		{ "EOculusXRBoneID::BodyRightHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandMiddleProximal", (int64)EOculusXRBoneID::BodyRightHandMiddleProximal },
		{ "EOculusXRBoneID::BodyRightHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyRightHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandMiddleDistal", (int64)EOculusXRBoneID::BodyRightHandMiddleDistal },
		{ "EOculusXRBoneID::BodyRightHandMiddleTip", (int64)EOculusXRBoneID::BodyRightHandMiddleTip },
		{ "EOculusXRBoneID::BodyRightHandRingMetacarpal", (int64)EOculusXRBoneID::BodyRightHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandRingProximal", (int64)EOculusXRBoneID::BodyRightHandRingProximal },
		{ "EOculusXRBoneID::BodyRightHandRingIntermediate", (int64)EOculusXRBoneID::BodyRightHandRingIntermediate },
		{ "EOculusXRBoneID::BodyRightHandRingDistal", (int64)EOculusXRBoneID::BodyRightHandRingDistal },
		{ "EOculusXRBoneID::BodyRightHandRingTip", (int64)EOculusXRBoneID::BodyRightHandRingTip },
		{ "EOculusXRBoneID::BodyRightHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandLittleProximal", (int64)EOculusXRBoneID::BodyRightHandLittleProximal },
		{ "EOculusXRBoneID::BodyRightHandLittleIntermediate", (int64)EOculusXRBoneID::BodyRightHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandLittleDistal", (int64)EOculusXRBoneID::BodyRightHandLittleDistal },
		{ "EOculusXRBoneID::BodyRightHandLittleTip", (int64)EOculusXRBoneID::BodyRightHandLittleTip },
		{ "EOculusXRBoneID::BodyLeftUpperLeg", (int64)EOculusXRBoneID::BodyLeftUpperLeg },
		{ "EOculusXRBoneID::BodyLeftLowerLeg", (int64)EOculusXRBoneID::BodyLeftLowerLeg },
		{ "EOculusXRBoneID::BodyLeftFootAnkleTwist", (int64)EOculusXRBoneID::BodyLeftFootAnkleTwist },
		{ "EOculusXRBoneID::BodyLeftFootAnkle", (int64)EOculusXRBoneID::BodyLeftFootAnkle },
		{ "EOculusXRBoneID::BodyLeftFootSubtalar", (int64)EOculusXRBoneID::BodyLeftFootSubtalar },
		{ "EOculusXRBoneID::BodyLeftFootTransverse", (int64)EOculusXRBoneID::BodyLeftFootTransverse },
		{ "EOculusXRBoneID::BodyLeftFootBall", (int64)EOculusXRBoneID::BodyLeftFootBall },
		{ "EOculusXRBoneID::BodyRightUpperLeg", (int64)EOculusXRBoneID::BodyRightUpperLeg },
		{ "EOculusXRBoneID::BodyRightLowerLeg", (int64)EOculusXRBoneID::BodyRightLowerLeg },
		{ "EOculusXRBoneID::BodyRightFootAnkleTwist", (int64)EOculusXRBoneID::BodyRightFootAnkleTwist },
		{ "EOculusXRBoneID::BodyRightFootAnkle", (int64)EOculusXRBoneID::BodyRightFootAnkle },
		{ "EOculusXRBoneID::BodyRightFootSubtalar", (int64)EOculusXRBoneID::BodyRightFootSubtalar },
		{ "EOculusXRBoneID::BodyRightFootTransverse", (int64)EOculusXRBoneID::BodyRightFootTransverse },
		{ "EOculusXRBoneID::BodyRightFootBall", (int64)EOculusXRBoneID::BodyRightFootBall },
		{ "EOculusXRBoneID::COUNT", (int64)EOculusXRBoneID::COUNT },
		{ "EOculusXRBoneID::None", (int64)EOculusXRBoneID::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BodyChest.Name", "EOculusXRBoneID::BodyChest" },
		{ "BodyHead.Name", "EOculusXRBoneID::BodyHead" },
		{ "BodyHips.Name", "EOculusXRBoneID::BodyHips" },
		{ "BodyLeftArmLower.Name", "EOculusXRBoneID::BodyLeftArmLower" },
		{ "BodyLeftArmUpper.Name", "EOculusXRBoneID::BodyLeftArmUpper" },
		{ "BodyLeftFootAnkle.Name", "EOculusXRBoneID::BodyLeftFootAnkle" },
		{ "BodyLeftFootAnkleTwist.Name", "EOculusXRBoneID::BodyLeftFootAnkleTwist" },
		{ "BodyLeftFootBall.Name", "EOculusXRBoneID::BodyLeftFootBall" },
		{ "BodyLeftFootSubtalar.Name", "EOculusXRBoneID::BodyLeftFootSubtalar" },
		{ "BodyLeftFootTransverse.Name", "EOculusXRBoneID::BodyLeftFootTransverse" },
		{ "BodyLeftHandIndexDistal.Name", "EOculusXRBoneID::BodyLeftHandIndexDistal" },
		{ "BodyLeftHandIndexIntermediate.Name", "EOculusXRBoneID::BodyLeftHandIndexIntermediate" },
		{ "BodyLeftHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandIndexMetacarpal" },
		{ "BodyLeftHandIndexProximal.Name", "EOculusXRBoneID::BodyLeftHandIndexProximal" },
		{ "BodyLeftHandIndexTip.Name", "EOculusXRBoneID::BodyLeftHandIndexTip" },
		{ "BodyLeftHandLittleDistal.Name", "EOculusXRBoneID::BodyLeftHandLittleDistal" },
		{ "BodyLeftHandLittleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandLittleIntermediate" },
		{ "BodyLeftHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandLittleMetacarpal" },
		{ "BodyLeftHandLittleProximal.Name", "EOculusXRBoneID::BodyLeftHandLittleProximal" },
		{ "BodyLeftHandLittleTip.Name", "EOculusXRBoneID::BodyLeftHandLittleTip" },
		{ "BodyLeftHandMiddleDistal.Name", "EOculusXRBoneID::BodyLeftHandMiddleDistal" },
		{ "BodyLeftHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandMiddleIntermediate" },
		{ "BodyLeftHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal" },
		{ "BodyLeftHandMiddleProximal.Name", "EOculusXRBoneID::BodyLeftHandMiddleProximal" },
		{ "BodyLeftHandMiddleTip.Name", "EOculusXRBoneID::BodyLeftHandMiddleTip" },
		{ "BodyLeftHandPalm.Name", "EOculusXRBoneID::BodyLeftHandPalm" },
		{ "BodyLeftHandRingDistal.Name", "EOculusXRBoneID::BodyLeftHandRingDistal" },
		{ "BodyLeftHandRingIntermediate.Name", "EOculusXRBoneID::BodyLeftHandRingIntermediate" },
		{ "BodyLeftHandRingMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandRingMetacarpal" },
		{ "BodyLeftHandRingProximal.Name", "EOculusXRBoneID::BodyLeftHandRingProximal" },
		{ "BodyLeftHandRingTip.Name", "EOculusXRBoneID::BodyLeftHandRingTip" },
		{ "BodyLeftHandThumbDistal.Name", "EOculusXRBoneID::BodyLeftHandThumbDistal" },
		{ "BodyLeftHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandThumbMetacarpal" },
		{ "BodyLeftHandThumbProximal.Name", "EOculusXRBoneID::BodyLeftHandThumbProximal" },
		{ "BodyLeftHandThumbTip.Name", "EOculusXRBoneID::BodyLeftHandThumbTip" },
		{ "BodyLeftHandWrist.Name", "EOculusXRBoneID::BodyLeftHandWrist" },
		{ "BodyLeftHandWristTwist.Name", "EOculusXRBoneID::BodyLeftHandWristTwist" },
		{ "BodyLeftLowerLeg.Name", "EOculusXRBoneID::BodyLeftLowerLeg" },
		{ "BodyLeftScapula.Name", "EOculusXRBoneID::BodyLeftScapula" },
		{ "BodyLeftShoulder.Name", "EOculusXRBoneID::BodyLeftShoulder" },
		{ "BodyLeftUpperLeg.Name", "EOculusXRBoneID::BodyLeftUpperLeg" },
		{ "BodyNeck.Name", "EOculusXRBoneID::BodyNeck" },
		{ "BodyRightArmLower.Name", "EOculusXRBoneID::BodyRightArmLower" },
		{ "BodyRightArmUpper.Name", "EOculusXRBoneID::BodyRightArmUpper" },
		{ "BodyRightFootAnkle.Name", "EOculusXRBoneID::BodyRightFootAnkle" },
		{ "BodyRightFootAnkleTwist.Name", "EOculusXRBoneID::BodyRightFootAnkleTwist" },
		{ "BodyRightFootBall.Name", "EOculusXRBoneID::BodyRightFootBall" },
		{ "BodyRightFootSubtalar.Name", "EOculusXRBoneID::BodyRightFootSubtalar" },
		{ "BodyRightFootTransverse.Name", "EOculusXRBoneID::BodyRightFootTransverse" },
		{ "BodyRightHandIndexDistal.Name", "EOculusXRBoneID::BodyRightHandIndexDistal" },
		{ "BodyRightHandIndexIntermediate.Name", "EOculusXRBoneID::BodyRightHandIndexIntermediate" },
		{ "BodyRightHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyRightHandIndexMetacarpal" },
		{ "BodyRightHandIndexProximal.Name", "EOculusXRBoneID::BodyRightHandIndexProximal" },
		{ "BodyRightHandIndexTip.Name", "EOculusXRBoneID::BodyRightHandIndexTip" },
		{ "BodyRightHandLittleDistal.Name", "EOculusXRBoneID::BodyRightHandLittleDistal" },
		{ "BodyRightHandLittleIntermediate.Name", "EOculusXRBoneID::BodyRightHandLittleIntermediate" },
		{ "BodyRightHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandLittleMetacarpal" },
		{ "BodyRightHandLittleProximal.Name", "EOculusXRBoneID::BodyRightHandLittleProximal" },
		{ "BodyRightHandLittleTip.Name", "EOculusXRBoneID::BodyRightHandLittleTip" },
		{ "BodyRightHandMiddleDistal.Name", "EOculusXRBoneID::BodyRightHandMiddleDistal" },
		{ "BodyRightHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyRightHandMiddleIntermediate" },
		{ "BodyRightHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandMiddleMetacarpal" },
		{ "BodyRightHandMiddleProximal.Name", "EOculusXRBoneID::BodyRightHandMiddleProximal" },
		{ "BodyRightHandMiddleTip.Name", "EOculusXRBoneID::BodyRightHandMiddleTip" },
		{ "BodyRightHandPalm.Name", "EOculusXRBoneID::BodyRightHandPalm" },
		{ "BodyRightHandRingDistal.Name", "EOculusXRBoneID::BodyRightHandRingDistal" },
		{ "BodyRightHandRingIntermediate.Name", "EOculusXRBoneID::BodyRightHandRingIntermediate" },
		{ "BodyRightHandRingMetacarpal.Name", "EOculusXRBoneID::BodyRightHandRingMetacarpal" },
		{ "BodyRightHandRingProximal.Name", "EOculusXRBoneID::BodyRightHandRingProximal" },
		{ "BodyRightHandRingTip.Name", "EOculusXRBoneID::BodyRightHandRingTip" },
		{ "BodyRightHandThumbDistal.Name", "EOculusXRBoneID::BodyRightHandThumbDistal" },
		{ "BodyRightHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyRightHandThumbMetacarpal" },
		{ "BodyRightHandThumbProximal.Name", "EOculusXRBoneID::BodyRightHandThumbProximal" },
		{ "BodyRightHandThumbTip.Name", "EOculusXRBoneID::BodyRightHandThumbTip" },
		{ "BodyRightHandWrist.Name", "EOculusXRBoneID::BodyRightHandWrist" },
		{ "BodyRightHandWristTwist.Name", "EOculusXRBoneID::BodyRightHandWristTwist" },
		{ "BodyRightLowerLeg.Name", "EOculusXRBoneID::BodyRightLowerLeg" },
		{ "BodyRightScapula.Name", "EOculusXRBoneID::BodyRightScapula" },
		{ "BodyRightShoulder.Name", "EOculusXRBoneID::BodyRightShoulder" },
		{ "BodyRightUpperLeg.Name", "EOculusXRBoneID::BodyRightUpperLeg" },
		{ "BodyRoot.Name", "EOculusXRBoneID::BodyRoot" },
		{ "BodySpineLower.Name", "EOculusXRBoneID::BodySpineLower" },
		{ "BodySpineMiddle.Name", "EOculusXRBoneID::BodySpineMiddle" },
		{ "BodySpineUpper.Name", "EOculusXRBoneID::BodySpineUpper" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRBoneID::COUNT" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EOculusXRBoneID::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRBoneID",
		"EOculusXRBoneID",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRBodyJoint;
class UScriptStruct* FOculusXRBodyJoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyJoint, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRBodyJoint"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRBodyJoint>()
{
	return FOculusXRBodyJoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyJoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRBodyJoint*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRBodyJoint), &Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyJoint, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyJoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRBodyJoint",
		Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers),
		sizeof(FOculusXRBodyJoint),
		alignof(FOculusXRBodyJoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRBodyState;
class UScriptStruct* FOculusXRBodyState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRBodyState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRBodyState>()
{
	return FOculusXRBodyState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRBodyState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonChangedCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonChangedCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Joints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Joints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FOculusXRBodyState*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRBodyState), &Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount = { "SkeletonChangedCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, SkeletonChangedCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_Inner = { "Joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRBodyJoint, METADATA_PARAMS(0, nullptr) }; // 435375430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRBodyState, Joints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData) }; // 435375430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRBodyState",
		Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers),
		sizeof(FOculusXRBodyState),
		alignof(FOculusXRBodyState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFaceTrackingDataSource;
	static UEnum* EFaceTrackingDataSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFaceTrackingDataSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFaceTrackingDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EFaceTrackingDataSource"));
		}
		return Z_Registration_Info_UEnum_EFaceTrackingDataSource.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EFaceTrackingDataSource>()
	{
		return EFaceTrackingDataSource_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enumerators[] = {
		{ "EFaceTrackingDataSource::Visual", (int64)EFaceTrackingDataSource::Visual },
		{ "EFaceTrackingDataSource::Audio", (int64)EFaceTrackingDataSource::Audio },
		{ "EFaceTrackingDataSource::MAX", (int64)EFaceTrackingDataSource::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enum_MetaDataParams[] = {
		{ "Audio.DisplayName", "Audio" },
		{ "Audio.Name", "EFaceTrackingDataSource::Audio" },
		{ "BlueprintType", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EFaceTrackingDataSource::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EFaceTrackingDataSource::Visual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EFaceTrackingDataSource",
		"EFaceTrackingDataSource",
		Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource()
	{
		if (!Z_Registration_Info_UEnum_EFaceTrackingDataSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFaceTrackingDataSource.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFaceTrackingDataSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFaceExpression;
	static UEnum* EOculusXRFaceExpression_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRFaceExpression"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRFaceExpression>()
	{
		return EOculusXRFaceExpression_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators[] = {
		{ "EOculusXRFaceExpression::BrowLowererL", (int64)EOculusXRFaceExpression::BrowLowererL },
		{ "EOculusXRFaceExpression::BrowLowererR", (int64)EOculusXRFaceExpression::BrowLowererR },
		{ "EOculusXRFaceExpression::CheekPuffL", (int64)EOculusXRFaceExpression::CheekPuffL },
		{ "EOculusXRFaceExpression::CheekPuffR", (int64)EOculusXRFaceExpression::CheekPuffR },
		{ "EOculusXRFaceExpression::CheekRaiserL", (int64)EOculusXRFaceExpression::CheekRaiserL },
		{ "EOculusXRFaceExpression::CheekRaiserR", (int64)EOculusXRFaceExpression::CheekRaiserR },
		{ "EOculusXRFaceExpression::CheekSuckL", (int64)EOculusXRFaceExpression::CheekSuckL },
		{ "EOculusXRFaceExpression::CheekSuckR", (int64)EOculusXRFaceExpression::CheekSuckR },
		{ "EOculusXRFaceExpression::ChinRaiserB", (int64)EOculusXRFaceExpression::ChinRaiserB },
		{ "EOculusXRFaceExpression::ChinRaiserT", (int64)EOculusXRFaceExpression::ChinRaiserT },
		{ "EOculusXRFaceExpression::DimplerL", (int64)EOculusXRFaceExpression::DimplerL },
		{ "EOculusXRFaceExpression::DimplerR", (int64)EOculusXRFaceExpression::DimplerR },
		{ "EOculusXRFaceExpression::EyesClosedL", (int64)EOculusXRFaceExpression::EyesClosedL },
		{ "EOculusXRFaceExpression::EyesClosedR", (int64)EOculusXRFaceExpression::EyesClosedR },
		{ "EOculusXRFaceExpression::EyesLookDownL", (int64)EOculusXRFaceExpression::EyesLookDownL },
		{ "EOculusXRFaceExpression::EyesLookDownR", (int64)EOculusXRFaceExpression::EyesLookDownR },
		{ "EOculusXRFaceExpression::EyesLookLeftL", (int64)EOculusXRFaceExpression::EyesLookLeftL },
		{ "EOculusXRFaceExpression::EyesLookLeftR", (int64)EOculusXRFaceExpression::EyesLookLeftR },
		{ "EOculusXRFaceExpression::EyesLookRightL", (int64)EOculusXRFaceExpression::EyesLookRightL },
		{ "EOculusXRFaceExpression::EyesLookRightR", (int64)EOculusXRFaceExpression::EyesLookRightR },
		{ "EOculusXRFaceExpression::EyesLookUpL", (int64)EOculusXRFaceExpression::EyesLookUpL },
		{ "EOculusXRFaceExpression::EyesLookUpR", (int64)EOculusXRFaceExpression::EyesLookUpR },
		{ "EOculusXRFaceExpression::InnerBrowRaiserL", (int64)EOculusXRFaceExpression::InnerBrowRaiserL },
		{ "EOculusXRFaceExpression::InnerBrowRaiserR", (int64)EOculusXRFaceExpression::InnerBrowRaiserR },
		{ "EOculusXRFaceExpression::JawDrop", (int64)EOculusXRFaceExpression::JawDrop },
		{ "EOculusXRFaceExpression::JawSidewaysLeft", (int64)EOculusXRFaceExpression::JawSidewaysLeft },
		{ "EOculusXRFaceExpression::JawSidewaysRight", (int64)EOculusXRFaceExpression::JawSidewaysRight },
		{ "EOculusXRFaceExpression::JawThrust", (int64)EOculusXRFaceExpression::JawThrust },
		{ "EOculusXRFaceExpression::LidTightenerL", (int64)EOculusXRFaceExpression::LidTightenerL },
		{ "EOculusXRFaceExpression::LidTightenerR", (int64)EOculusXRFaceExpression::LidTightenerR },
		{ "EOculusXRFaceExpression::LipCornerDepressorL", (int64)EOculusXRFaceExpression::LipCornerDepressorL },
		{ "EOculusXRFaceExpression::LipCornerDepressorR", (int64)EOculusXRFaceExpression::LipCornerDepressorR },
		{ "EOculusXRFaceExpression::LipCornerPullerL", (int64)EOculusXRFaceExpression::LipCornerPullerL },
		{ "EOculusXRFaceExpression::LipCornerPullerR", (int64)EOculusXRFaceExpression::LipCornerPullerR },
		{ "EOculusXRFaceExpression::LipFunnelerLB", (int64)EOculusXRFaceExpression::LipFunnelerLB },
		{ "EOculusXRFaceExpression::LipFunnelerLT", (int64)EOculusXRFaceExpression::LipFunnelerLT },
		{ "EOculusXRFaceExpression::LipFunnelerRB", (int64)EOculusXRFaceExpression::LipFunnelerRB },
		{ "EOculusXRFaceExpression::LipFunnelerRT", (int64)EOculusXRFaceExpression::LipFunnelerRT },
		{ "EOculusXRFaceExpression::LipPressorL", (int64)EOculusXRFaceExpression::LipPressorL },
		{ "EOculusXRFaceExpression::LipPressorR", (int64)EOculusXRFaceExpression::LipPressorR },
		{ "EOculusXRFaceExpression::LipPuckerL", (int64)EOculusXRFaceExpression::LipPuckerL },
		{ "EOculusXRFaceExpression::LipPuckerR", (int64)EOculusXRFaceExpression::LipPuckerR },
		{ "EOculusXRFaceExpression::LipStretcherL", (int64)EOculusXRFaceExpression::LipStretcherL },
		{ "EOculusXRFaceExpression::LipStretcherR", (int64)EOculusXRFaceExpression::LipStretcherR },
		{ "EOculusXRFaceExpression::LipSuckLB", (int64)EOculusXRFaceExpression::LipSuckLB },
		{ "EOculusXRFaceExpression::LipSuckLT", (int64)EOculusXRFaceExpression::LipSuckLT },
		{ "EOculusXRFaceExpression::LipSuckRB", (int64)EOculusXRFaceExpression::LipSuckRB },
		{ "EOculusXRFaceExpression::LipSuckRT", (int64)EOculusXRFaceExpression::LipSuckRT },
		{ "EOculusXRFaceExpression::LipTightenerL", (int64)EOculusXRFaceExpression::LipTightenerL },
		{ "EOculusXRFaceExpression::LipTightenerR", (int64)EOculusXRFaceExpression::LipTightenerR },
		{ "EOculusXRFaceExpression::LipsToward", (int64)EOculusXRFaceExpression::LipsToward },
		{ "EOculusXRFaceExpression::LowerLipDepressorL", (int64)EOculusXRFaceExpression::LowerLipDepressorL },
		{ "EOculusXRFaceExpression::LowerLipDepressorR", (int64)EOculusXRFaceExpression::LowerLipDepressorR },
		{ "EOculusXRFaceExpression::MouthLeft", (int64)EOculusXRFaceExpression::MouthLeft },
		{ "EOculusXRFaceExpression::MouthRight", (int64)EOculusXRFaceExpression::MouthRight },
		{ "EOculusXRFaceExpression::NoseWrinklerL", (int64)EOculusXRFaceExpression::NoseWrinklerL },
		{ "EOculusXRFaceExpression::NoseWrinklerR", (int64)EOculusXRFaceExpression::NoseWrinklerR },
		{ "EOculusXRFaceExpression::OuterBrowRaiserL", (int64)EOculusXRFaceExpression::OuterBrowRaiserL },
		{ "EOculusXRFaceExpression::OuterBrowRaiserR", (int64)EOculusXRFaceExpression::OuterBrowRaiserR },
		{ "EOculusXRFaceExpression::UpperLidRaiserL", (int64)EOculusXRFaceExpression::UpperLidRaiserL },
		{ "EOculusXRFaceExpression::UpperLidRaiserR", (int64)EOculusXRFaceExpression::UpperLidRaiserR },
		{ "EOculusXRFaceExpression::UpperLipRaiserL", (int64)EOculusXRFaceExpression::UpperLipRaiserL },
		{ "EOculusXRFaceExpression::UpperLipRaiserR", (int64)EOculusXRFaceExpression::UpperLipRaiserR },
		{ "EOculusXRFaceExpression::TongueTipInterdental", (int64)EOculusXRFaceExpression::TongueTipInterdental },
		{ "EOculusXRFaceExpression::TongueTipAlveolar", (int64)EOculusXRFaceExpression::TongueTipAlveolar },
		{ "EOculusXRFaceExpression::TongueFrontDorsalPalate", (int64)EOculusXRFaceExpression::TongueFrontDorsalPalate },
		{ "EOculusXRFaceExpression::TongueMidDorsalPalate", (int64)EOculusXRFaceExpression::TongueMidDorsalPalate },
		{ "EOculusXRFaceExpression::TongueBackDorsalVelar", (int64)EOculusXRFaceExpression::TongueBackDorsalVelar },
		{ "EOculusXRFaceExpression::TongueOut", (int64)EOculusXRFaceExpression::TongueOut },
		{ "EOculusXRFaceExpression::TongueRetreat", (int64)EOculusXRFaceExpression::TongueRetreat },
		{ "EOculusXRFaceExpression::COUNT", (int64)EOculusXRFaceExpression::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BrowLowererL.Comment", "// Removed invalid to make this supported as a uint8 enum class\n" },
		{ "BrowLowererL.Name", "EOculusXRFaceExpression::BrowLowererL" },
		{ "BrowLowererL.ToolTip", "Removed invalid to make this supported as a uint8 enum class" },
		{ "BrowLowererR.Name", "EOculusXRFaceExpression::BrowLowererR" },
		{ "CheekPuffL.Name", "EOculusXRFaceExpression::CheekPuffL" },
		{ "CheekPuffR.Name", "EOculusXRFaceExpression::CheekPuffR" },
		{ "CheekRaiserL.Name", "EOculusXRFaceExpression::CheekRaiserL" },
		{ "CheekRaiserR.Name", "EOculusXRFaceExpression::CheekRaiserR" },
		{ "CheekSuckL.Name", "EOculusXRFaceExpression::CheekSuckL" },
		{ "CheekSuckR.Name", "EOculusXRFaceExpression::CheekSuckR" },
		{ "ChinRaiserB.Name", "EOculusXRFaceExpression::ChinRaiserB" },
		{ "ChinRaiserT.Name", "EOculusXRFaceExpression::ChinRaiserT" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRFaceExpression::COUNT" },
		{ "DimplerL.Name", "EOculusXRFaceExpression::DimplerL" },
		{ "DimplerR.Name", "EOculusXRFaceExpression::DimplerR" },
		{ "EyesClosedL.Name", "EOculusXRFaceExpression::EyesClosedL" },
		{ "EyesClosedR.Name", "EOculusXRFaceExpression::EyesClosedR" },
		{ "EyesLookDownL.Name", "EOculusXRFaceExpression::EyesLookDownL" },
		{ "EyesLookDownR.Name", "EOculusXRFaceExpression::EyesLookDownR" },
		{ "EyesLookLeftL.Name", "EOculusXRFaceExpression::EyesLookLeftL" },
		{ "EyesLookLeftR.Name", "EOculusXRFaceExpression::EyesLookLeftR" },
		{ "EyesLookRightL.Name", "EOculusXRFaceExpression::EyesLookRightL" },
		{ "EyesLookRightR.Name", "EOculusXRFaceExpression::EyesLookRightR" },
		{ "EyesLookUpL.Name", "EOculusXRFaceExpression::EyesLookUpL" },
		{ "EyesLookUpR.Name", "EOculusXRFaceExpression::EyesLookUpR" },
		{ "InnerBrowRaiserL.Name", "EOculusXRFaceExpression::InnerBrowRaiserL" },
		{ "InnerBrowRaiserR.Name", "EOculusXRFaceExpression::InnerBrowRaiserR" },
		{ "JawDrop.Name", "EOculusXRFaceExpression::JawDrop" },
		{ "JawSidewaysLeft.Name", "EOculusXRFaceExpression::JawSidewaysLeft" },
		{ "JawSidewaysRight.Name", "EOculusXRFaceExpression::JawSidewaysRight" },
		{ "JawThrust.Name", "EOculusXRFaceExpression::JawThrust" },
		{ "LidTightenerL.Name", "EOculusXRFaceExpression::LidTightenerL" },
		{ "LidTightenerR.Name", "EOculusXRFaceExpression::LidTightenerR" },
		{ "LipCornerDepressorL.Name", "EOculusXRFaceExpression::LipCornerDepressorL" },
		{ "LipCornerDepressorR.Name", "EOculusXRFaceExpression::LipCornerDepressorR" },
		{ "LipCornerPullerL.Name", "EOculusXRFaceExpression::LipCornerPullerL" },
		{ "LipCornerPullerR.Name", "EOculusXRFaceExpression::LipCornerPullerR" },
		{ "LipFunnelerLB.Name", "EOculusXRFaceExpression::LipFunnelerLB" },
		{ "LipFunnelerLT.Name", "EOculusXRFaceExpression::LipFunnelerLT" },
		{ "LipFunnelerRB.Name", "EOculusXRFaceExpression::LipFunnelerRB" },
		{ "LipFunnelerRT.Name", "EOculusXRFaceExpression::LipFunnelerRT" },
		{ "LipPressorL.Name", "EOculusXRFaceExpression::LipPressorL" },
		{ "LipPressorR.Name", "EOculusXRFaceExpression::LipPressorR" },
		{ "LipPuckerL.Name", "EOculusXRFaceExpression::LipPuckerL" },
		{ "LipPuckerR.Name", "EOculusXRFaceExpression::LipPuckerR" },
		{ "LipsToward.Name", "EOculusXRFaceExpression::LipsToward" },
		{ "LipStretcherL.Name", "EOculusXRFaceExpression::LipStretcherL" },
		{ "LipStretcherR.Name", "EOculusXRFaceExpression::LipStretcherR" },
		{ "LipSuckLB.Name", "EOculusXRFaceExpression::LipSuckLB" },
		{ "LipSuckLT.Name", "EOculusXRFaceExpression::LipSuckLT" },
		{ "LipSuckRB.Name", "EOculusXRFaceExpression::LipSuckRB" },
		{ "LipSuckRT.Name", "EOculusXRFaceExpression::LipSuckRT" },
		{ "LipTightenerL.Name", "EOculusXRFaceExpression::LipTightenerL" },
		{ "LipTightenerR.Name", "EOculusXRFaceExpression::LipTightenerR" },
		{ "LowerLipDepressorL.Name", "EOculusXRFaceExpression::LowerLipDepressorL" },
		{ "LowerLipDepressorR.Name", "EOculusXRFaceExpression::LowerLipDepressorR" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "MouthLeft.Name", "EOculusXRFaceExpression::MouthLeft" },
		{ "MouthRight.Name", "EOculusXRFaceExpression::MouthRight" },
		{ "NoseWrinklerL.Name", "EOculusXRFaceExpression::NoseWrinklerL" },
		{ "NoseWrinklerR.Name", "EOculusXRFaceExpression::NoseWrinklerR" },
		{ "OuterBrowRaiserL.Name", "EOculusXRFaceExpression::OuterBrowRaiserL" },
		{ "OuterBrowRaiserR.Name", "EOculusXRFaceExpression::OuterBrowRaiserR" },
		{ "TongueBackDorsalVelar.Name", "EOculusXRFaceExpression::TongueBackDorsalVelar" },
		{ "TongueFrontDorsalPalate.Name", "EOculusXRFaceExpression::TongueFrontDorsalPalate" },
		{ "TongueMidDorsalPalate.Name", "EOculusXRFaceExpression::TongueMidDorsalPalate" },
		{ "TongueOut.Name", "EOculusXRFaceExpression::TongueOut" },
		{ "TongueRetreat.Name", "EOculusXRFaceExpression::TongueRetreat" },
		{ "TongueTipAlveolar.Name", "EOculusXRFaceExpression::TongueTipAlveolar" },
		{ "TongueTipInterdental.Name", "EOculusXRFaceExpression::TongueTipInterdental" },
		{ "UpperLidRaiserL.Name", "EOculusXRFaceExpression::UpperLidRaiserL" },
		{ "UpperLidRaiserR.Name", "EOculusXRFaceExpression::UpperLidRaiserR" },
		{ "UpperLipRaiserL.Name", "EOculusXRFaceExpression::UpperLipRaiserL" },
		{ "UpperLipRaiserR.Name", "EOculusXRFaceExpression::UpperLipRaiserR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRFaceExpression",
		"EOculusXRFaceExpression",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFaceConfidence;
	static UEnum* EOculusXRFaceConfidence_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRFaceConfidence"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRFaceConfidence>()
	{
		return EOculusXRFaceConfidence_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators[] = {
		{ "EOculusXRFaceConfidence::Lower", (int64)EOculusXRFaceConfidence::Lower },
		{ "EOculusXRFaceConfidence::Upper", (int64)EOculusXRFaceConfidence::Upper },
		{ "EOculusXRFaceConfidence::COUNT", (int64)EOculusXRFaceConfidence::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXRFaceConfidence::COUNT" },
		{ "Lower.Name", "EOculusXRFaceConfidence::Lower" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Upper.Name", "EOculusXRFaceConfidence::Upper" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRFaceConfidence",
		"EOculusXRFaceConfidence",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRFaceState;
class UScriptStruct* FOculusXRFaceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRFaceState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRFaceState>()
{
	return FOculusXRFaceState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRFaceState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeights;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeightConfidences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeightConfidences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeightConfidences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEyeFollowingBlendshapesValid_MetaData[];
#endif
		static void NewProp_bIsEyeFollowingBlendshapesValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEyeFollowingBlendshapesValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceState>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_Inner = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_Inner = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeightConfidences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRFaceState), &Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsEyeFollowingBlendshapesValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid = { "bIsEyeFollowingBlendshapesValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRFaceState), &Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceState, DataSource), Z_Construct_UEnum_OculusXRMovement_EFaceTrackingDataSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource_MetaData) }; // 513968845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_DataSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRFaceState",
		Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers),
		sizeof(FOculusXRFaceState),
		alignof(FOculusXRFaceState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier;
class UScriptStruct* FOculusXRFaceExpressionModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRFaceExpressionModifier"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRFaceExpressionModifier>()
{
	return FOculusXRFaceExpressionModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FaceExpressions_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaceExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceExpressionModifier>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_Inner = { "FaceExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, METADATA_PARAMS(0, nullptr) }; // 3931067710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions = { "FaceExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, FaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_MetaData) }; // 3931067710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MinValue_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRFaceExpressionModifier, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_Multiplier_MetaData), Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_Multiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_FaceExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewProp_Multiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRFaceExpressionModifier",
		Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::PropPointers),
		sizeof(FOculusXRFaceExpressionModifier),
		alignof(FOculusXRFaceExpressionModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXREye;
	static UEnum* EOculusXREye_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXREye, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXREye"));
		}
		return Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXREye>()
	{
		return EOculusXREye_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators[] = {
		{ "EOculusXREye::Left", (int64)EOculusXREye::Left },
		{ "EOculusXREye::Right", (int64)EOculusXREye::Right },
		{ "EOculusXREye::COUNT", (int64)EOculusXREye::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXREye::COUNT" },
		{ "Left.Name", "EOculusXREye::Left" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Right.Name", "EOculusXREye::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXREye",
		"EOculusXREye",
		Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXREyeGazeState;
class UScriptStruct* FOculusXREyeGazeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazeState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXREyeGazeState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXREyeGazeState>()
{
	return FOculusXREyeGazeState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazeState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazeState, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXREyeGazeState*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXREyeGazeState), &Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXREyeGazeState",
		Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers),
		sizeof(FOculusXREyeGazeState),
		alignof(FOculusXREyeGazeState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXREyeGazesState;
class UScriptStruct* FOculusXREyeGazesState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazesState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXREyeGazesState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXREyeGazesState>()
{
	return FOculusXREyeGazesState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EyeGazes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeGazes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EyeGazes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazesState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_Inner = { "EyeGazes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXREyeGazeState, METADATA_PARAMS(0, nullptr) }; // 1594859235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes = { "EyeGazes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazesState, EyeGazes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData) }; // 1594859235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXREyeGazesState, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXREyeGazesState",
		Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers),
		sizeof(FOculusXREyeGazesState),
		alignof(FOculusXREyeGazesState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo[] = {
		{ EOculusXRBodyJointSet_StaticEnum, TEXT("EOculusXRBodyJointSet"), &Z_Registration_Info_UEnum_EOculusXRBodyJointSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2067536671U) },
		{ EOculusXRBodyTrackingFidelity_StaticEnum, TEXT("EOculusXRBodyTrackingFidelity"), &Z_Registration_Info_UEnum_EOculusXRBodyTrackingFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 945995407U) },
		{ EOculusXRBoneID_StaticEnum, TEXT("EOculusXRBoneID"), &Z_Registration_Info_UEnum_EOculusXRBoneID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2550275467U) },
		{ EFaceTrackingDataSource_StaticEnum, TEXT("EFaceTrackingDataSource"), &Z_Registration_Info_UEnum_EFaceTrackingDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 513968845U) },
		{ EOculusXRFaceExpression_StaticEnum, TEXT("EOculusXRFaceExpression"), &Z_Registration_Info_UEnum_EOculusXRFaceExpression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3931067710U) },
		{ EOculusXRFaceConfidence_StaticEnum, TEXT("EOculusXRFaceConfidence"), &Z_Registration_Info_UEnum_EOculusXRFaceConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1123681469U) },
		{ EOculusXREye_StaticEnum, TEXT("EOculusXREye"), &Z_Registration_Info_UEnum_EOculusXREye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35062370U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRBodyJoint::StaticStruct, Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewStructOps, TEXT("OculusXRBodyJoint"), &Z_Registration_Info_UScriptStruct_OculusXRBodyJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyJoint), 435375430U) },
		{ FOculusXRBodyState::StaticStruct, Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewStructOps, TEXT("OculusXRBodyState"), &Z_Registration_Info_UScriptStruct_OculusXRBodyState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyState), 3040790763U) },
		{ FOculusXRFaceState::StaticStruct, Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewStructOps, TEXT("OculusXRFaceState"), &Z_Registration_Info_UScriptStruct_OculusXRFaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceState), 374802814U) },
		{ FOculusXRFaceExpressionModifier::StaticStruct, Z_Construct_UScriptStruct_FOculusXRFaceExpressionModifier_Statics::NewStructOps, TEXT("OculusXRFaceExpressionModifier"), &Z_Registration_Info_UScriptStruct_OculusXRFaceExpressionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceExpressionModifier), 1927288424U) },
		{ FOculusXREyeGazeState::StaticStruct, Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewStructOps, TEXT("OculusXREyeGazeState"), &Z_Registration_Info_UScriptStruct_OculusXREyeGazeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazeState), 1594859235U) },
		{ FOculusXREyeGazesState::StaticStruct, Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewStructOps, TEXT("OculusXREyeGazesState"), &Z_Registration_Info_UScriptStruct_OculusXREyeGazesState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazesState), 2280488769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_1129602068(TEXT("/Script/OculusXRMovement"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MichelBrito_Documents_Unreal_Projects_GestureTrackerTeste_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS