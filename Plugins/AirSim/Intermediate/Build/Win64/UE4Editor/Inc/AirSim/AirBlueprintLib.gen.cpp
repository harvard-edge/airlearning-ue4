// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AirBlueprintLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirBlueprintLib() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AIRSIM_API UFunction* Z_Construct_UFunction_UAirBlueprintLib_LogMessage();
// End Cross Module References
	static UEnum* LogDebugLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_LogDebugLevel, Z_Construct_UPackage__Script_AirSim(), TEXT("LogDebugLevel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LogDebugLevel(LogDebugLevel_StaticEnum, TEXT("/Script/AirSim"), TEXT("LogDebugLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_LogDebugLevel_CRC() { return 3742173935U; }
	UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LogDebugLevel"), 0, Get_Z_Construct_UEnum_AirSim_LogDebugLevel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LogDebugLevel::Informational", (int64)LogDebugLevel::Informational },
				{ "LogDebugLevel::Success", (int64)LogDebugLevel::Success },
				{ "LogDebugLevel::Failure", (int64)LogDebugLevel::Failure },
				{ "LogDebugLevel::Unimportant", (int64)LogDebugLevel::Unimportant },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failure.DisplayName", "Failure" },
				{ "Informational.DisplayName", "Informational" },
				{ "ModuleRelativePath", "AirBlueprintLib.h" },
				{ "Success.DisplayName", "Success" },
				{ "Unimportant.DisplayName", "Unimportant" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"LogDebugLevel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"LogDebugLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAirBlueprintLib::StaticRegisterNativesUAirBlueprintLib()
	{
		UClass* Class = UAirBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogMessage", (Native)&UAirBlueprintLib::execLogMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAirBlueprintLib_LogMessage()
	{
		struct AirBlueprintLib_eventLogMessage_Parms
		{
			FString prefix;
			FString suffix;
			LogDebugLevel level;
			float persist_sec;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_persist_sec = { UE4CodeGen_Private::EPropertyClass::Float, "persist_sec", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, persist_sec), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_level = { UE4CodeGen_Private::EPropertyClass::Enum, "level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, level), Z_Construct_UEnum_AirSim_LogDebugLevel, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_level_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suffix_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_suffix = { UE4CodeGen_Private::EPropertyClass::Str, "suffix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, suffix), METADATA_PARAMS(NewProp_suffix_MetaData, ARRAY_COUNT(NewProp_suffix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prefix_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_prefix = { UE4CodeGen_Private::EPropertyClass::Str, "prefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, prefix), METADATA_PARAMS(NewProp_prefix_MetaData, ARRAY_COUNT(NewProp_prefix_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_persist_sec,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_level_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_suffix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_prefix,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utils" },
				{ "CPP_Default_persist_sec", "60.000000" },
				{ "ModuleRelativePath", "AirBlueprintLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, "LogMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AirBlueprintLib_eventLogMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister()
	{
		return UAirBlueprintLib::StaticClass();
	}
	UClass* Z_Construct_UClass_UAirBlueprintLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAirBlueprintLib_LogMessage, "LogMessage" }, // 4132826382
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AirBlueprintLib.h" },
				{ "ModuleRelativePath", "AirBlueprintLib.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAirBlueprintLib>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAirBlueprintLib::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UAirBlueprintLib, 1617525602);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAirBlueprintLib(Z_Construct_UClass_UAirBlueprintLib, &UAirBlueprintLib::StaticClass, TEXT("/Script/AirSim"), TEXT("UAirBlueprintLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAirBlueprintLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
