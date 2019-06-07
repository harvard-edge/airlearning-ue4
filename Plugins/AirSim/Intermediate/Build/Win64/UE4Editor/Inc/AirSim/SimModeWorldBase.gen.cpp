// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimMode/SimModeWorldBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldBase() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void ASimModeWorldBase::StaticRegisterNativesASimModeWorldBase()
	{
	}
	UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister()
	{
		return ASimModeWorldBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimModeWorldBase()
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
				{ "IncludePath", "SimMode/SimModeWorldBase.h" },
				{ "ModuleRelativePath", "SimMode/SimModeWorldBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimModeWorldBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimModeWorldBase::StaticClass,
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
	IMPLEMENT_CLASS(ASimModeWorldBase, 1221976539);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeWorldBase(Z_Construct_UClass_ASimModeWorldBase, &ASimModeWorldBase::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeWorldBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
