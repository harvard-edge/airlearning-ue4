// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/Multirotor/FlyingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
// End Cross Module References
	void AFlyingPawn::StaticRegisterNativesAFlyingPawn()
	{
	}
	UClass* Z_Construct_UClass_AFlyingPawn_NoRegister()
	{
		return AFlyingPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AFlyingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Vehicles/Multirotor/FlyingPawn.h" },
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotating_movements__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rotating_movements_ = { UE4CodeGen_Private::EPropertyClass::Object, "rotating_movements_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, CPP_ARRAY_DIM(rotating_movements_, AFlyingPawn), nullptr, STRUCT_OFFSET(AFlyingPawn, rotating_movements_), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(NewProp_rotating_movements__MetaData, ARRAY_COUNT(NewProp_rotating_movements__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_bottom_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_bottom_center__MetaData, ARRAY_COUNT(NewProp_camera_bottom_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_back_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_back_center__MetaData, ARRAY_COUNT(NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_center__MetaData, ARRAY_COUNT(NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_right_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_right__MetaData, ARRAY_COUNT(NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_left_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_left__MetaData, ARRAY_COUNT(NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorFactor_MetaData[] = {
				{ "Category", "Debugging" },
				{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotatorFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RotatorFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlyingPawn, RotatorFactor), METADATA_PARAMS(NewProp_RotatorFactor_MetaData, ARRAY_COUNT(NewProp_RotatorFactor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rotating_movements_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_bottom_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_back_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_right_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_left_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotatorFactor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFlyingPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFlyingPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlyingPawn, 1467308948);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlyingPawn(Z_Construct_UClass_AFlyingPawn, &AFlyingPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("AFlyingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
