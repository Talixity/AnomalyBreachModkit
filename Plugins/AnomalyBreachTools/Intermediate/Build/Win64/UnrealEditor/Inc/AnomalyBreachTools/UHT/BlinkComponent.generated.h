// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlinkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANOMALYBREACHTOOLS_BlinkComponent_generated_h
#error "BlinkComponent.generated.h already included, missing '#pragma once' in BlinkComponent.h"
#endif
#define ANOMALYBREACHTOOLS_BlinkComponent_generated_h

#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_7_DELEGATE \
static inline void FOnBlinkSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBlinkSignature) \
{ \
	OnBlinkSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_SPARSE_DATA
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceBlink); \
	DECLARE_FUNCTION(execManualBlink);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceBlink); \
	DECLARE_FUNCTION(execManualBlink);


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_ACCESSORS
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlinkComponent(); \
	friend struct Z_Construct_UClass_UBlinkComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(UBlinkComponent)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlinkComponent(); \
	friend struct Z_Construct_UClass_UBlinkComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnomalyBreachTools"), NO_API) \
	DECLARE_SERIALIZER(UBlinkComponent)


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlinkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkComponent(UBlinkComponent&&); \
	NO_API UBlinkComponent(const UBlinkComponent&); \
public: \
	NO_API virtual ~UBlinkComponent();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkComponent(UBlinkComponent&&); \
	NO_API UBlinkComponent(const UBlinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlinkComponent) \
	NO_API virtual ~UBlinkComponent();


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_9_PROLOG
#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_RPC_WRAPPERS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_INCLASS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_ACCESSORS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<class UBlinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
