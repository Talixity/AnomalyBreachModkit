// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/StaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UStaminaComponent();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	DEFINE_FUNCTION(UStaminaComponent::execDrainStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrainStamina(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaComponent::execStopSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaComponent::execStartSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprinting();
		P_NATIVE_END;
	}
	void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
	{
		UClass* Class = UStaminaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrainStamina", &UStaminaComponent::execDrainStamina },
			{ "StartSprinting", &UStaminaComponent::execStartSprinting },
			{ "StopSprinting", &UStaminaComponent::execStopSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics
	{
		struct StaminaComponent_eventDrainStamina_Parms
		{
			float Amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaComponent_eventDrainStamina_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina Actions" },
		{ "Comment", "// Call when VR thumbstick is released\n" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
		{ "ToolTip", "Call when VR thumbstick is released" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaComponent, nullptr, "DrainStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::StaminaComponent_eventDrainStamina_Parms), Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaComponent_DrainStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaComponent_DrainStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina Actions" },
		{ "Comment", "// ==========================================\n// FUNCTIONS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
		{ "ToolTip", "FUNCTIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaComponent, nullptr, "StartSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaComponent_StartSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaComponent_StartSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina Actions" },
		{ "Comment", "// Call when the VR thumbstick is clicked/pushed\n" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
		{ "ToolTip", "Call when the VR thumbstick is clicked/pushed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaComponent, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaComponent_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaComponent_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaComponent);
	UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
	{
		return UStaminaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaminaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExhausted_MetaData[];
#endif
		static void NewProp_bIsExhausted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExhausted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaminaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaminaComponent_DrainStamina, "DrainStamina" }, // 30002057
		{ &Z_Construct_UFunction_UStaminaComponent_StartSprinting, "StartSprinting" }, // 2269483488
		{ &Z_Construct_UFunction_UStaminaComponent_StopSprinting, "StopSprinting" }, // 3611830545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StaminaComponent.h" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina Settings" },
		{ "Comment", "// ==========================================\n// PROPERTIES\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
		{ "ToolTip", "PROPERTIES" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Stamina Settings" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, StaminaDrainRate), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaDrainRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaDrainRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina Settings" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, StaminaRegenRate), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRegenRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Stamina Settings" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Stamina Settings" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina Data" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, CurrentStamina), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Stamina Data" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UStaminaComponent*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaminaComponent), &Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted_MetaData[] = {
		{ "Category", "Stamina Data" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted_SetBit(void* Obj)
	{
		((UStaminaComponent*)Obj)->bIsExhausted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted = { "bIsExhausted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaminaComponent), &Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaminaComponent, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaDrainRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_bIsExhausted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaminaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
		&UStaminaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaminaComponent()
	{
		if (!Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<UStaminaComponent>()
	{
		return UStaminaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
	UStaminaComponent::~UStaminaComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaminaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaminaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaComponent, UStaminaComponent::StaticClass, TEXT("UStaminaComponent"), &Z_Registration_Info_UClass_UStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaComponent), 2612916121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaminaComponent_h_1686145326(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_StaminaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
