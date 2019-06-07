// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class LogDebugLevel : uint8;
#ifdef AIRSIM_AirBlueprintLib_generated_h
#error "AirBlueprintLib.generated.h already included, missing '#pragma once' in AirBlueprintLib.h"
#endif
#define AIRSIM_AirBlueprintLib_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UAirBlueprintLib(); \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UAirBlueprintLib(); \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib)


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_PRIVATE_PROPERTY_OFFSET
#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_37_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_AirBlueprintLib_h


#define FOREACH_ENUM_LOGDEBUGLEVEL(op) \
	op(LogDebugLevel::Informational) \
	op(LogDebugLevel::Success) \
	op(LogDebugLevel::Failure) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
