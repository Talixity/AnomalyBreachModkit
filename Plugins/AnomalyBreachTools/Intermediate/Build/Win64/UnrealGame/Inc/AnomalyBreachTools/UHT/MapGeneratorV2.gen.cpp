// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/MapGeneratorV2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGeneratorV2() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AMapGeneratorV2();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_AMapGeneratorV2_NoRegister();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape();
	ANOMALYBREACHTOOLS_API UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone();
	ANOMALYBREACHTOOLS_API UFunction* Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMapGenCell();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMapGenPOIRequest();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMapGenRoomVariant();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMapGenRoomVariantList();
	ANOMALYBREACHTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMapGenZoneRoomData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics
	{
		struct _Script_AnomalyBreachTools_eventOnMapGeneratedSignature_Parms
		{
			int32 MapSeed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::NewProp_MapSeed = { "MapSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AnomalyBreachTools_eventOnMapGeneratedSignature_Parms, MapSeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::NewProp_MapSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event Dispatcher so modders know when generation finishes\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "Event Dispatcher so modders know when generation finishes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools, nullptr, "OnMapGeneratedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::_Script_AnomalyBreachTools_eventOnMapGeneratedSignature_Parms), Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapGenZone;
	static UEnum* EMapGenZone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapGenZone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapGenZone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("EMapGenZone"));
		}
		return Z_Registration_Info_UEnum_EMapGenZone.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EMapGenZone>()
	{
		return EMapGenZone_StaticEnum();
	}
	struct Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enumerators[] = {
		{ "EMapGenZone::None", (int64)EMapGenZone::None },
		{ "EMapGenZone::LCZ", (int64)EMapGenZone::LCZ },
		{ "EMapGenZone::HCZ", (int64)EMapGenZone::HCZ },
		{ "EMapGenZone::EZ", (int64)EMapGenZone::EZ },
		{ "EMapGenZone::Checkpoint_LCZ_HCZ", (int64)EMapGenZone::Checkpoint_LCZ_HCZ },
		{ "EMapGenZone::Checkpoint_HCZ_EZ", (int64)EMapGenZone::Checkpoint_HCZ_EZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checkpoint_HCZ_EZ.DisplayName", "Checkpoint HCZ-EZ" },
		{ "Checkpoint_HCZ_EZ.Name", "EMapGenZone::Checkpoint_HCZ_EZ" },
		{ "Checkpoint_LCZ_HCZ.DisplayName", "Checkpoint LCZ-HCZ" },
		{ "Checkpoint_LCZ_HCZ.Name", "EMapGenZone::Checkpoint_LCZ_HCZ" },
		{ "EZ.DisplayName", "Entrance Zone" },
		{ "EZ.Name", "EMapGenZone::EZ" },
		{ "HCZ.DisplayName", "Heavy Containment Zone" },
		{ "HCZ.Name", "EMapGenZone::HCZ" },
		{ "LCZ.DisplayName", "Light Containment Zone" },
		{ "LCZ.Name", "EMapGenZone::LCZ" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "None.DisplayName", "Select a Zone..." },
		{ "None.Name", "EMapGenZone::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		"EMapGenZone",
		"EMapGenZone",
		Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone()
	{
		if (!Z_Registration_Info_UEnum_EMapGenZone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapGenZone.InnerSingleton, Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapGenZone.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapGenRoomShape;
	static UEnum* EMapGenRoomShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapGenRoomShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapGenRoomShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("EMapGenRoomShape"));
		}
		return Z_Registration_Info_UEnum_EMapGenRoomShape.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UEnum* StaticEnum<EMapGenRoomShape>()
	{
		return EMapGenRoomShape_StaticEnum();
	}
	struct Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enumerators[] = {
		{ "EMapGenRoomShape::None", (int64)EMapGenRoomShape::None },
		{ "EMapGenRoomShape::SpawnRoom", (int64)EMapGenRoomShape::SpawnRoom },
		{ "EMapGenRoomShape::DeadEnd", (int64)EMapGenRoomShape::DeadEnd },
		{ "EMapGenRoomShape::Straight", (int64)EMapGenRoomShape::Straight },
		{ "EMapGenRoomShape::Corner", (int64)EMapGenRoomShape::Corner },
		{ "EMapGenRoomShape::TShape", (int64)EMapGenRoomShape::TShape },
		{ "EMapGenRoomShape::Crossroad", (int64)EMapGenRoomShape::Crossroad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Corner.DisplayName", "Corner" },
		{ "Corner.Name", "EMapGenRoomShape::Corner" },
		{ "Crossroad.DisplayName", "Crossroad" },
		{ "Crossroad.Name", "EMapGenRoomShape::Crossroad" },
		{ "DeadEnd.DisplayName", "Dead End" },
		{ "DeadEnd.Name", "EMapGenRoomShape::DeadEnd" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "None.DisplayName", "Any Shape / None" },
		{ "None.Name", "EMapGenRoomShape::None" },
		{ "SpawnRoom.DisplayName", "Spawn Room" },
		{ "SpawnRoom.Name", "EMapGenRoomShape::SpawnRoom" },
		{ "Straight.DisplayName", "Straight" },
		{ "Straight.Name", "EMapGenRoomShape::Straight" },
		{ "TShape.DisplayName", "T-Shape" },
		{ "TShape.Name", "EMapGenRoomShape::TShape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		"EMapGenRoomShape",
		"EMapGenRoomShape",
		Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape()
	{
		if (!Z_Registration_Info_UEnum_EMapGenRoomShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapGenRoomShape.InnerSingleton, Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapGenRoomShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapGenRoomVariant;
class UScriptStruct* FMapGenRoomVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapGenRoomVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapGenRoomVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapGenRoomVariant, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("MapGenRoomVariant"));
	}
	return Z_Registration_Info_UScriptStruct_MapGenRoomVariant.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FMapGenRoomVariant>()
{
	return FMapGenRoomVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGuaranteeOnce_MetaData[];
#endif
		static void NewProp_bGuaranteeOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGuaranteeOnce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapGenRoomVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_RoomClass_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenRoomVariant, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_RoomClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_RoomClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce_SetBit(void* Obj)
	{
		((FMapGenRoomVariant*)Obj)->bGuaranteeOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce = { "bGuaranteeOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMapGenRoomVariant), &Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_RoomClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewProp_bGuaranteeOnce,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"MapGenRoomVariant",
		sizeof(FMapGenRoomVariant),
		alignof(FMapGenRoomVariant),
		Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapGenRoomVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_MapGenRoomVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapGenRoomVariant.InnerSingleton, Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapGenRoomVariant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapGenRoomVariantList;
class UScriptStruct* FMapGenRoomVariantList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapGenRoomVariantList, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("MapGenRoomVariantList"));
	}
	return Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FMapGenRoomVariantList>()
{
	return FMapGenRoomVariantList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomVariants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomVariants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomVariants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapGenRoomVariantList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants_Inner = { "RoomVariants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMapGenRoomVariant, METADATA_PARAMS(nullptr, 0) }; // 1133505075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants = { "RoomVariants", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenRoomVariantList, RoomVariants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants_MetaData)) }; // 1133505075
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewProp_RoomVariants,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"MapGenRoomVariantList",
		sizeof(FMapGenRoomVariantList),
		alignof(FMapGenRoomVariantList),
		Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapGenRoomVariantList()
	{
		if (!Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.InnerSingleton, Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapGenRoomVariantList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapGenZoneRoomData;
class UScriptStruct* FMapGenZoneRoomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapGenZoneRoomData, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("MapGenZoneRoomData"));
	}
	return Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FMapGenZoneRoomData>()
{
	return FMapGenZoneRoomData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DoorPrefab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorSpawnChance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ShapeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapGenZoneRoomData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorPrefab_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorPrefab = { "DoorPrefab", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenZoneRoomData, DoorPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorPrefab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorPrefab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorScale_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorScale = { "DoorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenZoneRoomData, DoorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorSpawnChance_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorSpawnChance = { "DoorSpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenZoneRoomData, DoorSpawnChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorSpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorSpawnChance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_ValueProp = { "ShapeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMapGenRoomVariantList, METADATA_PARAMS(nullptr, 0) }; // 3290526696
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_Key_KeyProp = { "ShapeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape, METADATA_PARAMS(nullptr, 0) }; // 2184995240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap = { "ShapeMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenZoneRoomData, ShapeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_MetaData)) }; // 2184995240 3290526696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorPrefab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_DoorSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewProp_ShapeMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"MapGenZoneRoomData",
		sizeof(FMapGenZoneRoomData),
		alignof(FMapGenZoneRoomData),
		Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapGenZoneRoomData()
	{
		if (!Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.InnerSingleton, Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapGenZoneRoomData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapGenPOIRequest;
class UScriptStruct* FMapGenPOIRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapGenPOIRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapGenPOIRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapGenPOIRequest, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("MapGenPOIRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MapGenPOIRequest.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FMapGenPOIRequest>()
{
	return FMapGenPOIRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoomTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetZone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetZone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetZone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapGenPOIRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomTag_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomTag = { "RoomTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenPOIRequest, RoomTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomTag_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone = { "TargetZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenPOIRequest, TargetZone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone_MetaData)) }; // 2490587055
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "If set to None, it will place the room in ANY shape inside the target zone." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape = { "RequiredShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenPOIRequest, RequiredShape), Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape_MetaData)) }; // 2184995240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomClass_MetaData[] = {
		{ "Category", "POI" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenPOIRequest, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_TargetZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RequiredShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewProp_RoomClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"MapGenPOIRequest",
		sizeof(FMapGenPOIRequest),
		alignof(FMapGenPOIRequest),
		Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapGenPOIRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MapGenPOIRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapGenPOIRequest.InnerSingleton, Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapGenPOIRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapGenCell;
class UScriptStruct* FMapGenCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapGenCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapGenCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapGenCell, Z_Construct_UPackage__Script_AnomalyBreachTools(), TEXT("MapGenCell"));
	}
	return Z_Registration_Info_UScriptStruct_MapGenCell.OuterSingleton;
}
template<> ANOMALYBREACHTOOLS_API UScriptStruct* StaticStruct<FMapGenCell>()
{
	return FMapGenCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapGenCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoomActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRoomActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapGenCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapGenCell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapGenCell_Statics::NewProp_SpawnedRoomActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapGenCell_Statics::NewProp_SpawnedRoomActor = { "SpawnedRoomActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapGenCell, SpawnedRoomActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenCell_Statics::NewProp_SpawnedRoomActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenCell_Statics::NewProp_SpawnedRoomActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapGenCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapGenCell_Statics::NewProp_SpawnedRoomActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapGenCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
		nullptr,
		&NewStructOps,
		"MapGenCell",
		sizeof(FMapGenCell),
		alignof(FMapGenCell),
		Z_Construct_UScriptStruct_FMapGenCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapGenCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapGenCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapGenCell()
	{
		if (!Z_Registration_Info_UScriptStruct_MapGenCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapGenCell.InnerSingleton, Z_Construct_UScriptStruct_FMapGenCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapGenCell.InnerSingleton;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execOnRep_MapSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MapSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execForceAddCustomRoom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_ENUM(EMapGenZone,Z_Param_Zone);
		P_GET_ENUM(EMapGenRoomShape,Z_Param_Shape);
		P_GET_OBJECT(UClass,Z_Param_RoomClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceAddCustomRoom(Z_Param_X,Z_Param_Y,EMapGenZone(Z_Param_Zone),EMapGenRoomShape(Z_Param_Shape),Z_Param_RoomClass,Z_Param_OptionalTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGetWorldLocationFromGrid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromGrid(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execIsGridOccupied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGridOccupied(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGetRoomsInZone)
	{
		P_GET_ENUM(EMapGenZone,Z_Param_Zone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetRoomsInZone(EMapGenZone(Z_Param_Zone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGetRoomAtGridLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetRoomAtGridLocation(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGetRoomByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetRoomByTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGetSpawnRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetSpawnRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execClearMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execRegenerateMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenerateMap(Z_Param_NewSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapGeneratorV2::execGenerateMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap();
		P_NATIVE_END;
	}
	void AMapGeneratorV2::StaticRegisterNativesAMapGeneratorV2()
	{
		UClass* Class = AMapGeneratorV2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMap", &AMapGeneratorV2::execClearMap },
			{ "ForceAddCustomRoom", &AMapGeneratorV2::execForceAddCustomRoom },
			{ "GenerateMap", &AMapGeneratorV2::execGenerateMap },
			{ "GetRoomAtGridLocation", &AMapGeneratorV2::execGetRoomAtGridLocation },
			{ "GetRoomByTag", &AMapGeneratorV2::execGetRoomByTag },
			{ "GetRoomsInZone", &AMapGeneratorV2::execGetRoomsInZone },
			{ "GetSpawnRoom", &AMapGeneratorV2::execGetSpawnRoom },
			{ "GetWorldLocationFromGrid", &AMapGeneratorV2::execGetWorldLocationFromGrid },
			{ "IsGridOccupied", &AMapGeneratorV2::execIsGridOccupied },
			{ "OnRep_MapSeed", &AMapGeneratorV2::execOnRep_MapSeed },
			{ "RegenerateMap", &AMapGeneratorV2::execRegenerateMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Actions" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "ClearMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_ClearMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_ClearMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics
	{
		struct MapGeneratorV2_eventForceAddCustomRoom_Parms
		{
			int32 X;
			int32 Y;
			EMapGenZone Zone;
			EMapGenRoomShape Shape;
			TSubclassOf<AActor>  RoomClass;
			FName OptionalTag;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Zone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Zone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoomClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Zone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, Zone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(nullptr, 0) }; // 2490587055
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, Shape), Z_Construct_UEnum_AnomalyBreachTools_EMapGenRoomShape, METADATA_PARAMS(nullptr, 0) }; // 2184995240
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_RoomClass = { "RoomClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, RoomClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_OptionalTag = { "OptionalTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventForceAddCustomRoom_Parms, OptionalTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Zone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Zone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_RoomClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::NewProp_OptionalTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "ForceAddCustomRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::MapGeneratorV2_eventForceAddCustomRoom_Parms), Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Actions" },
		{ "Comment", "// ==========================================\n// MAP GENERATION NODES\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "MAP GENERATION NODES" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GenerateMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics
	{
		struct MapGeneratorV2_eventGetRoomAtGridLocation_Parms
		{
			int32 X;
			int32 Y;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomAtGridLocation_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomAtGridLocation_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomAtGridLocation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GetRoomAtGridLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::MapGeneratorV2_eventGetRoomAtGridLocation_Parms), Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics
	{
		struct MapGeneratorV2_eventGetRoomByTag_Parms
		{
			FName Tag;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomByTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomByTag_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GetRoomByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::MapGeneratorV2_eventGetRoomByTag_Parms), Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics
	{
		struct MapGeneratorV2_eventGetRoomsInZone_Parms
		{
			EMapGenZone Zone;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Zone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Zone;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_Zone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomsInZone_Parms, Zone), Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(nullptr, 0) }; // 2490587055
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetRoomsInZone_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_Zone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_Zone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GetRoomsInZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::MapGeneratorV2_eventGetRoomsInZone_Parms), Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics
	{
		struct MapGeneratorV2_eventGetSpawnRoom_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetSpawnRoom_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "Comment", "// ==========================================\n// UTILITY NODES FOR MODDERS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "UTILITY NODES FOR MODDERS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GetSpawnRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::MapGeneratorV2_eventGetSpawnRoom_Parms), Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics
	{
		struct MapGeneratorV2_eventGetWorldLocationFromGrid_Parms
		{
			int32 X;
			int32 Y;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetWorldLocationFromGrid_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetWorldLocationFromGrid_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventGetWorldLocationFromGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "GetWorldLocationFromGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::MapGeneratorV2_eventGetWorldLocationFromGrid_Parms), Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics
	{
		struct MapGeneratorV2_eventIsGridOccupied_Parms
		{
			int32 X;
			int32 Y;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventIsGridOccupied_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventIsGridOccupied_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapGeneratorV2_eventIsGridOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MapGeneratorV2_eventIsGridOccupied_Parms), &Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Utility" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "IsGridOccupied", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::MapGeneratorV2_eventIsGridOccupied_Parms), Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "OnRep_MapSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics
	{
		struct MapGeneratorV2_eventRegenerateMap_Parms
		{
			int32 NewSeed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::NewProp_NewSeed = { "NewSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MapGeneratorV2_eventRegenerateMap_Parms, NewSeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::NewProp_NewSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SCP Map Generation|Actions" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapGeneratorV2, nullptr, "RegenerateMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::MapGeneratorV2_eventRegenerateMap_Parms), Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapGeneratorV2);
	UClass* Z_Construct_UClass_AMapGeneratorV2_NoRegister()
	{
		return AMapGeneratorV2::StaticClass();
	}
	struct Z_Construct_UClass_AMapGeneratorV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapGenerationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapGenerationComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLCZRooms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLCZRooms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHCZRooms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHCZRooms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEZRooms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEZRooms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToHCZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceToHCZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToEZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceToEZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BranchingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLoops_MetaData[];
#endif
		static void NewProp_bAllowLoops_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGenerationRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGenerationRetries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPrefabs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomPrefabs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomPrefabs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomPrefabs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoomPrefabs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapSeed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TaggedRoomsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaggedRoomsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedRoomsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TaggedRoomsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapGeneratorV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapGeneratorV2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapGeneratorV2_ClearMap, "ClearMap" }, // 3757157543
		{ &Z_Construct_UFunction_AMapGeneratorV2_ForceAddCustomRoom, "ForceAddCustomRoom" }, // 2073979988
		{ &Z_Construct_UFunction_AMapGeneratorV2_GenerateMap, "GenerateMap" }, // 4006364156
		{ &Z_Construct_UFunction_AMapGeneratorV2_GetRoomAtGridLocation, "GetRoomAtGridLocation" }, // 1486696550
		{ &Z_Construct_UFunction_AMapGeneratorV2_GetRoomByTag, "GetRoomByTag" }, // 1154230881
		{ &Z_Construct_UFunction_AMapGeneratorV2_GetRoomsInZone, "GetRoomsInZone" }, // 3195555594
		{ &Z_Construct_UFunction_AMapGeneratorV2_GetSpawnRoom, "GetSpawnRoom" }, // 1797571174
		{ &Z_Construct_UFunction_AMapGeneratorV2_GetWorldLocationFromGrid, "GetWorldLocationFromGrid" }, // 3462209031
		{ &Z_Construct_UFunction_AMapGeneratorV2_IsGridOccupied, "IsGridOccupied" }, // 573856180
		{ &Z_Construct_UFunction_AMapGeneratorV2_OnRep_MapSeed, "OnRep_MapSeed" }, // 665555378
		{ &Z_Construct_UFunction_AMapGeneratorV2_RegenerateMap, "RegenerateMap" }, // 1142831585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapGeneratorV2.h" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_OnMapGenerationComplete_MetaData[] = {
		{ "Category", "SCP Map Generation|Events" },
		{ "Comment", "// ==========================================\n// DELEGATES / EVENTS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "DELEGATES / EVENTS" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_OnMapGenerationComplete = { "OnMapGenerationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, OnMapGenerationComplete), Z_Construct_UDelegateFunction_AnomalyBreachTools_OnMapGeneratedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_OnMapGenerationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_OnMapGenerationComplete_MetaData)) }; // 3330129927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridWidth_MetaData[] = {
		{ "Category", "Map Config|Sizing" },
		{ "Comment", "// ==========================================\n// MAP CONFIGURATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "MAP CONFIGURATION" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, GridWidth), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridHeight_MetaData[] = {
		{ "Category", "Map Config|Sizing" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, GridHeight), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSize_MetaData[] = {
		{ "Category", "Map Config|Sizing" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "Base size of each room mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, RoomSize), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSpacing_MetaData[] = {
		{ "Category", "Map Config|Sizing" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "Slight physical spacing between meshes to prevent co-planar z-fighting at doors" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSpacing = { "RoomSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, RoomSpacing), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapOffset_MetaData[] = {
		{ "Category", "Map Config|Sizing" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapOffset = { "MapOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MapOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxLCZRooms_MetaData[] = {
		{ "Category", "Map Config|Limits" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxLCZRooms = { "MaxLCZRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MaxLCZRooms), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxLCZRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxLCZRooms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxHCZRooms_MetaData[] = {
		{ "Category", "Map Config|Limits" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxHCZRooms = { "MaxHCZRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MaxHCZRooms), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxHCZRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxHCZRooms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxEZRooms_MetaData[] = {
		{ "Category", "Map Config|Limits" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxEZRooms = { "MaxEZRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MaxEZRooms), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxEZRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxEZRooms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToHCZ_MetaData[] = {
		{ "Category", "Map Config|Limits" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToHCZ = { "DistanceToHCZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, DistanceToHCZ), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToHCZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToHCZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToEZ_MetaData[] = {
		{ "Category", "Map Config|Limits" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToEZ = { "DistanceToEZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, DistanceToEZ), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToEZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToEZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_BranchingFactor_MetaData[] = {
		{ "Category", "Map Config|Advanced" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// ==========================================\n// ADVANCED GENERATION\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "ADVANCED GENERATION" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_BranchingFactor = { "BranchingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, BranchingFactor), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_BranchingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_BranchingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomDensity_MetaData[] = {
		{ "Category", "Map Config|Advanced" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomDensity = { "RoomDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, RoomDensity), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops_MetaData[] = {
		{ "Category", "Map Config|Advanced" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	void Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops_SetBit(void* Obj)
	{
		((AMapGeneratorV2*)Obj)->bAllowLoops = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops = { "bAllowLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMapGeneratorV2), &Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxGenerationRetries_MetaData[] = {
		{ "Category", "Map Config|Advanced" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxGenerationRetries = { "MaxGenerationRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MaxGenerationRetries), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxGenerationRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxGenerationRetries_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_ValueProp = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMapGenZoneRoomData, METADATA_PARAMS(nullptr, 0) }; // 578790066
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_Key_KeyProp = { "RoomPrefabs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AnomalyBreachTools_EMapGenZone, METADATA_PARAMS(nullptr, 0) }; // 2490587055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_MetaData[] = {
		{ "Category", "Map Prefabs" },
		{ "Comment", "// ==========================================\n// PREFABS & INJECTIONS\n// ==========================================\n" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
		{ "ToolTip", "PREFABS & INJECTIONS" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs = { "RoomPrefabs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, RoomPrefabs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_MetaData)) }; // 2490587055 578790066
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMapGenPOIRequest, METADATA_PARAMS(nullptr, 0) }; // 640158249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest_MetaData[] = {
		{ "Category", "Map Prefabs|Points of Interest" },
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest_MetaData)) }; // 640158249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapSeed = { "MapSeed", "OnRep_MapSeed", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, MapSeed), METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapSeed_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_ValueProp = { "TaggedRoomsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_Key_KeyProp = { "TaggedRoomsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapGeneratorV2.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap = { "TaggedRoomsMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMapGeneratorV2, TaggedRoomsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGeneratorV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_OnMapGenerationComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_GridHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxLCZRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxHCZRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxEZRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToHCZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_DistanceToEZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_BranchingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_bAllowLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MaxGenerationRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_RoomPrefabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_PointsOfInterest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_MapSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_SpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneratorV2_Statics::NewProp_TaggedRoomsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapGeneratorV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGeneratorV2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapGeneratorV2_Statics::ClassParams = {
		&AMapGeneratorV2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapGeneratorV2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapGeneratorV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGeneratorV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapGeneratorV2()
	{
		if (!Z_Registration_Info_UClass_AMapGeneratorV2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapGeneratorV2.OuterSingleton, Z_Construct_UClass_AMapGeneratorV2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMapGeneratorV2.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<AMapGeneratorV2>()
	{
		return AMapGeneratorV2::StaticClass();
	}

	void AMapGeneratorV2::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MapSeed(TEXT("MapSeed"));

		const bool bIsValid = true
			&& Name_MapSeed == ClassReps[(int32)ENetFields_Private::MapSeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMapGeneratorV2"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGeneratorV2);
	AMapGeneratorV2::~AMapGeneratorV2() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::EnumInfo[] = {
		{ EMapGenZone_StaticEnum, TEXT("EMapGenZone"), &Z_Registration_Info_UEnum_EMapGenZone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490587055U) },
		{ EMapGenRoomShape_StaticEnum, TEXT("EMapGenRoomShape"), &Z_Registration_Info_UEnum_EMapGenRoomShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2184995240U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ScriptStructInfo[] = {
		{ FMapGenRoomVariant::StaticStruct, Z_Construct_UScriptStruct_FMapGenRoomVariant_Statics::NewStructOps, TEXT("MapGenRoomVariant"), &Z_Registration_Info_UScriptStruct_MapGenRoomVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapGenRoomVariant), 1133505075U) },
		{ FMapGenRoomVariantList::StaticStruct, Z_Construct_UScriptStruct_FMapGenRoomVariantList_Statics::NewStructOps, TEXT("MapGenRoomVariantList"), &Z_Registration_Info_UScriptStruct_MapGenRoomVariantList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapGenRoomVariantList), 3290526696U) },
		{ FMapGenZoneRoomData::StaticStruct, Z_Construct_UScriptStruct_FMapGenZoneRoomData_Statics::NewStructOps, TEXT("MapGenZoneRoomData"), &Z_Registration_Info_UScriptStruct_MapGenZoneRoomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapGenZoneRoomData), 578790066U) },
		{ FMapGenPOIRequest::StaticStruct, Z_Construct_UScriptStruct_FMapGenPOIRequest_Statics::NewStructOps, TEXT("MapGenPOIRequest"), &Z_Registration_Info_UScriptStruct_MapGenPOIRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapGenPOIRequest), 640158249U) },
		{ FMapGenCell::StaticStruct, Z_Construct_UScriptStruct_FMapGenCell_Statics::NewStructOps, TEXT("MapGenCell"), &Z_Registration_Info_UScriptStruct_MapGenCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapGenCell), 3443143307U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMapGeneratorV2, AMapGeneratorV2::StaticClass, TEXT("AMapGeneratorV2"), &Z_Registration_Info_UClass_AMapGeneratorV2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapGeneratorV2), 1527172897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_2010236881(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_MapGeneratorV2_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
