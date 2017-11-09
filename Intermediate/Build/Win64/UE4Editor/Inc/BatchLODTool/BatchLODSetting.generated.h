// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATCHLODTOOL_BatchLODSetting_generated_h
#error "BatchLODSetting.generated.h already included, missing '#pragma once' in BatchLODSetting.h"
#endif
#define BATCHLODTOOL_BatchLODSetting_generated_h

#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_16_GENERATED_BODY \
	friend BATCHLODTOOL_API class UScriptStruct* Z_Construct_UScriptStruct_FLODSetting(); \
	BATCHLODTOOL_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_RPC_WRAPPERS
#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBatchLODSetting(); \
	friend BATCHLODTOOL_API class UClass* Z_Construct_UClass_UBatchLODSetting(); \
public: \
	DECLARE_CLASS(UBatchLODSetting, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/BatchLODTool"), NO_API) \
	DECLARE_SERIALIZER(UBatchLODSetting) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUBatchLODSetting(); \
	friend BATCHLODTOOL_API class UClass* Z_Construct_UClass_UBatchLODSetting(); \
public: \
	DECLARE_CLASS(UBatchLODSetting, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/BatchLODTool"), NO_API) \
	DECLARE_SERIALIZER(UBatchLODSetting) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBatchLODSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBatchLODSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBatchLODSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBatchLODSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBatchLODSetting(UBatchLODSetting&&); \
	NO_API UBatchLODSetting(const UBatchLODSetting&); \
public:


#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBatchLODSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBatchLODSetting(UBatchLODSetting&&); \
	NO_API UBatchLODSetting(const UBatchLODSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBatchLODSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBatchLODSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBatchLODSetting)


#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_40_PROLOG
#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_RPC_WRAPPERS \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_INCLASS \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BatchLODSetting."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_BatchLODTool_Source_BatchLODTool_Public_BatchLODSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
