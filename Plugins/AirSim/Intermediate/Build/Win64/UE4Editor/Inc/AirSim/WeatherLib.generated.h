// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
class UUserWidget;
struct FVector;
enum class EWeatherParamScalar : uint8;
#ifdef AIRSIM_WeatherLib_generated_h
#error "WeatherLib.generated.h already included, missing '#pragma once' in WeatherLib.h"
#endif
#define AIRSIM_WeatherLib_generated_h

#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execactorGetWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UWeatherLib::actorGetWorld(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwidgetGetWorld) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UWeatherLib::widgetGetWorld(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectoggleWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::toggleWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisMenuVisible) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWeatherLib::isMenuVisible(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exechideWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::hideWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshowWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::showWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherEnabled) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherEnabled(Z_Param_World,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsWeatherEnabled) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWeatherLib::getIsWeatherEnabled(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherWindDirection) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT(FVector,Z_Param_NewWind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherWindDirection(Z_Param_World,Z_Param_NewWind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeatherWindDirection) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UWeatherLib::getWeatherWindDirection(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeatherParamScalar) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWeatherLib::getWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherParamScalar) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param),Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinitWeather) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_TARRAY(AActor*,Z_Param_ActorsToAttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::initWeather(Z_Param_World,Z_Param_ActorsToAttachTo); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execactorGetWorld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UWeatherLib::actorGetWorld(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwidgetGetWorld) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UWeatherLib::widgetGetWorld(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectoggleWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::toggleWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisMenuVisible) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWeatherLib::isMenuVisible(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exechideWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::hideWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshowWeatherMenu) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::showWeatherMenu(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherEnabled) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherEnabled(Z_Param_World,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsWeatherEnabled) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWeatherLib::getIsWeatherEnabled(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherWindDirection) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT(FVector,Z_Param_NewWind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherWindDirection(Z_Param_World,Z_Param_NewWind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeatherWindDirection) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UWeatherLib::getWeatherWindDirection(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetWeatherParamScalar) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWeatherLib::getWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetWeatherParamScalar) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_ENUM(EWeatherParamScalar,Z_Param_Param); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::setWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param),Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinitWeather) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_TARRAY(AActor*,Z_Param_ActorsToAttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWeatherLib::initWeather(Z_Param_World,Z_Param_ActorsToAttachTo); \
		P_NATIVE_END; \
	}


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UWeatherLib(); \
public: \
	DECLARE_CLASS(UWeatherLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UWeatherLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUWeatherLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UWeatherLib(); \
public: \
	DECLARE_CLASS(UWeatherLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UWeatherLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherLib(UWeatherLib&&); \
	NO_API UWeatherLib(const UWeatherLib&); \
public:


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherLib(UWeatherLib&&); \
	NO_API UWeatherLib(const UWeatherLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherLib)


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_PRIVATE_PROPERTY_OFFSET
#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_37_PROLOG
#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_RPC_WRAPPERS \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_INCLASS \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_PRIVATE_PROPERTY_OFFSET \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_INCLASS_NO_PURE_DECLS \
	airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID airlearning_ue4_Plugins_AirSim_Source_Weather_WeatherLib_h


#define FOREACH_ENUM_EWEATHERPARAMVECTOR(op) \
	op(EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND) 
#define FOREACH_ENUM_EWEATHERPARAMSCALAR(op) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
