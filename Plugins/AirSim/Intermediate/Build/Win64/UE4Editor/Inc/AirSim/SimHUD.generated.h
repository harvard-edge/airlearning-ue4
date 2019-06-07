// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_SimHUD_generated_h
#error "SimHUD.generated.h already included, missing '#pragma once' in SimHUD.h"
#endif
#define AIRSIM_SimHUD_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_RPC_WRAPPERS
#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimHUD(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimHUD(); \
public: \
	DECLARE_CLASS(ASimHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASimHUD(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimHUD(); \
public: \
	DECLARE_CLASS(ASimHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimHUD(ASimHUD&&); \
	NO_API ASimHUD(const ASimHUD&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimHUD(ASimHUD&&); \
	NO_API ASimHUD(const ASimHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimHUD)


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__widget_() { return STRUCT_OFFSET(ASimHUD, widget_); } \
	FORCEINLINE static uint32 __PPO__simmode_() { return STRUCT_OFFSET(ASimHUD, simmode_); }


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_19_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_SimHUD_SimHUD_h


#define FOREACH_ENUM_ESIMULATORMODE(op) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
