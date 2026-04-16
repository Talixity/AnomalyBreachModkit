// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/StaticAnomaly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticAnomaly() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AStaticAnomaly();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AStaticAnomaly_NoRegister();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDoorOriginalState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoorOriginalState;
class UScriptStruct* FDoorOriginalState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoorOriginalState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoorOriginalState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorOriginalState, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("DoorOriginalState"));
	}
	return Z_Registration_Info_UScriptStruct_DoorOriginalState.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FDoorOriginalState>()
{
	return FDoorOriginalState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoorOriginalState_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorOriginalState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorOriginalState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewProp_PowerSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewProp_PowerSource = { "PowerSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDoorOriginalState, PowerSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewProp_PowerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewProp_PowerSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorOriginalState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewProp_PowerSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorOriginalState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"DoorOriginalState",
		sizeof(FDoorOriginalState),
		alignof(FDoorOriginalState),
		Z_Construct_UScriptStruct_FDoorOriginalState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorOriginalState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoorOriginalState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorOriginalState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoorOriginalState()
	{
		if (!Z_Registration_Info_UScriptStruct_DoorOriginalState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoorOriginalState.InnerSingleton, Z_Construct_UScriptStruct_FDoorOriginalState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoorOriginalState.InnerSingleton;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execForcePlayerBlink)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcePlayerBlink(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execDrainPlayerStamina)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrainPlayerStamina(Z_Param_Player,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execInstaKillPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_DeathReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstaKillPlayer(Z_Param_Player,Z_Param_DeathReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execDealDamageToPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_PROPERTY(FNameProperty,Z_Param_DamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealDamageToPlayer(Z_Param_Player,Z_Param_Amount,Z_Param_DamageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execForceCloseNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceCloseNearbyDoors(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execForceOpenNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceOpenNearbyDoors(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStaticAnomaly::execLockNearbyDoors)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockNearbyDoors(Z_Param_Radius,Z_Param_Duration);
		P_NATIVE_END;
	}
	struct StaticAnomaly_eventOnGrabbed_Parms
	{
		AActor* GrabbingHand;
	};
	struct StaticAnomaly_eventOnPlayerEnteredProximity_Parms
	{
		AActor* Player;
	};
	struct StaticAnomaly_eventOnPlayerExitedProximity_Parms
	{
		AActor* Player;
	};
	struct StaticAnomaly_eventOnUsed_Parms
	{
		AActor* GrabbingHand;
	};
	static FName NAME_AStaticAnomaly_OnDropped = FName(TEXT("OnDropped"));
	void AStaticAnomaly::OnDropped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStaticAnomaly_OnDropped),NULL);
	}
	static FName NAME_AStaticAnomaly_OnGrabbed = FName(TEXT("OnGrabbed"));
	void AStaticAnomaly::OnGrabbed(AActor* GrabbingHand)
	{
		StaticAnomaly_eventOnGrabbed_Parms Parms;
		Parms.GrabbingHand=GrabbingHand;
		ProcessEvent(FindFunctionChecked(NAME_AStaticAnomaly_OnGrabbed),&Parms);
	}
	static FName NAME_AStaticAnomaly_OnPlayerEnteredProximity = FName(TEXT("OnPlayerEnteredProximity"));
	void AStaticAnomaly::OnPlayerEnteredProximity(AActor* Player)
	{
		StaticAnomaly_eventOnPlayerEnteredProximity_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AStaticAnomaly_OnPlayerEnteredProximity),&Parms);
	}
	static FName NAME_AStaticAnomaly_OnPlayerExitedProximity = FName(TEXT("OnPlayerExitedProximity"));
	void AStaticAnomaly::OnPlayerExitedProximity(AActor* Player)
	{
		StaticAnomaly_eventOnPlayerExitedProximity_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AStaticAnomaly_OnPlayerExitedProximity),&Parms);
	}
	static FName NAME_AStaticAnomaly_OnUsed = FName(TEXT("OnUsed"));
	void AStaticAnomaly::OnUsed(AActor* GrabbingHand)
	{
		StaticAnomaly_eventOnUsed_Parms Parms;
		Parms.GrabbingHand=GrabbingHand;
		ProcessEvent(FindFunctionChecked(NAME_AStaticAnomaly_OnUsed),&Parms);
	}
	void AStaticAnomaly::StaticRegisterNativesAStaticAnomaly()
	{
		UClass* Class = AStaticAnomaly::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DealDamageToPlayer", &AStaticAnomaly::execDealDamageToPlayer },
			{ "DrainPlayerStamina", &AStaticAnomaly::execDrainPlayerStamina },
			{ "ForceCloseNearbyDoors", &AStaticAnomaly::execForceCloseNearbyDoors },
			{ "ForceOpenNearbyDoors", &AStaticAnomaly::execForceOpenNearbyDoors },
			{ "ForcePlayerBlink", &AStaticAnomaly::execForcePlayerBlink },
			{ "InstaKillPlayer", &AStaticAnomaly::execInstaKillPlayer },
			{ "LockNearbyDoors", &AStaticAnomaly::execLockNearbyDoors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics
	{
		struct StaticAnomaly_eventDealDamageToPlayer_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventDealDamageToPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventDealDamageToPlayer_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventDealDamageToPlayer_Parms, DamageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "Comment", "// ==========================================\n// PLAYER MANIPULATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
		{ "ToolTip", "PLAYER MANIPULATION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "DealDamageToPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::StaticAnomaly_eventDealDamageToPlayer_Parms), Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics
	{
		struct StaticAnomaly_eventDrainPlayerStamina_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventDrainPlayerStamina_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventDrainPlayerStamina_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "DrainPlayerStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::StaticAnomaly_eventDrainPlayerStamina_Parms), Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics
	{
		struct StaticAnomaly_eventForceCloseNearbyDoors_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventForceCloseNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "ForceCloseNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::StaticAnomaly_eventForceCloseNearbyDoors_Parms), Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics
	{
		struct StaticAnomaly_eventForceOpenNearbyDoors_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventForceOpenNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "ForceOpenNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::StaticAnomaly_eventForceOpenNearbyDoors_Parms), Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics
	{
		struct StaticAnomaly_eventForcePlayerBlink_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventForcePlayerBlink_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "ForcePlayerBlink", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::StaticAnomaly_eventForcePlayerBlink_Parms), Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics
	{
		struct StaticAnomaly_eventInstaKillPlayer_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventInstaKillPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventInstaKillPlayer_Parms, DeathReason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::NewProp_DeathReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Player" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "InstaKillPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::StaticAnomaly_eventInstaKillPlayer_Parms), Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics
	{
		struct StaticAnomaly_eventLockNearbyDoors_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventLockNearbyDoors_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventLockNearbyDoors_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly API|Environment" },
		{ "Comment", "// ==========================================\n// ENVIRONMENTAL MANIPULATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
		{ "ToolTip", "ENVIRONMENTAL MANIPULATION" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "LockNearbyDoors", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::StaticAnomaly_eventLockNearbyDoors_Parms), Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "OnDropped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_OnDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_OnDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbingHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::NewProp_GrabbingHand = { "GrabbingHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventOnGrabbed_Parms, GrabbingHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::NewProp_GrabbingHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "Comment", "// ==========================================\n// MODDER EVENTS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
		{ "ToolTip", "MODDER EVENTS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "OnGrabbed", nullptr, nullptr, sizeof(StaticAnomaly_eventOnGrabbed_Parms), Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_OnGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_OnGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventOnPlayerEnteredProximity_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "OnPlayerEnteredProximity", nullptr, nullptr, sizeof(StaticAnomaly_eventOnPlayerEnteredProximity_Parms), Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventOnPlayerExitedProximity_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "OnPlayerExitedProximity", nullptr, nullptr, sizeof(StaticAnomaly_eventOnPlayerExitedProximity_Parms), Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbingHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::NewProp_GrabbingHand = { "GrabbingHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticAnomaly_eventOnUsed_Parms, GrabbingHand), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::NewProp_GrabbingHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Events" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticAnomaly, nullptr, "OnUsed", nullptr, nullptr, sizeof(StaticAnomaly_eventOnUsed_Parms), Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticAnomaly_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticAnomaly_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticAnomaly);
	UClass* Z_Construct_UClass_AStaticAnomaly_NoRegister()
	{
		return AStaticAnomaly::StaticClass();
	}
	struct Z_Construct_UClass_AStaticAnomaly_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrabbable_MetaData[];
#endif
		static void NewProp_bIsGrabbable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrabbable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrainStaminaWhileHeld_MetaData[];
#endif
		static void NewProp_bDrainStaminaWhileHeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrainStaminaWhileHeld;
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
	UObject* (*const Z_Construct_UClass_AStaticAnomaly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStaticAnomaly_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticAnomaly_DealDamageToPlayer, "DealDamageToPlayer" }, // 1901942000
		{ &Z_Construct_UFunction_AStaticAnomaly_DrainPlayerStamina, "DrainPlayerStamina" }, // 435216408
		{ &Z_Construct_UFunction_AStaticAnomaly_ForceCloseNearbyDoors, "ForceCloseNearbyDoors" }, // 1089125764
		{ &Z_Construct_UFunction_AStaticAnomaly_ForceOpenNearbyDoors, "ForceOpenNearbyDoors" }, // 3596861146
		{ &Z_Construct_UFunction_AStaticAnomaly_ForcePlayerBlink, "ForcePlayerBlink" }, // 980444677
		{ &Z_Construct_UFunction_AStaticAnomaly_InstaKillPlayer, "InstaKillPlayer" }, // 3271782596
		{ &Z_Construct_UFunction_AStaticAnomaly_LockNearbyDoors, "LockNearbyDoors" }, // 2731596336
		{ &Z_Construct_UFunction_AStaticAnomaly_OnDropped, "OnDropped" }, // 763894716
		{ &Z_Construct_UFunction_AStaticAnomaly_OnGrabbed, "OnGrabbed" }, // 706684172
		{ &Z_Construct_UFunction_AStaticAnomaly_OnPlayerEnteredProximity, "OnPlayerEnteredProximity" }, // 3570793748
		{ &Z_Construct_UFunction_AStaticAnomaly_OnPlayerExitedProximity, "OnPlayerExitedProximity" }, // 1258343313
		{ &Z_Construct_UFunction_AStaticAnomaly_OnUsed, "OnUsed" }, // 3953307647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticAnomaly.h" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_AnomalyID_MetaData[] = {
		{ "Category", "Anomaly Data" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_AnomalyID = { "AnomalyID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticAnomaly, AnomalyID), METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_AnomalyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_AnomalyID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone_MetaData[] = {
		{ "Category", "Anomaly Data" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone = { "CurrentZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticAnomaly, CurrentZone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone_MetaData)) }; // 2490587055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable_MetaData[] = {
		{ "Category", "Anomaly Data|Static" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	void Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable_SetBit(void* Obj)
	{
		((AStaticAnomaly*)Obj)->bIsGrabbable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable = { "bIsGrabbable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AStaticAnomaly), &Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld_MetaData[] = {
		{ "Category", "Anomaly Data|Static" },
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	void Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld_SetBit(void* Obj)
	{
		((AStaticAnomaly*)Obj)->bDrainStaminaWhileHeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld = { "bDrainStaminaWhileHeld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AStaticAnomaly), &Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_ValueProp = { "LockedDoorsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDoorOriginalState, METADATA_PARAMS(nullptr, 0) }; // 2423314569
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_Key_KeyProp = { "LockedDoorsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticAnomaly.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap = { "LockedDoorsMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticAnomaly, LockedDoorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_MetaData)) }; // 2423314569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticAnomaly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_AnomalyID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_CurrentZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bIsGrabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_bDrainStaminaWhileHeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticAnomaly_Statics::NewProp_LockedDoorsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticAnomaly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticAnomaly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticAnomaly_Statics::ClassParams = {
		&AStaticAnomaly::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStaticAnomaly_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStaticAnomaly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticAnomaly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticAnomaly()
	{
		if (!Z_Registration_Info_UClass_AStaticAnomaly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticAnomaly.OuterSingleton, Z_Construct_UClass_AStaticAnomaly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStaticAnomaly.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<AStaticAnomaly>()
	{
		return AStaticAnomaly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticAnomaly);
	AStaticAnomaly::~AStaticAnomaly() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ScriptStructInfo[] = {
		{ FDoorOriginalState::StaticStruct, Z_Construct_UScriptStruct_FDoorOriginalState_Statics::NewStructOps, TEXT("DoorOriginalState"), &Z_Registration_Info_UScriptStruct_DoorOriginalState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorOriginalState), 2423314569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStaticAnomaly, AStaticAnomaly::StaticClass, TEXT("AStaticAnomaly"), &Z_Registration_Info_UClass_AStaticAnomaly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticAnomaly), 3495438807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_4093416481(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaticAnomaly_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
