// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_CarPawn_generated_h
#error "CarPawn.generated.h already included, missing '#pragma once' in CarPawn.h"
#endif
#define AIRSIM_CarPawn_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACarPawn(); \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACarPawn(); \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarPawn)


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__camera_front_center_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_left_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_base_() { return STRUCT_OFFSET(ACarPawn, camera_front_right_base_); } \
	FORCEINLINE static uint32 __PPO__camera_driver_base_() { return STRUCT_OFFSET(ACarPawn, camera_driver_base_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_base_() { return STRUCT_OFFSET(ACarPawn, camera_back_center_base_); } \
	FORCEINLINE static uint32 __PPO__camera_front_center_() { return STRUCT_OFFSET(ACarPawn, camera_front_center_); } \
	FORCEINLINE static uint32 __PPO__camera_front_left_() { return STRUCT_OFFSET(ACarPawn, camera_front_left_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_() { return STRUCT_OFFSET(ACarPawn, camera_front_right_); } \
	FORCEINLINE static uint32 __PPO__camera_driver_() { return STRUCT_OFFSET(ACarPawn, camera_driver_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_() { return STRUCT_OFFSET(ACarPawn, camera_back_center_); }


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_28_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
