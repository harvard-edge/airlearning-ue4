// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PIPCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIPCamera() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void APIPCamera::StaticRegisterNativesAPIPCamera()
	{
	}
	UClass* Z_Construct_UClass_APIPCamera_NoRegister()
	{
		return APIPCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_APIPCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACameraActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Rendering" },
				{ "IncludePath", "PIPCamera.h" },
				{ "ModuleRelativePath", "PIPCamera.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noise_material_static__MetaData[] = {
				{ "ModuleRelativePath", "PIPCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noise_material_static_ = { UE4CodeGen_Private::EPropertyClass::Object, "noise_material_static_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APIPCamera, noise_material_static_), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_noise_material_static__MetaData, ARRAY_COUNT(NewProp_noise_material_static__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noise_materials__MetaData[] = {
				{ "ModuleRelativePath", "PIPCamera.h" },
				{ "ToolTip", "TMap<int, UMaterialInstanceDynamic*> noise_materials_;\nbelow is needed because TMap doesn't work with UPROPERTY, but we do have -ve index" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_noise_materials_ = { UE4CodeGen_Private::EPropertyClass::Array, "noise_materials_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APIPCamera, noise_materials_), METADATA_PARAMS(NewProp_noise_materials__MetaData, ARRAY_COUNT(NewProp_noise_materials__MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_noise_materials__Inner = { UE4CodeGen_Private::EPropertyClass::Object, "noise_materials_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PIPCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera_ = { UE4CodeGen_Private::EPropertyClass::Object, "camera_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(APIPCamera, camera_), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_camera__MetaData, ARRAY_COUNT(NewProp_camera__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_targets__MetaData[] = {
				{ "ModuleRelativePath", "PIPCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_render_targets_ = { UE4CodeGen_Private::EPropertyClass::Array, "render_targets_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(APIPCamera, render_targets_), METADATA_PARAMS(NewProp_render_targets__MetaData, ARRAY_COUNT(NewProp_render_targets__MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_render_targets__Inner = { UE4CodeGen_Private::EPropertyClass::Object, "render_targets_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_captures__MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PIPCamera.h" },
				{ "ToolTip", "members" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_captures_ = { UE4CodeGen_Private::EPropertyClass::Array, "captures_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(APIPCamera, captures_), METADATA_PARAMS(NewProp_captures__MetaData, ARRAY_COUNT(NewProp_captures__MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_captures__Inner = { UE4CodeGen_Private::EPropertyClass::Object, "captures_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noise_material_static_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noise_materials_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_noise_materials__Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_render_targets_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_render_targets__Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_captures_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_captures__Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APIPCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APIPCamera::StaticClass,
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
	IMPLEMENT_CLASS(APIPCamera, 2379721573);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APIPCamera(Z_Construct_UClass_APIPCamera, &APIPCamera::StaticClass, TEXT("/Script/AirSim"), TEXT("APIPCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APIPCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
