// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/Car/CarWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarWheelFront() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References
	void UCarWheelFront::StaticRegisterNativesUCarWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCarWheelFront_NoRegister()
	{
		return UCarWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UCarWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Vehicles/Car/CarWheelFront.h" },
				{ "ModuleRelativePath", "Vehicles/Car/CarWheelFront.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCarWheelFront>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCarWheelFront::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UCarWheelFront, 3775524038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarWheelFront(Z_Construct_UClass_UCarWheelFront, &UCarWheelFront::StaticClass, TEXT("/Script/AirSim"), TEXT("UCarWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
