// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AIRSIM_API UFunction* Z_Construct_UFunction_ACameraDirector_getMode();
	AIRSIM_API UFunction* Z_Construct_UFunction_ACameraDirector_setMode();
	AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* ECameraDirectorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ECameraDirectorMode, Z_Construct_UPackage__Script_AirSim(), TEXT("ECameraDirectorMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraDirectorMode(ECameraDirectorMode_StaticEnum, TEXT("/Script/AirSim"), TEXT("ECameraDirectorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AirSim_ECameraDirectorMode_CRC() { return 2327831083U; }
	UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraDirectorMode"), 0, Get_Z_Construct_UEnum_AirSim_ECameraDirectorMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY },
				{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CAMERA_DIRECTOR_MODE_BACKUP.DisplayName", "Backup" },
				{ "CAMERA_DIRECTOR_MODE_FLY_WITH_ME.DisplayName", "FlyWithMe" },
				{ "CAMERA_DIRECTOR_MODE_FPV.DisplayName", "FPV" },
				{ "CAMERA_DIRECTOR_MODE_FRONT.DisplayName", "Front" },
				{ "CAMERA_DIRECTOR_MODE_GROUND_OBSERVER.DisplayName", "GroundObserver" },
				{ "CAMERA_DIRECTOR_MODE_MANUAL.DisplayName", "Manual" },
				{ "CAMERA_DIRECTOR_MODE_NODISPLAY.DisplayName", "No Display" },
				{ "CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE.DisplayName", "SpringArmChase" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECameraDirectorMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECameraDirectorMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
		UClass* Class = ACameraDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMode", (Native)&ACameraDirector::execgetMode },
			{ "setMode", (Native)&ACameraDirector::execsetMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACameraDirector_getMode()
	{
		struct CameraDirector_eventgetMode_Parms
		{
			ECameraDirectorMode ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CameraDirector_eventgetMode_Parms, ReturnValue), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Modes" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraDirector, "getMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraDirector_eventgetMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACameraDirector_setMode()
	{
		struct CameraDirector_eventsetMode_Parms
		{
			ECameraDirectorMode mode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode = { UE4CodeGen_Private::EPropertyClass::Enum, "mode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraDirector_eventsetMode_Parms, mode), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Modes" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraDirector, "setMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CameraDirector_eventsetMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACameraDirector_getMode, "getMode" }, // 1970130307
				{ &Z_Construct_UFunction_ACameraDirector_setMode, "setMode" }, // 1537349107
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CameraDirector.h" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[] = {
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_ = { UE4CodeGen_Private::EPropertyClass::Object, "manual_pose_controller_", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACameraDirector, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(NewProp_manual_pose_controller__MetaData, ARRAY_COUNT(NewProp_manual_pose_controller__MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCamera = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(ACameraDirector, ExternalCamera), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_ExternalCamera_MetaData, ARRAY_COUNT(NewProp_ExternalCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "CameraDirector.h" },
				{ "ToolTip", "Spring arm that will offset the camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b001d, 1, nullptr, STRUCT_OFFSET(ACameraDirector, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_manual_pose_controller_,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACameraDirector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACameraDirector::StaticClass,
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
	IMPLEMENT_CLASS(ACameraDirector, 2447453201);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/AirSim"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
