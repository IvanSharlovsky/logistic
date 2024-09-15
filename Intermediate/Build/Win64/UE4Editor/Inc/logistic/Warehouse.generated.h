// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGISTIC_Warehouse_generated_h
#error "Warehouse.generated.h already included, missing '#pragma once' in Warehouse.h"
#endif
#define LOGISTIC_Warehouse_generated_h

#define logistic_Source_logistic_Warehouse_h_12_SPARSE_DATA
#define logistic_Source_logistic_Warehouse_h_12_RPC_WRAPPERS
#define logistic_Source_logistic_Warehouse_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define logistic_Source_logistic_Warehouse_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarehouse(); \
	friend struct Z_Construct_UClass_AWarehouse_Statics; \
public: \
	DECLARE_CLASS(AWarehouse, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(AWarehouse)


#define logistic_Source_logistic_Warehouse_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWarehouse(); \
	friend struct Z_Construct_UClass_AWarehouse_Statics; \
public: \
	DECLARE_CLASS(AWarehouse, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(AWarehouse)


#define logistic_Source_logistic_Warehouse_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarehouse(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarehouse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarehouse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarehouse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarehouse(AWarehouse&&); \
	NO_API AWarehouse(const AWarehouse&); \
public:


#define logistic_Source_logistic_Warehouse_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarehouse(AWarehouse&&); \
	NO_API AWarehouse(const AWarehouse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarehouse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarehouse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarehouse)


#define logistic_Source_logistic_Warehouse_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AWarehouse, StaticMesh); }


#define logistic_Source_logistic_Warehouse_h_9_PROLOG
#define logistic_Source_logistic_Warehouse_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_Warehouse_h_12_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_Warehouse_h_12_SPARSE_DATA \
	logistic_Source_logistic_Warehouse_h_12_RPC_WRAPPERS \
	logistic_Source_logistic_Warehouse_h_12_INCLASS \
	logistic_Source_logistic_Warehouse_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define logistic_Source_logistic_Warehouse_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_Warehouse_h_12_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_Warehouse_h_12_SPARSE_DATA \
	logistic_Source_logistic_Warehouse_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	logistic_Source_logistic_Warehouse_h_12_INCLASS_NO_PURE_DECLS \
	logistic_Source_logistic_Warehouse_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGISTIC_API UClass* StaticClass<class AWarehouse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID logistic_Source_logistic_Warehouse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
