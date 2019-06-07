// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_ComputerVisionPawn_generated_h
#error "ComputerVisionPawn.generated.h already included, missing '#pragma once' in ComputerVisionPawn.h"
#endif
#define AIRSIM_ComputerVisionPawn_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_RPC_WRAPPERS
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComputerVisionPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_AComputerVisionPawn(); \
public: \
	DECLARE_CLASS(AComputerVisionPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AComputerVisionPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAComputerVisionPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_AComputerVisionPawn(); \
public: \
	DECLARE_CLASS(AComputerVisionPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AComputerVisionPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComputerVisionPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComputerVisionPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComputerVisionPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComputerVisionPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComputerVisionPawn(AComputerVisionPawn&&); \
	NO_API AComputerVisionPawn(const AComputerVisionPawn&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComputerVisionPawn(AComputerVisionPawn&&); \
	NO_API AComputerVisionPawn(const AComputerVisionPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComputerVisionPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComputerVisionPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AComputerVisionPawn)


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pip_camera_class_() { return STRUCT_OFFSET(AComputerVisionPawn, pip_camera_class_); } \
	FORCEINLINE static uint32 __PPO__camera_front_center_base_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_base_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_base_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_base_); } \
	FORCEINLINE static uint32 __PPO__camera_bottom_center_base_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_base_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_center_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_); } \
	FORCEINLINE static uint32 __PPO__camera_bottom_center_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_() { return STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_); } \
	FORCEINLINE static uint32 __PPO__manual_pose_controller_() { return STRUCT_OFFSET(AComputerVisionPawn, manual_pose_controller_); }


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_18_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
