// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOGISTIC_LogisticPlayerController_generated_h
#error "LogisticPlayerController.generated.h already included, missing '#pragma once' in LogisticPlayerController.h"
#endif
#define LOGISTIC_LogisticPlayerController_generated_h

#define logistic_Source_logistic_LogisticPlayerController_h_14_SPARSE_DATA
#define logistic_Source_logistic_LogisticPlayerController_h_14_RPC_WRAPPERS
#define logistic_Source_logistic_LogisticPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define logistic_Source_logistic_LogisticPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALogisticPlayerController(); \
	friend struct Z_Construct_UClass_ALogisticPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALogisticPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(ALogisticPlayerController)


#define logistic_Source_logistic_LogisticPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALogisticPlayerController(); \
	friend struct Z_Construct_UClass_ALogisticPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALogisticPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/logistic"), NO_API) \
	DECLARE_SERIALIZER(ALogisticPlayerController)


#define logistic_Source_logistic_LogisticPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALogisticPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALogisticPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogisticPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogisticPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogisticPlayerController(ALogisticPlayerController&&); \
	NO_API ALogisticPlayerController(const ALogisticPlayerController&); \
public:


#define logistic_Source_logistic_LogisticPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogisticPlayerController(ALogisticPlayerController&&); \
	NO_API ALogisticPlayerController(const ALogisticPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogisticPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogisticPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALogisticPlayerController)


#define logistic_Source_logistic_LogisticPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraSpeed() { return STRUCT_OFFSET(ALogisticPlayerController, CameraSpeed); }


#define logistic_Source_logistic_LogisticPlayerController_h_11_PROLOG
#define logistic_Source_logistic_LogisticPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_LogisticPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_LogisticPlayerController_h_14_SPARSE_DATA \
	logistic_Source_logistic_LogisticPlayerController_h_14_RPC_WRAPPERS \
	logistic_Source_logistic_LogisticPlayerController_h_14_INCLASS \
	logistic_Source_logistic_LogisticPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define logistic_Source_logistic_LogisticPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	logistic_Source_logistic_LogisticPlayerController_h_14_PRIVATE_PROPERTY_OFFSET \
	logistic_Source_logistic_LogisticPlayerController_h_14_SPARSE_DATA \
	logistic_Source_logistic_LogisticPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	logistic_Source_logistic_LogisticPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	logistic_Source_logistic_LogisticPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGISTIC_API UClass* StaticClass<class ALogisticPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID logistic_Source_logistic_LogisticPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
