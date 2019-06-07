// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/Car/CarPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ACarPawn::StaticRegisterNativesACarPawn()
	{
	}
	UClass* Z_Construct_UClass_ACarPawn_NoRegister()
	{
		return ACarPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Vehicles/Car/CarPawn.h" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_back_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_back_center__MetaData, ARRAY_COUNT(NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_driver__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_driver_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_driver_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_driver_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_driver__MetaData, ARRAY_COUNT(NewProp_camera_driver__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_right_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_right__MetaData, ARRAY_COUNT(NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_left_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_left__MetaData, ARRAY_COUNT(NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_center__MetaData, ARRAY_COUNT(NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_back_center_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_back_center_base__MetaData, ARRAY_COUNT(NewProp_camera_back_center_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_driver_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_driver_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_driver_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_driver_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_driver_base__MetaData, ARRAY_COUNT(NewProp_camera_driver_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_right_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_right_base__MetaData, ARRAY_COUNT(NewProp_camera_front_right_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_left_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_left_base__MetaData, ARRAY_COUNT(NewProp_camera_front_left_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_center_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ACarPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_center_base__MetaData, ARRAY_COUNT(NewProp_camera_front_center_base__MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_back_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_driver_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_right_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_left_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_back_center_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_driver_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_right_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_left_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_center_base_,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACarPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACarPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(ACarPawn, 3398245939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarPawn(Z_Construct_UClass_ACarPawn, &ACarPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("ACarPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
