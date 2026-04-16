// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/ConsumableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsumableItem() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_ABaseItem();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AConsumableItem();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AConsumableItem_NoRegister();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EConsumableType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsumableType;
	static UEnum* EConsumableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConsumableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConsumableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnomalyBreachTools_EConsumableType, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("EConsumableType"));
		}
		return Z_Registration_Info_UEnum_EConsumableType.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EConsumableType>()
	{
		return EConsumableType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enumerators[] = {
		{ "EConsumableType::Health", (int64)EConsumableType::Health },
		{ "EConsumableType::Stamina", (int64)EConsumableType::Stamina },
		{ "EConsumableType::NightVision", (int64)EConsumableType::NightVision },
		{ "EConsumableType::GasMask", (int64)EConsumableType::GasMask },
		{ "EConsumableType::Static", (int64)EConsumableType::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GasMask.DisplayName", "Wearable: Gas Mask" },
		{ "GasMask.Name", "EConsumableType::GasMask" },
		{ "Health.DisplayName", "Health (Medkit/Pills)" },
		{ "Health.Name", "EConsumableType::Health" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
		{ "NightVision.DisplayName", "Wearable: Night Vision Goggles" },
		{ "NightVision.Name", "EConsumableType::NightVision" },
		{ "Stamina.DisplayName", "Stamina (Energy/Adrenaline)" },
		{ "Stamina.Name", "EConsumableType::Stamina" },
		{ "Static.DisplayName", "Static/Prop (Does Nothing)" },
		{ "Static.Name", "EConsumableType::Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		"EConsumableType",
		"EConsumableType",
		Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnomalyBreachTools_EConsumableType()
	{
		if (!Z_Registration_Info_UEnum_EConsumableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsumableType.InnerSingleton, Z_Construct_UEnum_AnomalyBreachTools_EConsumableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConsumableType.InnerSingleton;
	}
	DEFINE_FUNCTION(AConsumableItem::execUnequipWearable)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnequipWearable(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConsumableItem::execEquipWearable)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_HeadSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWearable(Z_Param_Player,Z_Param_HeadSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConsumableItem::execUseConsumable)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseConsumable(Z_Param_Player);
		P_NATIVE_END;
	}
	struct ConsumableItem_eventOnEquipped_Parms
	{
		AActor* Player;
	};
	struct ConsumableItem_eventOnItemConsumed_Parms
	{
		AActor* Player;
	};
	struct ConsumableItem_eventOnUnequipped_Parms
	{
		AActor* Player;
	};
	static FName NAME_AConsumableItem_OnEquipped = FName(TEXT("OnEquipped"));
	void AConsumableItem::OnEquipped(AActor* Player)
	{
		ConsumableItem_eventOnEquipped_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AConsumableItem_OnEquipped),&Parms);
	}
	static FName NAME_AConsumableItem_OnItemConsumed = FName(TEXT("OnItemConsumed"));
	void AConsumableItem::OnItemConsumed(AActor* Player)
	{
		ConsumableItem_eventOnItemConsumed_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AConsumableItem_OnItemConsumed),&Parms);
	}
	static FName NAME_AConsumableItem_OnUnequipped = FName(TEXT("OnUnequipped"));
	void AConsumableItem::OnUnequipped(AActor* Player)
	{
		ConsumableItem_eventOnUnequipped_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AConsumableItem_OnUnequipped),&Parms);
	}
	void AConsumableItem::StaticRegisterNativesAConsumableItem()
	{
		UClass* Class = AConsumableItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipWearable", &AConsumableItem::execEquipWearable },
			{ "UnequipWearable", &AConsumableItem::execUnequipWearable },
			{ "UseConsumable", &AConsumableItem::execUseConsumable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics
	{
		struct ConsumableItem_eventEquipWearable_Parms
		{
			AActor* Player;
			FName HeadSocketName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventEquipWearable_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventEquipWearable_Parms, HeadSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::NewProp_HeadSocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Actions" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "EquipWearable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::ConsumableItem_eventEquipWearable_Parms), Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_EquipWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_EquipWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventOnEquipped_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Events" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "OnEquipped", nullptr, nullptr, sizeof(ConsumableItem_eventOnEquipped_Parms), Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventOnItemConsumed_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Events" },
		{ "Comment", "// ==========================================\n// EVENTS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
		{ "ToolTip", "EVENTS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "OnItemConsumed", nullptr, nullptr, sizeof(ConsumableItem_eventOnItemConsumed_Parms), Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_OnItemConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_OnItemConsumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventOnUnequipped_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Events" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "OnUnequipped", nullptr, nullptr, sizeof(ConsumableItem_eventOnUnequipped_Parms), Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_OnUnequipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_OnUnequipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics
	{
		struct ConsumableItem_eventUnequipWearable_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventUnequipWearable_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Actions" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "UnequipWearable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::ConsumableItem_eventUnequipWearable_Parms), Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_UnequipWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_UnequipWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics
	{
		struct ConsumableItem_eventUseConsumable_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConsumableItem_eventUseConsumable_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumable Actions" },
		{ "Comment", "// ==========================================\n// ACTIONS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
		{ "ToolTip", "ACTIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConsumableItem, nullptr, "UseConsumable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::ConsumableItem_eventUseConsumable_Parms), Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConsumableItem_UseConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConsumableItem_UseConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConsumableItem);
	UClass* Z_Construct_UClass_AConsumableItem_NoRegister()
	{
		return AConsumableItem::StaticClass();
	}
	struct Z_Construct_UClass_AConsumableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConsumableType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConsumableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[];
#endif
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsumableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConsumableItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConsumableItem_EquipWearable, "EquipWearable" }, // 4003223112
		{ &Z_Construct_UFunction_AConsumableItem_OnEquipped, "OnEquipped" }, // 2509540384
		{ &Z_Construct_UFunction_AConsumableItem_OnItemConsumed, "OnItemConsumed" }, // 2424047616
		{ &Z_Construct_UFunction_AConsumableItem_OnUnequipped, "OnUnequipped" }, // 814962059
		{ &Z_Construct_UFunction_AConsumableItem_UnequipWearable, "UnequipWearable" }, // 2568885081
		{ &Z_Construct_UFunction_AConsumableItem_UseConsumable, "UseConsumable" }, // 1889235765
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsumableItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConsumableItem.h" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType_MetaData[] = {
		{ "Category", "Consumable Configuration" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType = { "ConsumableType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConsumableItem, ConsumableType), Z_Construct_UEnum_AnomalyBreachTools_EConsumableType, METADATA_PARAMS(Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType_MetaData)) }; // 661758434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsumableItem_Statics::NewProp_EffectValue_MetaData[] = {
		{ "Category", "Consumable Configuration" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
		{ "ToolTip", "How much health or stamina this restores. Ignored for Wearables and Static props." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConsumableItem_Statics::NewProp_EffectValue = { "EffectValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConsumableItem, EffectValue), METADATA_PARAMS(Z_Construct_UClass_AConsumableItem_Statics::NewProp_EffectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsumableItem_Statics::NewProp_EffectValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped_MetaData[] = {
		{ "Category", "Consumable State" },
		{ "ModuleRelativePath", "Public/ConsumableItem.h" },
	};
#endif
	void Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((AConsumableItem*)Obj)->bIsEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConsumableItem), &Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConsumableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsumableItem_Statics::NewProp_ConsumableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsumableItem_Statics::NewProp_EffectValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsumableItem_Statics::NewProp_bIsEquipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsumableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsumableItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConsumableItem_Statics::ClassParams = {
		&AConsumableItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConsumableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConsumableItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConsumableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConsumableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsumableItem()
	{
		if (!Z_Registration_Info_UClass_AConsumableItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConsumableItem.OuterSingleton, Z_Construct_UClass_AConsumableItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConsumableItem.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<AConsumableItem>()
	{
		return AConsumableItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsumableItem);
	AConsumableItem::~AConsumableItem() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::EnumInfo[] = {
		{ EConsumableType_StaticEnum, TEXT("EConsumableType"), &Z_Registration_Info_UEnum_EConsumableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 661758434U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConsumableItem, AConsumableItem::StaticClass, TEXT("AConsumableItem"), &Z_Registration_Info_UClass_AConsumableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConsumableItem), 1534699473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_318675691(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_ConsumableItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
