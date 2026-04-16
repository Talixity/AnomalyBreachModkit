// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimateAnomaly.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMapGeneratorV2;
enum class EMapGenZone : uint8;
#ifdef ANOMALYBREACHTOOLS_AnimateAnomaly_generated_h
#error "AnimateAnomaly.generated.h already included, missing '#pragma once' in AnimateAnomaly.h"
#endif
#define ANOMALYBREACHTOOLS_AnimateAnomaly_generated_h

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimDoorOriginalState_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FAnimDoorOriginalState>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_SPARSE_DATA
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTeleportToRandomRoomInZone); \
	DECLARE_FUNCTION(execTeleportBehindPlayer); \
	DECLARE_FUNCTION(execForcePlayerBlink); \
	DECLARE_FUNCTION(execDrainPlayerStamina); \
	DECLARE_FUNCTION(execInstaKillPlayer); \
	DECLARE_FUNCTION(execDealDamageToPlayer); \
	DECLARE_FUNCTION(execForceCloseNearbyDoors); \
	DECLARE_FUNCTION(execForceOpenNearbyDoors); \
	DECLARE_FUNCTION(execLockNearbyDoors);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTeleportToRandomRoomInZone); \
	DECLARE_FUNCTION(execTeleportBehindPlayer); \
	DECLARE_FUNCTION(execForcePlayerBlink); \
	DECLARE_FUNCTION(execDrainPlayerStamina); \
	DECLARE_FUNCTION(execInstaKillPlayer); \
	DECLARE_FUNCTION(execDealDamageToPlayer); \
	DECLARE_FUNCTION(execForceCloseNearbyDoors); \
	DECLARE_FUNCTION(execForceOpenNearbyDoors); \
	DECLARE_FUNCTION(execLockNearbyDoors);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_ACCESSORS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimateAnomaly(); \
	friend struct Z_Construct_UClass_AAnimateAnomaly_Statics; \
public: \
	DECLARE_CLASS(AAnimateAnomaly, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(AAnimateAnomaly)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAAnimateAnomaly(); \
	friend struct Z_Construct_UClass_AAnimateAnomaly_Statics; \
public: \
	DECLARE_CLASS(AAnimateAnomaly, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(AAnimateAnomaly)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimateAnomaly(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimateAnomaly) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimateAnomaly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimateAnomaly); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimateAnomaly(AAnimateAnomaly&&); \
	NO_API AAnimateAnomaly(const AAnimateAnomaly&); \
public: \
	NO_API virtual ~AAnimateAnomaly();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimateAnomaly(AAnimateAnomaly&&); \
	NO_API AAnimateAnomaly(const AAnimateAnomaly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimateAnomaly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimateAnomaly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimateAnomaly) \
	NO_API virtual ~AAnimateAnomaly();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_19_PROLOG
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_RPC_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_INCLASS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<class AAnimateAnomaly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnimateAnomaly_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
