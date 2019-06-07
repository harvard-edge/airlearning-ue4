// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weather/WeatherLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherLib() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar();
	AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_actorGetWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_hideWeatherMenu();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_initWeather();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_isMenuVisible();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherEnabled();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_showWeatherMenu();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu();
	AIRSIM_API UFunction* Z_Construct_UFunction_UWeatherLib_widgetGetWorld();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EWeatherParamVector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamVector, Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamVector"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeatherParamVector(EWeatherParamVector_StaticEnum, TEXT("/Script/AirSim"), TEXT("EWeatherParamVector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_EWeatherParamVector_CRC() { return 884425953U; }
	UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeatherParamVector"), 0, Get_Z_Construct_UEnum_AirSim_EWeatherParamVector_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND },
				{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "WEATHER_PARAM_VECTOR_MAX.DisplayName", "MAX" },
				{ "WEATHER_PARAM_VECTOR_WIND.DisplayName", "Wind" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeatherParamVector",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWeatherParamVector",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWeatherParamScalar_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamScalar, Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamScalar"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeatherParamScalar(EWeatherParamScalar_StaticEnum, TEXT("/Script/AirSim"), TEXT("EWeatherParamScalar"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_EWeatherParamScalar_CRC() { return 4278796766U; }
	UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeatherParamScalar"), 0, Get_Z_Construct_UEnum_AirSim_EWeatherParamScalar_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG },
				{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "NOTE: when adding new enums, you must add it to GetWeatherParamScalarName()'s switch statement\nwith a name for the corresponding material collection param name\ncan't use enum's display names because on package those get deleted." },
				{ "WEATHER_PARAM_SCALAR_DUST.DisplayName", "Dust" },
				{ "WEATHER_PARAM_SCALAR_FOG.DisplayName", "Fog" },
				{ "WEATHER_PARAM_SCALAR_MAPLELEAF.DisplayName", "MapleLeaf" },
				{ "WEATHER_PARAM_SCALAR_RAIN.DisplayName", "Rain" },
				{ "WEATHER_PARAM_SCALAR_ROADLEAF.DisplayName", "RoadLeaf" },
				{ "WEATHER_PARAM_SCALAR_ROADSNOW.DisplayName", "RoadSnow" },
				{ "WEATHER_PARAM_SCALAR_ROADWETNESS.DisplayName", "RoadWetness" },
				{ "WEATHER_PARAM_SCALAR_SNOW.DisplayName", "Snow" },
				{ "WEATHER_PARAM_SCALAR_WEATHERENABLED.DisplayName", "WeatherEnabled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeatherParamScalar",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWeatherParamScalar",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWeatherLib::StaticRegisterNativesUWeatherLib()
	{
		UClass* Class = UWeatherLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "actorGetWorld", (Native)&UWeatherLib::execactorGetWorld },
			{ "getIsWeatherEnabled", (Native)&UWeatherLib::execgetIsWeatherEnabled },
			{ "getWeatherParamScalar", (Native)&UWeatherLib::execgetWeatherParamScalar },
			{ "getWeatherWindDirection", (Native)&UWeatherLib::execgetWeatherWindDirection },
			{ "hideWeatherMenu", (Native)&UWeatherLib::exechideWeatherMenu },
			{ "initWeather", (Native)&UWeatherLib::execinitWeather },
			{ "isMenuVisible", (Native)&UWeatherLib::execisMenuVisible },
			{ "setWeatherEnabled", (Native)&UWeatherLib::execsetWeatherEnabled },
			{ "setWeatherParamScalar", (Native)&UWeatherLib::execsetWeatherParamScalar },
			{ "setWeatherWindDirection", (Native)&UWeatherLib::execsetWeatherWindDirection },
			{ "showWeatherMenu", (Native)&UWeatherLib::execshowWeatherMenu },
			{ "toggleWeatherMenu", (Native)&UWeatherLib::exectoggleWeatherMenu },
			{ "widgetGetWorld", (Native)&UWeatherLib::execwidgetGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_actorGetWorld()
	{
		struct WeatherLib_eventactorGetWorld_Parms
		{
			AActor* Actor;
			UWorld* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "blueprint callable function for actor to get world\nsince GetWorld() isn't exposed to bp" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "actorGetWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventactorGetWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled()
	{
		struct WeatherLib_eventgetIsWeatherEnabled_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WeatherLib_eventgetIsWeatherEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeatherLib_eventgetIsWeatherEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetIsWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "getIsWeatherEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventgetIsWeatherEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar()
	{
		struct WeatherLib_eventgetWeatherParamScalar_Parms
		{
			UWorld* World;
			EWeatherParamScalar Param;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Enum, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "getWeatherParamScalar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventgetWeatherParamScalar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection()
	{
		struct WeatherLib_eventgetWeatherWindDirection_Parms
		{
			UWorld* World;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "only vector for now" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "getWeatherWindDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(WeatherLib_eventgetWeatherWindDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_hideWeatherMenu()
	{
		struct WeatherLib_eventhideWeatherMenu_Parms
		{
			UWorld* World;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventhideWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "hideWeatherMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventhideWeatherMenu_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_initWeather()
	{
		struct WeatherLib_eventinitWeather_Parms
		{
			UWorld* World;
			TArray<AActor*> ActorsToAttachTo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToAttachTo = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToAttachTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, ActorsToAttachTo), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToAttachTo_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToAttachTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsToAttachTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorsToAttachTo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "ActorsToAttachTo is an array of actors that we will attach weather particles to\nin most cases, this will be the playable pawns so they will always have weather fx" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "initWeather", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventinitWeather_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_isMenuVisible()
	{
		struct WeatherLib_eventisMenuVisible_Parms
		{
			UWorld* World;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((WeatherLib_eventisMenuVisible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeatherLib_eventisMenuVisible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventisMenuVisible_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "isMenuVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventisMenuVisible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherEnabled()
	{
		struct WeatherLib_eventsetWeatherEnabled_Parms
		{
			UWorld* World;
			bool bEnabled;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((WeatherLib_eventsetWeatherEnabled_Parms*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WeatherLib_eventsetWeatherEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "setWeatherEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventsetWeatherEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar()
	{
		struct WeatherLib_eventsetWeatherParamScalar_Parms
		{
			UWorld* World;
			EWeatherParamScalar Param;
			float Amount;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Enum, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Param_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "only sets or gets one param. need any actor in the world for WorldContextObject, so we can get world" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "setWeatherParamScalar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventsetWeatherParamScalar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection()
	{
		struct WeatherLib_eventsetWeatherWindDirection_Parms
		{
			UWorld* World;
			FVector NewWind;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewWind = { UE4CodeGen_Private::EPropertyClass::Struct, "NewWind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, NewWind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewWind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "in a range of (-1, -1, -1) to (1, 1, 1)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "setWeatherWindDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(WeatherLib_eventsetWeatherWindDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_showWeatherMenu()
	{
		struct WeatherLib_eventshowWeatherMenu_Parms
		{
			UWorld* World;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventshowWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "showWeatherMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventshowWeatherMenu_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu()
	{
		struct WeatherLib_eventtoggleWeatherMenu_Parms
		{
			UWorld* World;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventtoggleWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weather" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "toggleWeatherMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventtoggleWeatherMenu_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWeatherLib_widgetGetWorld()
	{
		struct WeatherLib_eventwidgetGetWorld_Parms
		{
			UUserWidget* Widget;
			UWorld* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "World" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
				{ "ToolTip", "blueprint callable function for widget to get world\nsince GetWorld() isn't exposed to bp\nwidget isnt a subclass of actor, so it needs its own implementation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, "widgetGetWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WeatherLib_eventwidgetGetWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeatherLib_NoRegister()
	{
		return UWeatherLib::StaticClass();
	}
	UClass* Z_Construct_UClass_UWeatherLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWeatherLib_actorGetWorld, "actorGetWorld" }, // 359576670
				{ &Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled, "getIsWeatherEnabled" }, // 2538280669
				{ &Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar, "getWeatherParamScalar" }, // 1352161260
				{ &Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection, "getWeatherWindDirection" }, // 491714867
				{ &Z_Construct_UFunction_UWeatherLib_hideWeatherMenu, "hideWeatherMenu" }, // 1059390388
				{ &Z_Construct_UFunction_UWeatherLib_initWeather, "initWeather" }, // 3127958358
				{ &Z_Construct_UFunction_UWeatherLib_isMenuVisible, "isMenuVisible" }, // 3984461043
				{ &Z_Construct_UFunction_UWeatherLib_setWeatherEnabled, "setWeatherEnabled" }, // 1820985667
				{ &Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar, "setWeatherParamScalar" }, // 2490344489
				{ &Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection, "setWeatherWindDirection" }, // 2480208445
				{ &Z_Construct_UFunction_UWeatherLib_showWeatherMenu, "showWeatherMenu" }, // 3696564077
				{ &Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu, "toggleWeatherMenu" }, // 3791896979
				{ &Z_Construct_UFunction_UWeatherLib_widgetGetWorld, "widgetGetWorld" }, // 4195531091
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Weather/WeatherLib.h" },
				{ "ModuleRelativePath", "Weather/WeatherLib.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWeatherLib>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWeatherLib::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeatherLib, 336332701);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeatherLib(Z_Construct_UClass_UWeatherLib, &UWeatherLib::StaticClass, TEXT("/Script/AirSim"), TEXT("UWeatherLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
