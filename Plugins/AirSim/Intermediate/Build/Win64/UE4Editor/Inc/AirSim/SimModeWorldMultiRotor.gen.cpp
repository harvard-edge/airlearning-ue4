// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/Multirotor/SimModeWorldMultiRotor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldMultiRotor() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeWorldMultiRotor::StaticRegisterNativesASimModeWorldMultiRotor()
	{
	}
	UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister()
	{
		return ASimModeWorldMultiRotor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimModeWorldMultiRotor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASimModeWorldBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
				{ "ModuleRelativePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimModeWorldMultiRotor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimModeWorldMultiRotor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ASimModeWorldMultiRotor, 1337918574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeWorldMultiRotor(Z_Construct_UClass_ASimModeWorldMultiRotor, &ASimModeWorldMultiRotor::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeWorldMultiRotor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldMultiRotor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
