// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnomalyInterfaces.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ANOMALYBREACHTOOLS_AnomalyInterfaces_generated_h
#error "AnomalyInterfaces.generated.h already included, missing '#pragma once' in AnomalyInterfaces.h"
#endif
#define ANOMALYBREACHTOOLS_AnomalyInterfaces_generated_h

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_RPC_WRAPPERS \
	virtual void CloseDoor_Implementation() {}; \
	virtual void OpenDoor_Implementation() {}; \
	virtual void SetPowerSource_Implementation(UObject* Source) {}; \
	virtual void SetRequiresPower_Implementation(bool bRequires) {}; \
	virtual UObject* GetPowerSource_Implementation() const { return NULL; }; \
	virtual bool GetRequiresPower_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor); \
	DECLARE_FUNCTION(execSetPowerSource); \
	DECLARE_FUNCTION(execSetRequiresPower); \
	DECLARE_FUNCTION(execGetPowerSource); \
	DECLARE_FUNCTION(execGetRequiresPower);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CloseDoor_Implementation() {}; \
	virtual void OpenDoor_Implementation() {}; \
	virtual void SetPowerSource_Implementation(UObject* Source) {}; \
	virtual void SetRequiresPower_Implementation(bool bRequires) {}; \
	virtual UObject* GetPowerSource_Implementation() const { return NULL; }; \
	virtual bool GetRequiresPower_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor); \
	DECLARE_FUNCTION(execSetPowerSource); \
	DECLARE_FUNCTION(execSetRequiresPower); \
	DECLARE_FUNCTION(execGetPowerSource); \
	DECLARE_FUNCTION(execGetRequiresPower);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_ACCESSORS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnomalyDoorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANOMALYBREACHTOOLS_API, UAnomalyDoorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnomalyDoorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(UAnomalyDoorInterface&&); \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(const UAnomalyDoorInterface&); \
public: \
	ANOMALYBREACHTOOLS_API virtual ~UAnomalyDoorInterface();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(UAnomalyDoorInterface&&); \
	ANOMALYBREACHTOOLS_API UAnomalyDoorInterface(const UAnomalyDoorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANOMALYBREACHTOOLS_API, UAnomalyDoorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnomalyDoorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnomalyDoorInterface) \
	ANOMALYBREACHTOOLS_API virtual ~UAnomalyDoorInterface();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnomalyDoorInterface(); \
	friend struct Z_Construct_UClass_UAnomalyDoorInterface_Statics; \
public: \
	DECLARE_CLASS(UAnomalyDoorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), ANOMALYBREACHTOOLS_API) \
	DECLARE_SERIALIZER(UAnomalyDoorInterface)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnomalyDoorInterface() {} \
public: \
	typedef UAnomalyDoorInterface UClassType; \
	typedef IAnomalyDoorInterface ThisClass; \
	static void Execute_CloseDoor(UObject* O); \
	static UObject* Execute_GetPowerSource(const UObject* O); \
	static bool Execute_GetRequiresPower(const UObject* O); \
	static void Execute_OpenDoor(UObject* O); \
	static void Execute_SetPowerSource(UObject* O, UObject* Source); \
	static void Execute_SetRequiresPower(UObject* O, bool bRequires); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnomalyDoorInterface() {} \
public: \
	typedef UAnomalyDoorInterface UClassType; \
	typedef IAnomalyDoorInterface ThisClass; \
	static void Execute_CloseDoor(UObject* O); \
	static UObject* Execute_GetPowerSource(const UObject* O); \
	static bool Execute_GetRequiresPower(const UObject* O); \
	static void Execute_OpenDoor(UObject* O); \
	static void Execute_SetPowerSource(UObject* O, UObject* Source); \
	static void Execute_SetRequiresPower(UObject* O, bool bRequires); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_14_PROLOG
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<class UAnomalyDoorInterface>();

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_SPARSE_DATA
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_RPC_WRAPPERS \
	virtual void SetGasMaskState_Implementation(bool bIsActive) {}; \
	virtual void SetNightVisionState_Implementation(bool bIsActive) {}; \
	virtual void RestorePlayerStamina_Implementation(float Amount) {}; \
	virtual void HealAnomalyDamage_Implementation(float Amount) {}; \
	virtual void ApplyScreenDistortion_Implementation(float Intensity, float Duration) {}; \
	virtual void ForcePlayerBlink_Implementation() {}; \
	virtual void DrainPlayerStamina_Implementation(float Amount) {}; \
	virtual void TakeInstaKill_Implementation(FName DeathReason) {}; \
	virtual void TakeAnomalyDamage_Implementation(float Amount, FName DamageType) {}; \
 \
	DECLARE_FUNCTION(execSetGasMaskState); \
	DECLARE_FUNCTION(execSetNightVisionState); \
	DECLARE_FUNCTION(execRestorePlayerStamina); \
	DECLARE_FUNCTION(execHealAnomalyDamage); \
	DECLARE_FUNCTION(execApplyScreenDistortion); \
	DECLARE_FUNCTION(execForcePlayerBlink); \
	DECLARE_FUNCTION(execDrainPlayerStamina); \
	DECLARE_FUNCTION(execTakeInstaKill); \
	DECLARE_FUNCTION(execTakeAnomalyDamage);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetGasMaskState_Implementation(bool bIsActive) {}; \
	virtual void SetNightVisionState_Implementation(bool bIsActive) {}; \
	virtual void RestorePlayerStamina_Implementation(float Amount) {}; \
	virtual void HealAnomalyDamage_Implementation(float Amount) {}; \
	virtual void ApplyScreenDistortion_Implementation(float Intensity, float Duration) {}; \
	virtual void ForcePlayerBlink_Implementation() {}; \
	virtual void DrainPlayerStamina_Implementation(float Amount) {}; \
	virtual void TakeInstaKill_Implementation(FName DeathReason) {}; \
	virtual void TakeAnomalyDamage_Implementation(float Amount, FName DamageType) {}; \
 \
	DECLARE_FUNCTION(execSetGasMaskState); \
	DECLARE_FUNCTION(execSetNightVisionState); \
	DECLARE_FUNCTION(execRestorePlayerStamina); \
	DECLARE_FUNCTION(execHealAnomalyDamage); \
	DECLARE_FUNCTION(execApplyScreenDistortion); \
	DECLARE_FUNCTION(execForcePlayerBlink); \
	DECLARE_FUNCTION(execDrainPlayerStamina); \
	DECLARE_FUNCTION(execTakeInstaKill); \
	DECLARE_FUNCTION(execTakeAnomalyDamage);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_ACCESSORS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnomalyPlayerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANOMALYBREACHTOOLS_API, UAnomalyPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnomalyPlayerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(UAnomalyPlayerInterface&&); \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(const UAnomalyPlayerInterface&); \
public: \
	ANOMALYBREACHTOOLS_API virtual ~UAnomalyPlayerInterface();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(UAnomalyPlayerInterface&&); \
	ANOMALYBREACHTOOLS_API UAnomalyPlayerInterface(const UAnomalyPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANOMALYBREACHTOOLS_API, UAnomalyPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnomalyPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnomalyPlayerInterface) \
	ANOMALYBREACHTOOLS_API virtual ~UAnomalyPlayerInterface();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnomalyPlayerInterface(); \
	friend struct Z_Construct_UClass_UAnomalyPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UAnomalyPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), ANOMALYBREACHTOOLS_API) \
	DECLARE_SERIALIZER(UAnomalyPlayerInterface)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnomalyPlayerInterface() {} \
public: \
	typedef UAnomalyPlayerInterface UClassType; \
	typedef IAnomalyPlayerInterface ThisClass; \
	static void Execute_ApplyScreenDistortion(UObject* O, float Intensity, float Duration); \
	static void Execute_DrainPlayerStamina(UObject* O, float Amount); \
	static void Execute_ForcePlayerBlink(UObject* O); \
	static void Execute_HealAnomalyDamage(UObject* O, float Amount); \
	static void Execute_RestorePlayerStamina(UObject* O, float Amount); \
	static void Execute_SetGasMaskState(UObject* O, bool bIsActive); \
	static void Execute_SetNightVisionState(UObject* O, bool bIsActive); \
	static void Execute_TakeAnomalyDamage(UObject* O, float Amount, FName DamageType); \
	static void Execute_TakeInstaKill(UObject* O, FName DeathReason); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnomalyPlayerInterface() {} \
public: \
	typedef UAnomalyPlayerInterface UClassType; \
	typedef IAnomalyPlayerInterface ThisClass; \
	static void Execute_ApplyScreenDistortion(UObject* O, float Intensity, float Duration); \
	static void Execute_DrainPlayerStamina(UObject* O, float Amount); \
	static void Execute_ForcePlayerBlink(UObject* O); \
	static void Execute_HealAnomalyDamage(UObject* O, float Amount); \
	static void Execute_RestorePlayerStamina(UObject* O, float Amount); \
	static void Execute_SetGasMaskState(UObject* O, bool bIsActive); \
	static void Execute_SetNightVisionState(UObject* O, bool bIsActive); \
	static void Execute_TakeAnomalyDamage(UObject* O, float Amount, FName DamageType); \
	static void Execute_TakeInstaKill(UObject* O, FName DeathReason); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_47_PROLOG
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_RPC_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_50_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<class UAnomalyPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
