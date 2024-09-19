// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "logistic/LogisticGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogisticGameMode() {}
// Cross Module References
	LOGISTIC_API UClass* Z_Construct_UClass_ALogisticGameMode_NoRegister();
	LOGISTIC_API UClass* Z_Construct_UClass_ALogisticGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_logistic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LOGISTIC_API UClass* Z_Construct_UClass_AWarehouse_NoRegister();
	LOGISTIC_API UClass* Z_Construct_UClass_AResourceCarrierPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALogisticGameMode::execSpawnWarehouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWarehouse();
		P_NATIVE_END;
	}
	void ALogisticGameMode::StaticRegisterNativesALogisticGameMode()
	{
		UClass* Class = ALogisticGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnWarehouse", &ALogisticGameMode::execSpawnWarehouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ??????? ??? ?????? ??????\n" },
		{ "ModuleRelativePath", "LogisticGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALogisticGameMode, nullptr, "SpawnWarehouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALogisticGameMode_NoRegister()
	{
		return ALogisticGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALogisticGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarehouseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WarehouseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarrierPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarrierPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALogisticGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_logistic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALogisticGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALogisticGameMode_SpawnWarehouse, "SpawnWarehouse" }, // 3926636589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogisticGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LogisticGameMode.h" },
		{ "ModuleRelativePath", "LogisticGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_WarehouseClass_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ???????? ?? ????? ?????? ??? ??????\n" },
		{ "ModuleRelativePath", "LogisticGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_WarehouseClass = { "WarehouseClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALogisticGameMode, WarehouseClass), Z_Construct_UClass_AWarehouse_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_WarehouseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_WarehouseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_CarrierPawn_MetaData[] = {
		{ "Comment", "// ?????? ?? ????????\n" },
		{ "ModuleRelativePath", "LogisticGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_CarrierPawn = { "CarrierPawn", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALogisticGameMode, CarrierPawn), Z_Construct_UClass_AResourceCarrierPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_CarrierPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_CarrierPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALogisticGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_WarehouseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALogisticGameMode_Statics::NewProp_CarrierPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALogisticGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALogisticGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALogisticGameMode_Statics::ClassParams = {
		&ALogisticGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALogisticGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALogisticGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALogisticGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALogisticGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALogisticGameMode, 1647948773);
	template<> LOGISTIC_API UClass* StaticClass<ALogisticGameMode>()
	{
		return ALogisticGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALogisticGameMode(Z_Construct_UClass_ALogisticGameMode, &ALogisticGameMode::StaticClass, TEXT("/Script/logistic"), TEXT("ALogisticGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALogisticGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
