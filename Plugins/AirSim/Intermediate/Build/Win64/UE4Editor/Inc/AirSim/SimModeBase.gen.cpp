// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimMode/SimModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeBase() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UFunction* Z_Construct_UFunction_ASimModeBase_toggleRecording();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
// End Cross Module References
	void ASimModeBase::StaticRegisterNativesASimModeBase()
	{
		UClass* Class = ASimModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "toggleRecording", (Native)&ASimModeBase::exectoggleRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASimModeBase_toggleRecording()
	{
		struct SimModeBase_eventtoggleRecording_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimModeBase_eventtoggleRecording_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimModeBase_eventtoggleRecording_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Recording" },
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, "toggleRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SimModeBase_eventtoggleRecording_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimModeBase_NoRegister()
	{
		return ASimModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASimModeBase_toggleRecording, "toggleRecording" }, // 188043050
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SimMode/SimModeBase.h" },
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawned_actors__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawned_actors_ = { UE4CodeGen_Private::EPropertyClass::Array, "spawned_actors_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, spawned_actors_), METADATA_PARAMS(NewProp_spawned_actors__MetaData, ARRAY_COUNT(NewProp_spawned_actors__MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawned_actors__Inner = { UE4CodeGen_Private::EPropertyClass::Object, "spawned_actors_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sun__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sun_ = { UE4CodeGen_Private::EPropertyClass::Object, "sun_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, sun_), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(NewProp_sun__MetaData, ARRAY_COUNT(NewProp_sun__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sky_sphere__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sky_sphere_ = { UE4CodeGen_Private::EPropertyClass::Object, "sky_sphere_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, sky_sphere_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_sky_sphere__MetaData, ARRAY_COUNT(NewProp_sky_sphere__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sky_sphere_class__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_sky_sphere_class_ = { UE4CodeGen_Private::EPropertyClass::Class, "sky_sphere_class_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, sky_sphere_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_sky_sphere_class__MetaData, ARRAY_COUNT(NewProp_sky_sphere_class__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_director_class__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_camera_director_class_ = { UE4CodeGen_Private::EPropertyClass::Class, "camera_director_class_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, camera_director_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_camera_director_class__MetaData, ARRAY_COUNT(NewProp_camera_director_class__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_external_camera_class__MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
				{ "ToolTip", "assets loaded in constructor" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_external_camera_class_ = { UE4CodeGen_Private::EPropertyClass::Class, "external_camera_class_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, external_camera_class_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_external_camera_class__MetaData, ARRAY_COUNT(NewProp_external_camera_class__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collision_display_template_MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collision_display_template = { UE4CodeGen_Private::EPropertyClass::Object, "collision_display_template", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, collision_display_template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_collision_display_template_MetaData, ARRAY_COUNT(NewProp_collision_display_template_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class_MetaData[] = {
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_pip_camera_class = { UE4CodeGen_Private::EPropertyClass::Class, "pip_camera_class", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ASimModeBase, pip_camera_class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_pip_camera_class_MetaData, ARRAY_COUNT(NewProp_pip_camera_class_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableReport_MetaData[] = {
				{ "Category", "Debugging" },
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			auto NewProp_EnableReport_SetBit = [](void* Obj){ ((ASimModeBase*)Obj)->EnableReport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableReport = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableReport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASimModeBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableReport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableReport_MetaData, ARRAY_COUNT(NewProp_EnableReport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDirector_MetaData[] = {
				{ "Category", "Refs" },
				{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraDirector = { UE4CodeGen_Private::EPropertyClass::Object, "CameraDirector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASimModeBase, CameraDirector), Z_Construct_UClass_ACameraDirector_NoRegister, METADATA_PARAMS(NewProp_CameraDirector_MetaData, ARRAY_COUNT(NewProp_CameraDirector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spawned_actors_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_spawned_actors__Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sun_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sky_sphere_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sky_sphere_class_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera_director_class_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_external_camera_class_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_collision_display_template,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pip_camera_class,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableReport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraDirector,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASimModeBase, 467085163);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimModeBase(Z_Construct_UClass_ASimModeBase, &ASimModeBase::StaticClass, TEXT("/Script/AirSim"), TEXT("ASimModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
