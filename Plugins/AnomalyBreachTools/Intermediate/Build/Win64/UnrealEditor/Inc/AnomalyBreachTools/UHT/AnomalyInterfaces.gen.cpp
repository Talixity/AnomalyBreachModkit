// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnomalyBreachTools/Public/AnomalyInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnomalyInterfaces() {}
// Cross Module References
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UAnomalyDoorInterface();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UAnomalyDoorInterface_NoRegister();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UAnomalyPlayerInterface();
	ANOMALYBREACHTOOLS_API UClass* Z_Construct_UClass_UAnomalyPlayerInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnomalyBreachTools();
// End Cross Module References
	DEFINE_FUNCTION(IAnomalyDoorInterface::execCloseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyDoorInterface::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyDoorInterface::execSetPowerSource)
	{
		P_GET_OBJECT(UObject,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPowerSource_Implementation(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyDoorInterface::execSetRequiresPower)
	{
		P_GET_UBOOL(Z_Param_bRequires);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequiresPower_Implementation(Z_Param_bRequires);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyDoorInterface::execGetPowerSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetPowerSource_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyDoorInterface::execGetRequiresPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRequiresPower_Implementation();
		P_NATIVE_END;
	}
	struct AnomalyDoorInterface_eventGetPowerSource_Parms
	{
		UObject* ReturnValue;

		/** Constructor, initializes return property only **/
		AnomalyDoorInterface_eventGetPowerSource_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AnomalyDoorInterface_eventGetRequiresPower_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AnomalyDoorInterface_eventGetRequiresPower_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AnomalyDoorInterface_eventSetPowerSource_Parms
	{
		UObject* Source;
	};
	struct AnomalyDoorInterface_eventSetRequiresPower_Parms
	{
		bool bRequires;
	};
	void IAnomalyDoorInterface::CloseDoor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseDoor instead.");
	}
	UObject* IAnomalyDoorInterface::GetPowerSource() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPowerSource instead.");
		AnomalyDoorInterface_eventGetPowerSource_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IAnomalyDoorInterface::GetRequiresPower() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRequiresPower instead.");
		AnomalyDoorInterface_eventGetRequiresPower_Parms Parms;
		return Parms.ReturnValue;
	}
	void IAnomalyDoorInterface::OpenDoor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenDoor instead.");
	}
	void IAnomalyDoorInterface::SetPowerSource(UObject* Source)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPowerSource instead.");
	}
	void IAnomalyDoorInterface::SetRequiresPower(bool bRequires)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetRequiresPower instead.");
	}
	void UAnomalyDoorInterface::StaticRegisterNativesUAnomalyDoorInterface()
	{
		UClass* Class = UAnomalyDoorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &IAnomalyDoorInterface::execCloseDoor },
			{ "GetPowerSource", &IAnomalyDoorInterface::execGetPowerSource },
			{ "GetRequiresPower", &IAnomalyDoorInterface::execGetRequiresPower },
			{ "OpenDoor", &IAnomalyDoorInterface::execOpenDoor },
			{ "SetPowerSource", &IAnomalyDoorInterface::execSetPowerSource },
			{ "SetRequiresPower", &IAnomalyDoorInterface::execSetRequiresPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyDoorInterface_eventGetPowerSource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "GetPowerSource", nullptr, nullptr, sizeof(AnomalyDoorInterface_eventGetPowerSource_Parms), Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnomalyDoorInterface_eventGetRequiresPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnomalyDoorInterface_eventGetRequiresPower_Parms), &Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "GetRequiresPower", nullptr, nullptr, sizeof(AnomalyDoorInterface_eventGetRequiresPower_Parms), Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyDoorInterface_eventSetPowerSource_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "SetPowerSource", nullptr, nullptr, sizeof(AnomalyDoorInterface_eventSetPowerSource_Parms), Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics
	{
		static void NewProp_bRequires_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequires;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::NewProp_bRequires_SetBit(void* Obj)
	{
		((AnomalyDoorInterface_eventSetRequiresPower_Parms*)Obj)->bRequires = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::NewProp_bRequires = { "bRequires", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnomalyDoorInterface_eventSetRequiresPower_Parms), &Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::NewProp_bRequires_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::NewProp_bRequires,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Door Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyDoorInterface, nullptr, "SetRequiresPower", nullptr, nullptr, sizeof(AnomalyDoorInterface_eventSetRequiresPower_Parms), Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnomalyDoorInterface);
	UClass* Z_Construct_UClass_UAnomalyDoorInterface_NoRegister()
	{
		return UAnomalyDoorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnomalyDoorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnomalyDoorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnomalyDoorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_CloseDoor, "CloseDoor" }, // 2880522375
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_GetPowerSource, "GetPowerSource" }, // 564160040
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_GetRequiresPower, "GetRequiresPower" }, // 2204090876
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_OpenDoor, "OpenDoor" }, // 1994906083
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_SetPowerSource, "SetPowerSource" }, // 1528215698
		{ &Z_Construct_UFunction_UAnomalyDoorInterface_SetRequiresPower, "SetRequiresPower" }, // 3891520760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnomalyDoorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnomalyDoorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnomalyDoorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnomalyDoorInterface_Statics::ClassParams = {
		&UAnomalyDoorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnomalyDoorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnomalyDoorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnomalyDoorInterface()
	{
		if (!Z_Registration_Info_UClass_UAnomalyDoorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnomalyDoorInterface.OuterSingleton, Z_Construct_UClass_UAnomalyDoorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnomalyDoorInterface.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<UAnomalyDoorInterface>()
	{
		return UAnomalyDoorInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnomalyDoorInterface);
	UAnomalyDoorInterface::~UAnomalyDoorInterface() {}
	static FName NAME_UAnomalyDoorInterface_CloseDoor = FName(TEXT("CloseDoor"));
	void IAnomalyDoorInterface::Execute_CloseDoor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_CloseDoor);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			I->CloseDoor_Implementation();
		}
	}
	static FName NAME_UAnomalyDoorInterface_GetPowerSource = FName(TEXT("GetPowerSource"));
	UObject* IAnomalyDoorInterface::Execute_GetPowerSource(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		AnomalyDoorInterface_eventGetPowerSource_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_GetPowerSource);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPowerSource_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAnomalyDoorInterface_GetRequiresPower = FName(TEXT("GetRequiresPower"));
	bool IAnomalyDoorInterface::Execute_GetRequiresPower(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		AnomalyDoorInterface_eventGetRequiresPower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_GetRequiresPower);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetRequiresPower_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAnomalyDoorInterface_OpenDoor = FName(TEXT("OpenDoor"));
	void IAnomalyDoorInterface::Execute_OpenDoor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_OpenDoor);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			I->OpenDoor_Implementation();
		}
	}
	static FName NAME_UAnomalyDoorInterface_SetPowerSource = FName(TEXT("SetPowerSource"));
	void IAnomalyDoorInterface::Execute_SetPowerSource(UObject* O, UObject* Source)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		AnomalyDoorInterface_eventSetPowerSource_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_SetPowerSource);
		if (Func)
		{
			Parms.Source=Source;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			I->SetPowerSource_Implementation(Source);
		}
	}
	static FName NAME_UAnomalyDoorInterface_SetRequiresPower = FName(TEXT("SetRequiresPower"));
	void IAnomalyDoorInterface::Execute_SetRequiresPower(UObject* O, bool bRequires)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyDoorInterface::StaticClass()));
		AnomalyDoorInterface_eventSetRequiresPower_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyDoorInterface_SetRequiresPower);
		if (Func)
		{
			Parms.bRequires=bRequires;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyDoorInterface*)(O->GetNativeInterfaceAddress(UAnomalyDoorInterface::StaticClass())))
		{
			I->SetRequiresPower_Implementation(bRequires);
		}
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execSetGasMaskState)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGasMaskState_Implementation(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execSetNightVisionState)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNightVisionState_Implementation(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execRestorePlayerStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestorePlayerStamina_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execHealAnomalyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealAnomalyDamage_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execApplyScreenDistortion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyScreenDistortion_Implementation(Z_Param_Intensity,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execForcePlayerBlink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcePlayerBlink_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execDrainPlayerStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrainPlayerStamina_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execTakeInstaKill)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DeathReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeInstaKill_Implementation(Z_Param_DeathReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnomalyPlayerInterface::execTakeAnomalyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_PROPERTY(FNameProperty,Z_Param_DamageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeAnomalyDamage_Implementation(Z_Param_Amount,Z_Param_DamageType);
		P_NATIVE_END;
	}
	struct AnomalyPlayerInterface_eventApplyScreenDistortion_Parms
	{
		float Intensity;
		float Duration;
	};
	struct AnomalyPlayerInterface_eventDrainPlayerStamina_Parms
	{
		float Amount;
	};
	struct AnomalyPlayerInterface_eventHealAnomalyDamage_Parms
	{
		float Amount;
	};
	struct AnomalyPlayerInterface_eventRestorePlayerStamina_Parms
	{
		float Amount;
	};
	struct AnomalyPlayerInterface_eventSetGasMaskState_Parms
	{
		bool bIsActive;
	};
	struct AnomalyPlayerInterface_eventSetNightVisionState_Parms
	{
		bool bIsActive;
	};
	struct AnomalyPlayerInterface_eventTakeAnomalyDamage_Parms
	{
		float Amount;
		FName DamageType;
	};
	struct AnomalyPlayerInterface_eventTakeInstaKill_Parms
	{
		FName DeathReason;
	};
	void IAnomalyPlayerInterface::ApplyScreenDistortion(float Intensity, float Duration)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyScreenDistortion instead.");
	}
	void IAnomalyPlayerInterface::DrainPlayerStamina(float Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DrainPlayerStamina instead.");
	}
	void IAnomalyPlayerInterface::ForcePlayerBlink()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ForcePlayerBlink instead.");
	}
	void IAnomalyPlayerInterface::HealAnomalyDamage(float Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HealAnomalyDamage instead.");
	}
	void IAnomalyPlayerInterface::RestorePlayerStamina(float Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RestorePlayerStamina instead.");
	}
	void IAnomalyPlayerInterface::SetGasMaskState(bool bIsActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetGasMaskState instead.");
	}
	void IAnomalyPlayerInterface::SetNightVisionState(bool bIsActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNightVisionState instead.");
	}
	void IAnomalyPlayerInterface::TakeAnomalyDamage(float Amount, FName DamageType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeAnomalyDamage instead.");
	}
	void IAnomalyPlayerInterface::TakeInstaKill(FName DeathReason)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeInstaKill instead.");
	}
	void UAnomalyPlayerInterface::StaticRegisterNativesUAnomalyPlayerInterface()
	{
		UClass* Class = UAnomalyPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyScreenDistortion", &IAnomalyPlayerInterface::execApplyScreenDistortion },
			{ "DrainPlayerStamina", &IAnomalyPlayerInterface::execDrainPlayerStamina },
			{ "ForcePlayerBlink", &IAnomalyPlayerInterface::execForcePlayerBlink },
			{ "HealAnomalyDamage", &IAnomalyPlayerInterface::execHealAnomalyDamage },
			{ "RestorePlayerStamina", &IAnomalyPlayerInterface::execRestorePlayerStamina },
			{ "SetGasMaskState", &IAnomalyPlayerInterface::execSetGasMaskState },
			{ "SetNightVisionState", &IAnomalyPlayerInterface::execSetNightVisionState },
			{ "TakeAnomalyDamage", &IAnomalyPlayerInterface::execTakeAnomalyDamage },
			{ "TakeInstaKill", &IAnomalyPlayerInterface::execTakeInstaKill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventApplyScreenDistortion_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventApplyScreenDistortion_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "ApplyScreenDistortion", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventApplyScreenDistortion_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventDrainPlayerStamina_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "DrainPlayerStamina", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventDrainPlayerStamina_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "ForcePlayerBlink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventHealAnomalyDamage_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "HealAnomalyDamage", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventHealAnomalyDamage_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventRestorePlayerStamina_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "RestorePlayerStamina", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventRestorePlayerStamina_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics
	{
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((AnomalyPlayerInterface_eventSetGasMaskState_Parms*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnomalyPlayerInterface_eventSetGasMaskState_Parms), &Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "SetGasMaskState", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventSetGasMaskState_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics
	{
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((AnomalyPlayerInterface_eventSetNightVisionState_Parms*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnomalyPlayerInterface_eventSetNightVisionState_Parms), &Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "SetNightVisionState", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventSetNightVisionState_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventTakeAnomalyDamage_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventTakeAnomalyDamage_Parms, DamageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::NewProp_DamageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "TakeAnomalyDamage", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventTakeAnomalyDamage_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeathReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnomalyPlayerInterface_eventTakeInstaKill_Parms, DeathReason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::NewProp_DeathReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anomaly Player Interface" },
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnomalyPlayerInterface, nullptr, "TakeInstaKill", nullptr, nullptr, sizeof(AnomalyPlayerInterface_eventTakeInstaKill_Parms), Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnomalyPlayerInterface);
	UClass* Z_Construct_UClass_UAnomalyPlayerInterface_NoRegister()
	{
		return UAnomalyPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnomalyPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnomalyPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnomalyBreachTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnomalyPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_ApplyScreenDistortion, "ApplyScreenDistortion" }, // 485989481
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_DrainPlayerStamina, "DrainPlayerStamina" }, // 1028769786
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_ForcePlayerBlink, "ForcePlayerBlink" }, // 1438006187
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_HealAnomalyDamage, "HealAnomalyDamage" }, // 1030754391
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_RestorePlayerStamina, "RestorePlayerStamina" }, // 3285868933
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_SetGasMaskState, "SetGasMaskState" }, // 1056584026
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_SetNightVisionState, "SetNightVisionState" }, // 1474890408
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_TakeAnomalyDamage, "TakeAnomalyDamage" }, // 2126077543
		{ &Z_Construct_UFunction_UAnomalyPlayerInterface_TakeInstaKill, "TakeInstaKill" }, // 3502196691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnomalyPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnomalyInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnomalyPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnomalyPlayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnomalyPlayerInterface_Statics::ClassParams = {
		&UAnomalyPlayerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnomalyPlayerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnomalyPlayerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnomalyPlayerInterface()
	{
		if (!Z_Registration_Info_UClass_UAnomalyPlayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnomalyPlayerInterface.OuterSingleton, Z_Construct_UClass_UAnomalyPlayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnomalyPlayerInterface.OuterSingleton;
	}
	template<> ANOMALYBREACHTOOLS_API UClass* StaticClass<UAnomalyPlayerInterface>()
	{
		return UAnomalyPlayerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnomalyPlayerInterface);
	UAnomalyPlayerInterface::~UAnomalyPlayerInterface() {}
	static FName NAME_UAnomalyPlayerInterface_ApplyScreenDistortion = FName(TEXT("ApplyScreenDistortion"));
	void IAnomalyPlayerInterface::Execute_ApplyScreenDistortion(UObject* O, float Intensity, float Duration)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventApplyScreenDistortion_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_ApplyScreenDistortion);
		if (Func)
		{
			Parms.Intensity=Intensity;
			Parms.Duration=Duration;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->ApplyScreenDistortion_Implementation(Intensity,Duration);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_DrainPlayerStamina = FName(TEXT("DrainPlayerStamina"));
	void IAnomalyPlayerInterface::Execute_DrainPlayerStamina(UObject* O, float Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventDrainPlayerStamina_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_DrainPlayerStamina);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->DrainPlayerStamina_Implementation(Amount);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_ForcePlayerBlink = FName(TEXT("ForcePlayerBlink"));
	void IAnomalyPlayerInterface::Execute_ForcePlayerBlink(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_ForcePlayerBlink);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->ForcePlayerBlink_Implementation();
		}
	}
	static FName NAME_UAnomalyPlayerInterface_HealAnomalyDamage = FName(TEXT("HealAnomalyDamage"));
	void IAnomalyPlayerInterface::Execute_HealAnomalyDamage(UObject* O, float Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventHealAnomalyDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_HealAnomalyDamage);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->HealAnomalyDamage_Implementation(Amount);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_RestorePlayerStamina = FName(TEXT("RestorePlayerStamina"));
	void IAnomalyPlayerInterface::Execute_RestorePlayerStamina(UObject* O, float Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventRestorePlayerStamina_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_RestorePlayerStamina);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->RestorePlayerStamina_Implementation(Amount);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_SetGasMaskState = FName(TEXT("SetGasMaskState"));
	void IAnomalyPlayerInterface::Execute_SetGasMaskState(UObject* O, bool bIsActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventSetGasMaskState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_SetGasMaskState);
		if (Func)
		{
			Parms.bIsActive=bIsActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->SetGasMaskState_Implementation(bIsActive);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_SetNightVisionState = FName(TEXT("SetNightVisionState"));
	void IAnomalyPlayerInterface::Execute_SetNightVisionState(UObject* O, bool bIsActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventSetNightVisionState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_SetNightVisionState);
		if (Func)
		{
			Parms.bIsActive=bIsActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->SetNightVisionState_Implementation(bIsActive);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_TakeAnomalyDamage = FName(TEXT("TakeAnomalyDamage"));
	void IAnomalyPlayerInterface::Execute_TakeAnomalyDamage(UObject* O, float Amount, FName DamageType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventTakeAnomalyDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_TakeAnomalyDamage);
		if (Func)
		{
			Parms.Amount=Amount;
			Parms.DamageType=DamageType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->TakeAnomalyDamage_Implementation(Amount,DamageType);
		}
	}
	static FName NAME_UAnomalyPlayerInterface_TakeInstaKill = FName(TEXT("TakeInstaKill"));
	void IAnomalyPlayerInterface::Execute_TakeInstaKill(UObject* O, FName DeathReason)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnomalyPlayerInterface::StaticClass()));
		AnomalyPlayerInterface_eventTakeInstaKill_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnomalyPlayerInterface_TakeInstaKill);
		if (Func)
		{
			Parms.DeathReason=DeathReason;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnomalyPlayerInterface*)(O->GetNativeInterfaceAddress(UAnomalyPlayerInterface::StaticClass())))
		{
			I->TakeInstaKill_Implementation(DeathReason);
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnomalyDoorInterface, UAnomalyDoorInterface::StaticClass, TEXT("UAnomalyDoorInterface"), &Z_Registration_Info_UClass_UAnomalyDoorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnomalyDoorInterface), 1276732486U) },
		{ Z_Construct_UClass_UAnomalyPlayerInterface, UAnomalyPlayerInterface::StaticClass, TEXT("UAnomalyPlayerInterface"), &Z_Registration_Info_UClass_UAnomalyPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnomalyPlayerInterface), 1283741818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_329143286(TEXT("/Script/AnomalyBreachTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnomalyBreachTools_Source_AnomalyBreachTools_Public_AnomalyInterfaces_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
