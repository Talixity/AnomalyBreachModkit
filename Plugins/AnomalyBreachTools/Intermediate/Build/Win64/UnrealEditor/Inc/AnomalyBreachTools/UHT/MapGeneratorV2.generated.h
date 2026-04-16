// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapGeneratorV2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EMapGenRoomShape : uint8;
enum class EMapGenZone : uint8;
#ifdef ANOMALYBREACHTOOLS_MapGeneratorV2_generated_h
#error "MapGeneratorV2.generated.h already included, missing '#pragma once' in MapGeneratorV2.h"
#endif
#define ANOMALYBREACHTOOLS_MapGeneratorV2_generated_h

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_12_DELEGATE \
struct _Script_AnomalyBreachTools_eventOnMapGeneratedSignature_Parms \
{ \
	int32 MapSeed; \
}; \
static inline void FOnMapGeneratedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMapGeneratedSignature, int32 MapSeed) \
{ \
	_Script_AnomalyBreachTools_eventOnMapGeneratedSignature_Parms Parms; \
	Parms.MapSeed=MapSeed; \
	OnMapGeneratedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FMapGenRoomVariant>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FMapGenRoomVariantList>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FMapGenZoneRoomData>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FMapGenPOIRequest>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapGenCell_Statics; \
	ANOMALYBREACHTOOLS_API static class UScriptStruct* StaticStruct();


template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<struct FMapGenCell>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_SPARSE_DATA
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MapSeed); \
	DECLARE_FUNCTION(execForceAddCustomRoom); \
	DECLARE_FUNCTION(execGetWorldLocationFromGrid); \
	DECLARE_FUNCTION(execIsGridOccupied); \
	DECLARE_FUNCTION(execGetRoomsInZone); \
	DECLARE_FUNCTION(execGetRoomAtGridLocation); \
	DECLARE_FUNCTION(execGetRoomByTag); \
	DECLARE_FUNCTION(execGetSpawnRoom); \
	DECLARE_FUNCTION(execClearMap); \
	DECLARE_FUNCTION(execRegenerateMap); \
	DECLARE_FUNCTION(execGenerateMap);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MapSeed); \
	DECLARE_FUNCTION(execForceAddCustomRoom); \
	DECLARE_FUNCTION(execGetWorldLocationFromGrid); \
	DECLARE_FUNCTION(execIsGridOccupied); \
	DECLARE_FUNCTION(execGetRoomsInZone); \
	DECLARE_FUNCTION(execGetRoomAtGridLocation); \
	DECLARE_FUNCTION(execGetRoomByTag); \
	DECLARE_FUNCTION(execGetSpawnRoom); \
	DECLARE_FUNCTION(execClearMap); \
	DECLARE_FUNCTION(execRegenerateMap); \
	DECLARE_FUNCTION(execGenerateMap);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_ACCESSORS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGeneratorV2(); \
	friend struct Z_Construct_UClass_AMapGeneratorV2_Statics; \
public: \
	DECLARE_CLASS(AMapGeneratorV2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(AMapGeneratorV2) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MapSeed=NETFIELD_REP_START, \
		NETFIELD_REP_END=MapSeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_INCLASS \
private: \
	static void StaticRegisterNativesAMapGeneratorV2(); \
	friend struct Z_Construct_UClass_AMapGeneratorV2_Statics; \
public: \
	DECLARE_CLASS(AMapGeneratorV2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(AMapGeneratorV2) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MapSeed=NETFIELD_REP_START, \
		NETFIELD_REP_END=MapSeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapGeneratorV2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapGeneratorV2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGeneratorV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGeneratorV2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGeneratorV2(AMapGeneratorV2&&); \
	NO_API AMapGeneratorV2(const AMapGeneratorV2&); \
public: \
	NO_API virtual ~AMapGeneratorV2();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGeneratorV2(AMapGeneratorV2&&); \
	NO_API AMapGeneratorV2(const AMapGeneratorV2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGeneratorV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGeneratorV2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGeneratorV2) \
	NO_API virtual ~AMapGeneratorV2();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_114_PROLOG
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_RPC_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_INCLASS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<class AMapGeneratorV2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h


#define FOREACH_ENUM_EMAPGENZONE(op) \
	op(EMapGenZone::None) \
	op(EMapGenZone::LCZ) \
	op(EMapGenZone::HCZ) \
	op(EMapGenZone::EZ) \
	op(EMapGenZone::Checkpoint_LCZ_HCZ) \
	op(EMapGenZone::Checkpoint_HCZ_EZ) 

enum class EMapGenZone : uint8;
template<> struct TIsUEnumClass<EMapGenZone> { enum { Value = true }; };
template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EMapGenZone>();

#define FOREACH_ENUM_EMAPGENROOMSHAPE(op) \
	op(EMapGenRoomShape::None) \
	op(EMapGenRoomShape::SpawnRoom) \
	op(EMapGenRoomShape::DeadEnd) \
	op(EMapGenRoomShape::Straight) \
	op(EMapGenRoomShape::Corner) \
	op(EMapGenRoomShape::TShape) \
	op(EMapGenRoomShape::Crossroad) 

enum class EMapGenRoomShape : uint8;
template<> struct TIsUEnumClass<EMapGenRoomShape> { enum { Value = true }; };
template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EMapGenRoomShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
