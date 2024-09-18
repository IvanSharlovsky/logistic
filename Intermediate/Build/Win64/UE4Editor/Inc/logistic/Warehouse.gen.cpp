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
	DEFINE_FUNCTION(AWarehouse::execRemoveResource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveResource(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWarehouse::execAddResource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddResource(Z_Param_Amount);
		P_NATIVE_END;
	}
	void AWarehouse::StaticRegisterNativesAWarehouse()
	{
		UClass* Class = AWarehouse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddResource", &AWarehouse::execAddResource },
			{ "RemoveResource", &AWarehouse::execRemoveResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWarehouse_AddResource_Statics
	{
		struct Warehouse_eventAddResource_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Warehouse_eventAddResource_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warehouse_eventAddResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warehouse_eventAddResource_Parms), &Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarehouse_AddResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarehouse_AddResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarehouse_AddResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ????? ??? ?????????? ???????\n" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarehouse_AddResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarehouse, nullptr, "AddResource", nullptr, nullptr, sizeof(Warehouse_eventAddResource_Parms), Z_Construct_UFunction_AWarehouse_AddResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarehouse_AddResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarehouse_AddResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarehouse_AddResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarehouse_AddResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarehouse_AddResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWarehouse_RemoveResource_Statics
	{
		struct Warehouse_eventRemoveResource_Parms
		{
			int32 Amount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Warehouse_eventRemoveResource_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warehouse_eventRemoveResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warehouse_eventRemoveResource_Parms), &Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ????? ??? ?????????? ???????\n" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarehouse, nullptr, "RemoveResource", nullptr, nullptr, sizeof(Warehouse_eventRemoveResource_Parms), Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarehouse_RemoveResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarehouse_RemoveResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWarehouse_NoRegister()
	{
		return AWarehouse::StaticClass();
	}
	struct Z_Construct_UClass_AWarehouse_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarehouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_logistic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWarehouse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarehouse_AddResource, "AddResource" }, // 1475594396
		{ &Z_Construct_UFunction_AWarehouse_RemoveResource, "RemoveResource" }, // 112003794
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Warehouse.h" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// ????????? ??? ??????????? ???? ??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ??? ???????, ??????? ?????? ????? (?? 0 ?? 49 ??? 50 ????? ????????)\n" },
		{ "ModuleRelativePath", "Warehouse.h" },
		{ "ToolTip", "??? ???????, ??????? ?????? ????? (?? 0 ?? 49 ??? 50 ????? ????????)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, ResourceType), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ?????????? ??????? ?? ??????\n" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount = { "ResourceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, ResourceAmount), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData[] = {
		{ "Category", "Warehouse" },
		{ "Comment", "// ???????????? ??????????? ??????? ?? ??????\n" },
		{ "ModuleRelativePath", "Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit = { "StorageLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, StorageLimit), METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarehouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_ResourceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_StorageLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarehouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarehouse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarehouse_Statics::ClassParams = {
		&AWarehouse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWarehouse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AWarehouse, 3843116343);
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
