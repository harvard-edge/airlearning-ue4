// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_SimModeBase_generated_h
#error "SimModeBase.generated.h already included, missing '#pragma once' in SimModeBase.h"
#endif
#define AIRSIM_SimModeBase_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exectoggleRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->toggleRecording(); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exectoggleRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->toggleRecording(); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimModeBase(); \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimModeBase(); \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimModeBase)


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pip_camera_class() { return STRUCT_OFFSET(ASimModeBase, pip_camera_class); } \
	FORCEINLINE static uint32 __PPO__collision_display_template() { return STRUCT_OFFSET(ASimModeBase, collision_display_template); } \
	FORCEINLINE static uint32 __PPO__external_camera_class_() { return STRUCT_OFFSET(ASimModeBase, external_camera_class_); } \
	FORCEINLINE static uint32 __PPO__camera_director_class_() { return STRUCT_OFFSET(ASimModeBase, camera_director_class_); } \
	FORCEINLINE static uint32 __PPO__sky_sphere_class_() { return STRUCT_OFFSET(ASimModeBase, sky_sphere_class_); } \
	FORCEINLINE static uint32 __PPO__sky_sphere_() { return STRUCT_OFFSET(ASimModeBase, sky_sphere_); } \
	FORCEINLINE static uint32 __PPO__sun_() { return STRUCT_OFFSET(ASimModeBase, sun_); } \
	FORCEINLINE static uint32 __PPO__spawned_actors_() { return STRUCT_OFFSET(ASimModeBase, spawned_actors_); }


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_21_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_SimMode_SimModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
