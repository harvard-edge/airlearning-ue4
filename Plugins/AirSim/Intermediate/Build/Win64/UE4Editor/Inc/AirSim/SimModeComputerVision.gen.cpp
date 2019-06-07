// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/ComputerVision/SimModeComputerVision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeComputerVision() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeComputerVision::StaticRegisterNativesASimModeComputerVision()
	{
	}
	UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister()
	{
		return ASimModeComputerVision::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimModeComputerVision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASimModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimModeComputerVision>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimModeComputerVision::StaticClass,
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
	IMPLEMENT_CLASS(ASimModeComputerVision, 698717609);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeComputerVision(Z_Construct_UClass_ASimModeComputerVision, &ASimModeComputerVision::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeComputerVision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeComputerVision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
