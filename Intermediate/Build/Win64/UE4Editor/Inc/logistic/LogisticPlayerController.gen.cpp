// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "logistic/LogisticPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogisticPlayerController() {}
// Cross Module References
	LOGISTIC_API UClass* Z_Construct_UClass_ALogisticPlayerController_NoRegister();
	LOGISTIC_API UClass* Z_Construct_UClass_ALogisticPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_logistic();
// End Cross Module References
	void ALogisticPlayerController::StaticRegisterNativesALogisticPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALogisticPlayerController_NoRegister()
	{
		return ALogisticPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALogisticPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALogisticPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_logistic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogisticPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LogisticPlayerController.h" },
		{ "ModuleRelativePath", "LogisticPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogisticPlayerController_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "LogisticPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALogisticPlayerController_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALogisticPlayerController, CameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ALogisticPlayerController_Statics::NewProp_CameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticPlayerController_Statics::NewProp_CameraSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALogisticPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALogisticPlayerController_Statics::NewProp_CameraSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALogisticPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALogisticPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALogisticPlayerController_Statics::ClassParams = {
		&ALogisticPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALogisticPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALogisticPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALogisticPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALogisticPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALogisticPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALogisticPlayerController, 1466718055);
	template<> LOGISTIC_API UClass* StaticClass<ALogisticPlayerController>()
	{
		return ALogisticPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALogisticPlayerController(Z_Construct_UClass_ALogisticPlayerController, &ALogisticPlayerController::StaticClass, TEXT("/Script/logistic"), TEXT("ALogisticPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALogisticPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
