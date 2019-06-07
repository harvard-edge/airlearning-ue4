// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_PIPCamera_generated_h
#error "PIPCamera.generated.h already included, missing '#pragma once' in PIPCamera.h"
#endif
#define AIRSIM_PIPCamera_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_RPC_WRAPPERS
#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPIPCamera(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_APIPCamera(); \
public: \
	DECLARE_CLASS(APIPCamera, ACameraActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(APIPCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPIPCamera(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_APIPCamera(); \
public: \
	DECLARE_CLASS(APIPCamera, ACameraActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(APIPCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APIPCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APIPCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APIPCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APIPCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APIPCamera(APIPCamera&&); \
	NO_API APIPCamera(const APIPCamera&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APIPCamera(APIPCamera&&); \
	NO_API APIPCamera(const APIPCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APIPCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APIPCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APIPCamera)


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__captures_() { return STRUCT_OFFSET(APIPCamera, captures_); } \
	FORCEINLINE static uint32 __PPO__render_targets_() { return STRUCT_OFFSET(APIPCamera, render_targets_); } \
	FORCEINLINE static uint32 __PPO__camera_() { return STRUCT_OFFSET(APIPCamera, camera_); } \
	FORCEINLINE static uint32 __PPO__noise_materials_() { return STRUCT_OFFSET(APIPCamera, noise_materials_); } \
	FORCEINLINE static uint32 __PPO__noise_material_static_() { return STRUCT_OFFSET(APIPCamera, noise_material_static_); }


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_16_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_PIPCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
