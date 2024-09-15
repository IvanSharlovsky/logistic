// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "logistic/Warehouse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarehouse() {}
// Cross Module References
	LOGISTIC_API UClass* Z_Construct_UClass_AWarehouse_NoRegister();
	LOGISTIC_API UClass* Z_Construct_UClass_AWarehouse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_logistic();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWarehouse::StaticRegisterNativesAWarehouse()
	{
	}
	UClass* Z_Construct_UClass_AWarehouse_NoRegister()
	{
		return AWarehouse::StaticClass();
	}
	struct Z_Construct_UClass_AWarehouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResourceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResourceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarehouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_logistic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Warehouse.h" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, ResourceType), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount = { "ResourceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, ResourceAmount), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit = { "StorageLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, StorageLimit), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// ????????? ??? ??????????? ???? ??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarehouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarehouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarehouse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarehouse_Statics::ClassParams = {
		&AWarehouse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWarehouse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarehouse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarehouse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarehouse, 4127054486);
	template<> LOGISTIC_API UClass* StaticClass<AWarehouse>()
	{
		return AWarehouse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarehouse(Z_Construct_UClass_AWarehouse, &AWarehouse::StaticClass, TEXT("/Script/logistic"), TEXT("AWarehouse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarehouse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
