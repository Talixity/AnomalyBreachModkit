// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/AnimateAnomaly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimateAnomaly() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AAnimateAnomaly();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AAnimateAnomaly_NoRegister();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AMapGeneratorV2_NoRegister();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimDoorOriginalState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimDoorOriginalState;
class UScriptStruct* FAnimDoorOriginalState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimDoorOriginalState, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("AnimDoorOriginalState"));
	}
	return Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FAnimDoorOriginalState>()
{
	return FAnimDoorOriginalState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PowerSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Define the struct again here, or move it to AnomalyInterfaces.h if you want to share it. \n// It's perfectly safe to redefine a slightly differently named internal struct.\n" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
		{ "ToolTip", "Define the struct again here, or move it to AnomalyInterfaces.h if you want to share it.\nIt's perfectly safe to redefine a slightly differently named internal struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimDoorOriginalState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewProp_PowerSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewProp_PowerSource = { "PowerSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimDoorOriginalState, PowerSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewProp_PowerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewProp_PowerSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewProp_PowerSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"AnimDoorOriginalState",
		sizeof(FAnimDoorOriginalState),
		alignof(FAnimDoorOriginalState),
		Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimDoorOriginalState()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.InnerSingleton, Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimDoorOriginalState.InnerSingleton;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execTeleportToRandomRoomInZone)
	{
		P_GET_OBJECT(AMapGeneratorV2,Z_Param_MapGen);
		P_GET_ENUM(EMapGenZone,Z_Param_TargetZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportToRandomRoomInZone(Z_Param_MapGen,EMapGenZone(Z_Param_TargetZone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execTeleportBehindPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportBehindPlayer(Z_Param_Player,Z_Param_MinimumDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execForcePlayerBlink)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcePlayerBlink(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execDrainPlayerStamina)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrainPlayerStamina(Z_Param_Player,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execInstaKillPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_DeathReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstaKillPlayer(Z_Param_Player,Z_Param_DeathReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execDealDamageToPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_PROPERTY(FNameProperty,Z_Param_DamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealDamageToPlayer(Z_Param_Player,Z_Param_Amount,Z_Param_DamageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execForceCloseNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceCloseNearbyDoors(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execForceOpenNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceOpenNearbyDoors(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimateAnomaly::execLockNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockNearbyDoors(Z_Param_Radius,Z_Param_Duration);
		P_NATIVE_END;
	}
	struct AnimateAnomaly_eventOnDoorBlockedPath_Parms
	{
		AActor* DoorActor;
	};
	struct AnimateAnomaly_eventOnLookedAtDuringBlink_Parms
	{
		AActor* Player;
	};
	struct AnimateAnomaly_eventOnTargetLost_Parms
	{
		AActor* Target;
	};
	struct AnimateAnomaly_eventOnTargetSpotted_Parms
	{
		AActor* Target;
	};
	static FName NAME_AAnimateAnomaly_OnDoorBlockedPath = FName(TEXT("OnDoorBlockedPath"));
	void AAnimateAnomaly::OnDoorBlockedPath(AActor* DoorActor)
	{
		AnimateAnomaly_eventOnDoorBlockedPath_Parms Parms;
		Parms.DoorActor=DoorActor;
		ProcessEvent(FindFunctionChecked(NAME_AAnimateAnomaly_OnDoorBlockedPath),&Parms);
	}
	static FName NAME_AAnimateAnomaly_OnLookedAtDuringBlink = FName(TEXT("OnLookedAtDuringBlink"));
	void AAnimateAnomaly::OnLookedAtDuringBlink(AActor* Player)
	{
		AnimateAnomaly_eventOnLookedAtDuringBlink_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AAnimateAnomaly_OnLookedAtDuringBlink),&Parms);
	}
	static FName NAME_AAnimateAnomaly_OnReachedTarget = FName(TEXT("OnReachedTarget"));
	void AAnimateAnomaly::OnReachedTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAnimateAnomaly_OnReachedTarget),NULL);
	}
	static FName NAME_AAnimateAnomaly_OnTargetLost = FName(TEXT("OnTargetLost"));
	void AAnimateAnomaly::OnTargetLost(AActor* Target)
	{
		AnimateAnomaly_eventOnTargetLost_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AAnimateAnomaly_OnTargetLost),&Parms);
	}
	static FName NAME_AAnimateAnomaly_OnTargetSpotted = FName(TEXT("OnTargetSpotted"));
	void AAnimateAnomaly::OnTargetSpotted(AActor* Target)
	{
		AnimateAnomaly_eventOnTargetSpotted_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AAnimateAnomaly_OnTargetSpotted),&Parms);
	}
	void AAnimateAnomaly::StaticRegisterNativesAAnimateAnomaly()
	{
		UClass* Class = AAnimateAnomaly::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DealDamageToPlayer", &AAnimateAnomaly::execDealDamageToPlayer },
			{ "DrainPlayerStamina", &AAnimateAnomaly::execDrainPlayerStamina },
			{ "ForceCloseNearbyDoors", &AAnimateAnomaly::execForceCloseNearbyDoors },
			{ "ForceOpenNearbyDoors", &AAnimateAnomaly::execForceOpenNearbyDoors },
			{ "ForcePlayerBlink", &AAnimateAnomaly::execForcePlayerBlink },
			{ "InstaKillPlayer", &AAnimateAnomaly::execInstaKillPlayer },
			{ "LockNearbyDoors", &AAnimateAnomaly::execLockNearbyDoors },
			{ "TeleportBehindPlayer", &AAnimateAnomaly::execTeleportBehindPlayer },
			{ "TeleportToRandomRoomInZone", &AAnimateAnomaly::execTeleportToRandomRoomInZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics
	{
		struct AnimateAnomaly_eventDealDamageToPlayer_Parms
		{
			AActor* Player;
			float Amount;
			FName DamageType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventDealDamageToPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventDealDamageToPlayer_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventDealDamageToPlayer_Parms, DamageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "Comment", "// ==========================================\n// PLAYER MANIPULATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
		{ "ToolTip", "PLAYER MANIPULATION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "DealDamageToPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::AnimateAnomaly_eventDealDamageToPlayer_Parms), Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics
	{
		struct AnimateAnomaly_eventDrainPlayerStamina_Parms
		{
			AActor* Player;
			float Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventDrainPlayerStamina_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventDrainPlayerStamina_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "DrainPlayerStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::AnimateAnomaly_eventDrainPlayerStamina_Parms), Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics
	{
		struct AnimateAnomaly_eventForceCloseNearbyDoors_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventForceCloseNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "ForceCloseNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::AnimateAnomaly_eventForceCloseNearbyDoors_Parms), Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics
	{
		struct AnimateAnomaly_eventForceOpenNearbyDoors_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventForceOpenNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "ForceOpenNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::AnimateAnomaly_eventForceOpenNearbyDoors_Parms), Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics
	{
		struct AnimateAnomaly_eventForcePlayerBlink_Parms
		{
			AActor* Player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventForcePlayerBlink_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "ForcePlayerBlink", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::AnimateAnomaly_eventForcePlayerBlink_Parms), Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics
	{
		struct AnimateAnomaly_eventInstaKillPlayer_Parms
		{
			AActor* Player;
			FName DeathReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeathReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventInstaKillPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventInstaKillPlayer_Parms, DeathReason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::NewProp_DeathReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "InstaKillPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::AnimateAnomaly_eventInstaKillPlayer_Parms), Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics
	{
		struct AnimateAnomaly_eventLockNearbyDoors_Parms
		{
			float Radius;
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventLockNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventLockNearbyDoors_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "Comment", "// ==========================================\n// ENVIRONMENTAL MANIPULATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
		{ "ToolTip", "ENVIRONMENTAL MANIPULATION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "LockNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::AnimateAnomaly_eventLockNearbyDoors_Parms), Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::NewProp_DoorActor = { "DoorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventOnDoorBlockedPath_Parms, DoorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::NewProp_DoorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "OnDoorBlockedPath", nullptr, nullptr, sizeof(AnimateAnomaly_eventOnDoorBlockedPath_Parms), Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventOnLookedAtDuringBlink_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "OnLookedAtDuringBlink", nullptr, nullptr, sizeof(AnimateAnomaly_eventOnLookedAtDuringBlink_Parms), Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "OnReachedTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventOnTargetLost_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "OnTargetLost", nullptr, nullptr, sizeof(AnimateAnomaly_eventOnTargetLost_Parms), Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventOnTargetSpotted_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "Comment", "// ==========================================\n// MODDER EVENTS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
		{ "ToolTip", "MODDER EVENTS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "OnTargetSpotted", nullptr, nullptr, sizeof(AnimateAnomaly_eventOnTargetSpotted_Parms), Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics
	{
		struct AnimateAnomaly_eventTeleportBehindPlayer_Parms
		{
			AActor* Player;
			float MinimumDistance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventTeleportBehindPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventTeleportBehindPlayer_Parms, MinimumDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::NewProp_MinimumDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Movement" },
		{ "Comment", "// ==========================================\n// MONSTER SPECIFIC API\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
		{ "ToolTip", "MONSTER SPECIFIC API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "TeleportBehindPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::AnimateAnomaly_eventTeleportBehindPlayer_Parms), Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics
	{
		struct AnimateAnomaly_eventTeleportToRandomRoomInZone_Parms
		{
			AMapGeneratorV2* MapGen;
			EMapGenZone TargetZone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapGen;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetZone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetZone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_MapGen = { "MapGen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventTeleportToRandomRoomInZone_Parms, MapGen), Z_Construct_UClass_AMapGeneratorV2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_TargetZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_TargetZone = { "TargetZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimateAnomaly_eventTeleportToRandomRoomInZone_Parms, TargetZone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(nullptr, 0) }; // 2490587055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_MapGen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_TargetZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::NewProp_TargetZone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Movement" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimateAnomaly, nullptr, "TeleportToRandomRoomInZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::AnimateAnomaly_eventTeleportToRandomRoomInZone_Parms), Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimateAnomaly);
	UClass* Z_Construct_UClass_AAnimateAnomaly_NoRegister()
	{
		return AAnimateAnomaly::StaticClass();
	}
	struct Z_Construct_UClass_AAnimateAnomaly_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnomalyID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnomalyID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentZone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentZone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeWhenLookedAt_MetaData[];
#endif
		static void NewProp_bFreezeWhenLookedAt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeWhenLookedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnrageOnLook_MetaData[];
#endif
		static void NewProp_bEnrageOnLook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnrageOnLook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedDoorsMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedDoorsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedDoorsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LockedDoorsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimateAnomaly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAnimateAnomaly_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimateAnomaly_DealDamageToPlayer, "DealDamageToPlayer" }, // 3087122164
		{ &Z_Construct_UFunction_AAnimateAnomaly_DrainPlayerStamina, "DrainPlayerStamina" }, // 1568796829
		{ &Z_Construct_UFunction_AAnimateAnomaly_ForceCloseNearbyDoors, "ForceCloseNearbyDoors" }, // 2000576859
		{ &Z_Construct_UFunction_AAnimateAnomaly_ForceOpenNearbyDoors, "ForceOpenNearbyDoors" }, // 4074657783
		{ &Z_Construct_UFunction_AAnimateAnomaly_ForcePlayerBlink, "ForcePlayerBlink" }, // 2393319240
		{ &Z_Construct_UFunction_AAnimateAnomaly_InstaKillPlayer, "InstaKillPlayer" }, // 2152027441
		{ &Z_Construct_UFunction_AAnimateAnomaly_LockNearbyDoors, "LockNearbyDoors" }, // 2990750470
		{ &Z_Construct_UFunction_AAnimateAnomaly_OnDoorBlockedPath, "OnDoorBlockedPath" }, // 2260108486
		{ &Z_Construct_UFunction_AAnimateAnomaly_OnLookedAtDuringBlink, "OnLookedAtDuringBlink" }, // 2550705461
		{ &Z_Construct_UFunction_AAnimateAnomaly_OnReachedTarget, "OnReachedTarget" }, // 1819034915
		{ &Z_Construct_UFunction_AAnimateAnomaly_OnTargetLost, "OnTargetLost" }, // 4145008036
		{ &Z_Construct_UFunction_AAnimateAnomaly_OnTargetSpotted, "OnTargetSpotted" }, // 1330947377
		{ &Z_Construct_UFunction_AAnimateAnomaly_TeleportBehindPlayer, "TeleportBehindPlayer" }, // 2817194543
		{ &Z_Construct_UFunction_AAnimateAnomaly_TeleportToRandomRoomInZone, "TeleportToRandomRoomInZone" }, // 1722159679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AnimateAnomaly.h" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_AnomalyID_MetaData[] = {
		{ "Category", "Anomaly Data" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_AnomalyID = { "AnomalyID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAnimateAnomaly, AnomalyID), METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_AnomalyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_AnomalyID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone_MetaData[] = {
		{ "Category", "Anomaly Data" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone = { "CurrentZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAnimateAnomaly, CurrentZone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone_MetaData)) }; // 2490587055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt_MetaData[] = {
		{ "Category", "Anomaly Data|AI" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	void Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt_SetBit(void* Obj)
	{
		((AAnimateAnomaly*)Obj)->bFreezeWhenLookedAt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt = { "bFreezeWhenLookedAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAnimateAnomaly), &Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook_MetaData[] = {
		{ "Category", "Anomaly Data|AI" },
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	void Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook_SetBit(void* Obj)
	{
		((AAnimateAnomaly*)Obj)->bEnrageOnLook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook = { "bEnrageOnLook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAnimateAnomaly), &Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_ValueProp = { "LockedDoorsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAnimDoorOriginalState, METADATA_PARAMS(nullptr, 0) }; // 1889559027
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_Key_KeyProp = { "LockedDoorsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimateAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap = { "LockedDoorsMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAnimateAnomaly, LockedDoorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_MetaData)) }; // 1889559027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimateAnomaly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_AnomalyID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_CurrentZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bFreezeWhenLookedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_bEnrageOnLook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimateAnomaly_Statics::NewProp_LockedDoorsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimateAnomaly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimateAnomaly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimateAnomaly_Statics::ClassParams = {
		&AAnimateAnomaly::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAnimateAnomaly_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimateAnomaly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimateAnomaly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimateAnomaly()
	{
		if (!Z_Registration_Info_UClass_AAnimateAnomaly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimateAnomaly.OuterSingleton, Z_Construct_UClass_AAnimateAnomaly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAnimateAnomaly.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<AAnimateAnomaly>()
	{
		return AAnimateAnomaly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimateAnomaly);
	AAnimateAnomaly::~AAnimateAnomaly() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ScriptStructInfo[] = {
		{ FAnimDoorOriginalState::StaticStruct, Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics::NewStructOps, TEXT("AnimDoorOriginalState"), &Z_Registration_Info_UScriptStruct_AnimDoorOriginalState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimDoorOriginalState), 1889559027U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAnimateAnomaly, AAnimateAnomaly::StaticClass, TEXT("AAnimateAnomaly"), &Z_Registration_Info_UClass_AAnimateAnomaly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimateAnomaly), 1446472984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_132158201(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
