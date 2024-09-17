// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "logistic/ResourceCarrierPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceCarrierPawn() {}
// Cross Module References
	LOGISTIC_API UClass* Z_Construct_UClass_AResourceCarrierPawn_NoRegister();
	LOGISTIC_API UClass* Z_Construct_UClass_AResourceCarrierPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_logistic();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AResourceCarrierPawn::execMoveToWarehouse)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetWarehouse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToWarehouse(Z_Param_TargetWarehouse);
		P_NATIVE_END;
	}
	void AResourceCarrierPawn::StaticRegisterNativesAResourceCarrierPawn()
	{
		UClass* Class = AResourceCarrierPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToWarehouse", &AResourceCarrierPawn::execMoveToWarehouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics
	{
		struct ResourceCarrierPawn_eventMoveToWarehouse_Parms
		{
			AActor* TargetWarehouse;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetWarehouse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::NewProp_TargetWarehouse = { "TargetWarehouse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResourceCarrierPawn_eventMoveToWarehouse_Parms, TargetWarehouse), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::NewProp_TargetWarehouse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// ??????? ??? ??????????? ? ??????\n" },
		{ "ModuleRelativePath", "ResourceCarrierPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceCarrierPawn, nullptr, "MoveToWarehouse", nullptr, nullptr, sizeof(ResourceCarrierPawn_eventMoveToWarehouse_Parms), Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AResourceCarrierPawn_NoRegister()
	{
		return AResourceCarrierPawn::StaticClass();
	}
	struct Z_Construct_UClass_AResourceCarrierPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceCarrierPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_logistic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AResourceCarrierPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResourceCarrierPawn_MoveToWarehouse, "MoveToWarehouse" }, // 1706755857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceCarrierPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ResourceCarrierPawn.h" },
		{ "ModuleRelativePath", "ResourceCarrierPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// ????????? ??? ???????????? Pawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ResourceCarrierPawn.h" },
		{ "ToolTip", "????????? ??? ???????????? Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResourceCarrierPawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_NavSystem_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// ?????????? ??? ???????????? ?? NavMesh\n" },
		{ "ModuleRelativePath", "ResourceCarrierPawn.h" },
		{ "ToolTip", "?????????? ??? ???????????? ?? NavMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_NavSystem = { "NavSystem", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResourceCarrierPawn, NavSystem), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_NavSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_NavSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceCarrierPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceCarrierPawn_Statics::NewProp_NavSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceCarrierPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceCarrierPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AResourceCarrierPawn_Statics::ClassParams = {
		&AResourceCarrierPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AResourceCarrierPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AResourceCarrierPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AResourceCarrierPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AResourceCarrierPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AResourceCarrierPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AResourceCarrierPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AResourceCarrierPawn, 1284469793);
	template<> LOGISTIC_API UClass* StaticClass<AResourceCarrierPawn>()
	{
		return AResourceCarrierPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AResourceCarrierPawn(Z_Construct_UClass_AResourceCarrierPawn, &AResourceCarrierPawn::StaticClass, TEXT("/Script/logistic"), TEXT("AResourceCarrierPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceCarrierPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
