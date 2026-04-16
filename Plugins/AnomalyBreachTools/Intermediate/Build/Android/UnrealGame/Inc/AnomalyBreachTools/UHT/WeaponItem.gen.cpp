// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/WeaponItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponItem() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_ABaseItem();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AWeaponItem();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AWeaponItem_NoRegister();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EFireMode();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponClass;
	static UEnum* EWeaponClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("EWeaponClass"));
		}
		return Z_Registration_Info_UEnum_EWeaponClass.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EWeaponClass>()
	{
		return EWeaponClass_StaticEnum();
	}
	struct Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enumerators[] = {
		{ "EWeaponClass::Ranged", (int64)EWeaponClass::Ranged },
		{ "EWeaponClass::Melee", (int64)EWeaponClass::Melee },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "EWeaponClass::Melee" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "Ranged.DisplayName", "Ranged (Gun)" },
		{ "Ranged.Name", "EWeaponClass::Ranged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		"EWeaponClass",
		"EWeaponClass",
		Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass()
	{
		if (!Z_Registration_Info_UEnum_EWeaponClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponClass.InnerSingleton, Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFireMode;
	static UEnum* EFireMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFireMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFireMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnomalyBreachTools_EFireMode, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("EFireMode"));
		}
		return Z_Registration_Info_UEnum_EFireMode.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EFireMode>()
	{
		return EFireMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enumerators[] = {
		{ "EFireMode::SemiAuto", (int64)EFireMode::SemiAuto },
		{ "EFireMode::FullAuto", (int64)EFireMode::FullAuto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullAuto.DisplayName", "Full-Auto" },
		{ "FullAuto.Name", "EFireMode::FullAuto" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "SemiAuto.DisplayName", "Semi-Auto" },
		{ "SemiAuto.Name", "EFireMode::SemiAuto" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		"EFireMode",
		"EFireMode",
		Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnomalyBreachTools_EFireMode()
	{
		if (!Z_Registration_Info_UEnum_EFireMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFireMode.InnerSingleton, Z_Construct_UEnum_AnomalyBreachTools_EFireMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFireMode.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeaponItem::execReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponItem::execStopAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponItem::execStartAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction();
		P_NATIVE_END;
	}
	static FName NAME_AWeaponItem_OnFiredWeapon = FName(TEXT("OnFiredWeapon"));
	void AWeaponItem::OnFiredWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponItem_OnFiredWeapon),NULL);
	}
	static FName NAME_AWeaponItem_OnReloadFinished = FName(TEXT("OnReloadFinished"));
	void AWeaponItem::OnReloadFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponItem_OnReloadFinished),NULL);
	}
	void AWeaponItem::StaticRegisterNativesAWeaponItem()
	{
		UClass* Class = AWeaponItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReloadWeapon", &AWeaponItem::execReloadWeapon },
			{ "StartAction", &AWeaponItem::execStartAction },
			{ "StopAction", &AWeaponItem::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Events" },
		{ "Comment", "// ==========================================\n// EVENTS FOR MODDERS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "EVENTS FOR MODDERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponItem, nullptr, "OnFiredWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponItem_OnFiredWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponItem_OnFiredWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Events" },
		{ "Comment", "// Still fires so modders can add extra Blueprint logic (like recoil)\n" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "Still fires so modders can add extra Blueprint logic (like recoil)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponItem, nullptr, "OnReloadFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponItem_OnReloadFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponItem_OnReloadFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Actions" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponItem, nullptr, "ReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponItem_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponItem_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponItem_StartAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponItem_StartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Actions" },
		{ "Comment", "// ==========================================\n// ACTIONS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "ACTIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponItem_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponItem, nullptr, "StartAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponItem_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponItem_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponItem_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponItem_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponItem_StopAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponItem_StopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Actions" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponItem_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponItem, nullptr, "StopAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponItem_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponItem_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponItem_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponItem_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponItem);
	UClass* Z_Construct_UClass_AWeaponItem_NoRegister()
	{
		return AWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadshotMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadshotMultiplier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeadBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FireMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FireMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagazineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMagazineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRateRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DryFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponItem_OnFiredWeapon, "OnFiredWeapon" }, // 2473742339
		{ &Z_Construct_UFunction_AWeaponItem_OnReloadFinished, "OnReloadFinished" }, // 675832744
		{ &Z_Construct_UFunction_AWeaponItem_ReloadWeapon, "ReloadWeapon" }, // 3595061783
		{ &Z_Construct_UFunction_AWeaponItem_StartAction, "StartAction" }, // 19649035
		{ &Z_Construct_UFunction_AWeaponItem_StopAction, "StopAction" }, // 1923364581
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponItem.h" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "Weapon Components" },
		{ "Comment", "// The exact point bullets/traces fire from\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "The exact point bullets/traces fire from" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, MuzzleLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon Configuration" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, WeaponType), Z_Construct_UEnum_AnomalyBreachTools_EWeaponClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType_MetaData)) }; // 2198994901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Weapon Configuration|Combat" },
		{ "Comment", "// ==========================================\n// COMBAT STATS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "COMBAT STATS" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadshotMultiplier_MetaData[] = {
		{ "Category", "Weapon Configuration|Combat" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadshotMultiplier = { "HeadshotMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, HeadshotMultiplier), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadshotMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadshotMultiplier_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames_Inner = { "HeadBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames_MetaData[] = {
		{ "Category", "Weapon Configuration|Combat" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "If hitting a bone with these names, applies Headshot Multiplier" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames = { "HeadBoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, HeadBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Weapon Configuration|Combat" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "Maximum distance the bullet can travel (in cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, WeaponRange), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponRange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode_MetaData[] = {
		{ "Category", "Weapon Configuration|Ranged" },
		{ "Comment", "// ==========================================\n// RANGED SETTINGS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "RANGED SETTINGS" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, FireMode), Z_Construct_UEnum_AnomalyBreachTools_EFireMode, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode_MetaData)) }; // 1566877915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_MaxMagazineSize_MetaData[] = {
		{ "Category", "Weapon Configuration|Ranged" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_MaxMagazineSize = { "MaxMagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, MaxMagazineSize), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MaxMagazineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MaxMagazineSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireRateRPM_MetaData[] = {
		{ "Category", "Weapon Configuration|Ranged" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "Rounds per minute (RPM)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireRateRPM = { "FireRateRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, FireRateRPM), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireRateRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireRateRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadDuration_MetaData[] = {
		{ "Category", "Weapon Configuration|Ranged" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadDuration = { "ReloadDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, ReloadDuration), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AWeaponItem*)Obj)->bIsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWeaponItem), &Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
		{ "ToolTip", "If set, weapon spawns this actor (e.g. Rocket). If empty, uses Hitscan/LineTrace for instant bullets." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_DryFireSound_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_DryFireSound = { "DryFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, DryFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_DryFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_DryFireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleFlashEffect_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleFlashEffect = { "MuzzleFlashEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, MuzzleFlashEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleFlashEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleFlashEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Weapon Configuration|FX" },
		{ "ModuleRelativePath", "Public/WeaponItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponItem_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponItem, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::NewProp_ImpactEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadshotMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_HeadBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_WeaponRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_MaxMagazineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireRateRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_bIsReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_DryFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_ReloadSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_MuzzleFlashEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponItem_Statics::NewProp_ImpactEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponItem_Statics::ClassParams = {
		&AWeaponItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponItem()
	{
		if (!Z_Registration_Info_UClass_AWeaponItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponItem.OuterSingleton, Z_Construct_UClass_AWeaponItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponItem.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<AWeaponItem>()
	{
		return AWeaponItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponItem);
	AWeaponItem::~AWeaponItem() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::EnumInfo[] = {
		{ EWeaponClass_StaticEnum, TEXT("EWeaponClass"), &Z_Registration_Info_UEnum_EWeaponClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2198994901U) },
		{ EFireMode_StaticEnum, TEXT("EFireMode"), &Z_Registration_Info_UEnum_EFireMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1566877915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponItem, AWeaponItem::StaticClass, TEXT("AWeaponItem"), &Z_Registration_Info_UClass_AWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponItem), 3718696504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_1948212325(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_WeaponItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
