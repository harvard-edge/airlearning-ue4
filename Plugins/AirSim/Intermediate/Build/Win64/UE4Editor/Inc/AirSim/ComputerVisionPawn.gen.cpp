// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vehicles/ComputerVision/ComputerVisionPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputerVisionPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AComputerVisionPawn::StaticRegisterNativesAComputerVisionPawn()
	{
	}
	UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister()
	{
		return AComputerVisionPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AComputerVisionPawn()
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
				{ "IncludePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_ = { UE4CodeGen_Private::EPropertyClass::Object, "manual_pose_controller_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(NewProp_manual_pose_controller__MetaData, ARRAY_COUNT(NewProp_manual_pose_controller__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_back_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_back_center__MetaData, ARRAY_COUNT(NewProp_camera_back_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_bottom_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_bottom_center__MetaData, ARRAY_COUNT(NewProp_camera_bottom_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_right_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_right__MetaData, ARRAY_COUNT(NewProp_camera_front_right__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_left_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_left__MetaData, ARRAY_COUNT(NewProp_camera_front_left__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_center_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_camera_front_center__MetaData, ARRAY_COUNT(NewProp_camera_front_center__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_back_center_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_back_center_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_back_center_base__MetaData, ARRAY_COUNT(NewProp_camera_back_center_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_bottom_center_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_bottom_center_base__MetaData, ARRAY_COUNT(NewProp_camera_bottom_center_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_right_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_right_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_right_base__MetaData, ARRAY_COUNT(NewProp_camera_front_right_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_left_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_left_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_left_base__MetaData, ARRAY_COUNT(NewProp_camera_front_left_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_front_center_base__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_base_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_front_center_base_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_camera_front_center_base__MetaData, ARRAY_COUNT(NewProp_camera_front_center_base__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class__MetaData[] = {
				{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_pip_camera_class_ = { UE4CodeGen_Private::EPropertyClass::Class, "pip_camera_class_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AComputerVisionPawn, pip_camera_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_pip_camera_class__MetaData, ARRAY_COUNT(NewProp_pip_camera_class__MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_manual_pose_controller_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_back_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_bottom_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_right_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_left_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_center_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_back_center_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_bottom_center_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_right_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_left_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_front_center_base_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pip_camera_class_,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AComputerVisionPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AComputerVisionPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(AComputerVisionPawn, 3744392794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComputerVisionPawn(Z_Construct_UClass_AComputerVisionPawn, &AComputerVisionPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("AComputerVisionPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComputerVisionPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
