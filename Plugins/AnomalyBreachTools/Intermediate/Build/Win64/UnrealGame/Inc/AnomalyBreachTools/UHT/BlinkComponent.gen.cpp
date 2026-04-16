// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/BlinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkComponent() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UBlinkComponent();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UBlinkComponent_NoRegister();
	ANOMALYBREACHTOOLS_API UFunction* Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools, nullptr, "OnBlinkSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBlinkComponent::execForceBlink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceBlink();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlinkComponent::execManualBlink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManualBlink();
		P_NATIVE_END;
	}
	void UBlinkComponent::StaticRegisterNativesUBlinkComponent()
	{
		UClass* Class = UBlinkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceBlink", &UBlinkComponent::execForceBlink },
			{ "ManualBlink", &UBlinkComponent::execManualBlink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blink Actions" },
		{ "Comment", "// Player presses the blink button\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "Player presses the blink button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkComponent, nullptr, "ForceBlink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkComponent_ForceBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlinkComponent_ForceBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blink Actions" },
		{ "Comment", "// ==========================================\n// FUNCTIONS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "FUNCTIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkComponent, nullptr, "ManualBlink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkComponent_ManualBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlinkComponent_ManualBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlinkComponent);
	UClass* Z_Construct_UClass_UBlinkComponent_NoRegister()
	{
		return UBlinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlinkMeter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBlinkMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkDrainRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlinkDrainRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlinkDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlinkDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBlinkMeter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBlinkMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlinking_MetaData[];
#endif
		static void NewProp_bIsBlinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlinking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlinkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlinkComponent_ForceBlink, "ForceBlink" }, // 3677855901
		{ &Z_Construct_UFunction_UBlinkComponent_ManualBlink, "ManualBlink" }, // 211058024
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BlinkComponent.h" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_MaxBlinkMeter_MetaData[] = {
		{ "Category", "Blink Settings" },
		{ "Comment", "// ==========================================\n// PROPERTIES\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "PROPERTIES" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_MaxBlinkMeter = { "MaxBlinkMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, MaxBlinkMeter), METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_MaxBlinkMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_MaxBlinkMeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDrainRate_MetaData[] = {
		{ "Category", "Blink Settings" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDrainRate = { "BlinkDrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, BlinkDrainRate), METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDrainRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDrainRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDuration_MetaData[] = {
		{ "Category", "Blink Settings" },
		{ "Comment", "// How fast the meter goes down naturally\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "How fast the meter goes down naturally" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDuration = { "BlinkDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, BlinkDuration), METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_CurrentBlinkMeter_MetaData[] = {
		{ "Category", "Blink Data" },
		{ "Comment", "// How long the screen stays black in seconds\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "How long the screen stays black in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_CurrentBlinkMeter = { "CurrentBlinkMeter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, CurrentBlinkMeter), METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_CurrentBlinkMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_CurrentBlinkMeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking_MetaData[] = {
		{ "Category", "Blink Data" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking_SetBit(void* Obj)
	{
		((UBlinkComponent*)Obj)->bIsBlinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking = { "bIsBlinking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlinkComponent), &Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStart_MetaData[] = {
		{ "Category", "Blink Events" },
		{ "Comment", "// ==========================================\n// EVENTS FOR MODDERS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
		{ "ToolTip", "EVENTS FOR MODDERS" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStart = { "OnBlinkStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, OnBlinkStart), Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStart_MetaData)) }; // 1249421960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkEnd_MetaData[] = {
		{ "Category", "Blink Events" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkEnd = { "OnBlinkEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlinkComponent, OnBlinkEnd), Z_Construct_UDelegateFunction_AnomalyBreachTools_OnBlinkSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkEnd_MetaData)) }; // 1249421960
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_MaxBlinkMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDrainRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_BlinkDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_CurrentBlinkMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_bIsBlinking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlinkComponent_Statics::ClassParams = {
		&UBlinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlinkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlinkComponent()
	{
		if (!Z_Registration_Info_UClass_UBlinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlinkComponent.OuterSingleton, Z_Construct_UClass_UBlinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlinkComponent.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<UBlinkComponent>()
	{
		return UBlinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlinkComponent);
	UBlinkComponent::~UBlinkComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlinkComponent, UBlinkComponent::StaticClass, TEXT("UBlinkComponent"), &Z_Registration_Info_UClass_UBlinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlinkComponent), 1179726728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_605216950(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_BlinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
