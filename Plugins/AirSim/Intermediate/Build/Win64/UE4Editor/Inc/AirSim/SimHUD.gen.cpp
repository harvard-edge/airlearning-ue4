// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimHUD/SimHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUD() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_ASimHUD_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
// End Cross Module References
	static UEnum* ESimulatorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ESimulatorMode, Z_Construct_UPackage__Script_AirSim(), TEXT("ESimulatorMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimulatorMode(ESimulatorMode_StaticEnum, TEXT("/Script/AirSim"), TEXT("ESimulatorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_ESimulatorMode_CRC() { return 1259829295U; }
	UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimulatorMode"), 0, Get_Z_Construct_UEnum_AirSim_ESimulatorMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimulatorMode::SIM_MODE_HIL", (int64)ESimulatorMode::SIM_MODE_HIL },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
				{ "SIM_MODE_HIL.DisplayName", "Hardware-in-loop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESimulatorMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESimulatorMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASimHUD::StaticRegisterNativesASimHUD()
	{
	}
	UClass* Z_Construct_UClass_ASimHUD_NoRegister()
	{
		return ASimHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "SimHUD/SimHUD.h" },
				{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_simmode__MetaData[] = {
				{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_simmode_ = { UE4CodeGen_Private::EPropertyClass::Object, "simmode_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimHUD, simmode_), Z_Construct_UClass_ASimModeBase_NoRegister, METADATA_PARAMS(NewProp_simmode__MetaData, ARRAY_COUNT(NewProp_simmode__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget_ = { UE4CodeGen_Private::EPropertyClass::Object, "widget_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ASimHUD, widget_), Z_Construct_UClass_USimHUDWidget_NoRegister, METADATA_PARAMS(NewProp_widget__MetaData, ARRAY_COUNT(NewProp_widget__MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_simmode_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_widget_,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimHUD, 1206064181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimHUD(Z_Construct_UClass_ASimHUD, &ASimHUD::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
