// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGISTIC_LogisticGameMode_generated_h
#error "LogisticGameMode.generated.h already included, missing '#pragma once' in LogisticGameMode.h"
#endif
#define LOGISTIC_LogisticGameMode_generated_h

#define logistic_Source_logistic_LogisticGameMode_h_12_SPARSE_DATA
#define logistic_Source_logistic_LogisticGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnWarehouse);


#define logistic_Source_logistic_LogisticGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnWarehouse);


#define logistic_Source_logistic_LogisticGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALogisticGameMode(); \
	friend struct Z_Construct_UClass_ALogisticGameMode_Statics; \
public: \
	DECLARE_CLASS(ALogisticGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(ALogisticGameMode)


#define logistic_Source_logistic_LogisticGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALogisticGameMode(); \
	friend struct Z_Construct_UClass_ALogisticGameMode_Statics; \
public: \
	DECLARE_CLASS(ALogisticGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(ALogisticGameMode)


#define logistic_Source_logistic_LogisticGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALogisticGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALogisticGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogisticGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogisticGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogisticGameMode(ALogisticGameMode&&); \
	NO_API ALogisticGameMode(const ALogisticGameMode&); \
public:


#define logistic_Source_logistic_LogisticGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALogisticGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogisticGameMode(ALogisticGameMode&&); \
	NO_API ALogisticGameMode(const ALogisticGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogisticGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogisticGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALogisticGameMode)


#define logistic_Source_logistic_LogisticGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WarehouseClass() { return STRUCT_OFFSET(ALogisticGameMode, WarehouseClass); } \
	FORCEINLINE static uint32 __PPO__CarrierPawn() { return STRUCT_OFFSET(ALogisticGameMode, CarrierPawn); }


#define logistic_Source_logistic_LogisticGameMode_h_9_PROLOG
#define logistic_Source_logistic_LogisticGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_LogisticGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_LogisticGameMode_h_12_SPARSE_DATA \
	logistic_Source_logistic_LogisticGameMode_h_12_RPC_WRAPPERS \
	logistic_Source_logistic_LogisticGameMode_h_12_INCLASS \
	logistic_Source_logistic_LogisticGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define logistic_Source_logistic_LogisticGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_LogisticGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_LogisticGameMode_h_12_SPARSE_DATA \
	logistic_Source_logistic_LogisticGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	logistic_Source_logistic_LogisticGameMode_h_12_INCLASS_NO_PURE_DECLS \
	logistic_Source_logistic_LogisticGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGISTIC_API UClass* StaticClass<class ALogisticGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID logistic_Source_logistic_LogisticGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
