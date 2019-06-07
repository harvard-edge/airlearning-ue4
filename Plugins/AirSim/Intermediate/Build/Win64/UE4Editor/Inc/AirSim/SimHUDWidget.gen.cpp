// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimHUD/SimHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUDWidget() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_initializeForPlay();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_setReportText();
	AIRSIM_API UFunction* Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	static FName NAME_USimHUDWidget_getHelpContainerVisibility = FName(TEXT("getHelpContainerVisibility"));
	bool USimHUDWidget::getHelpContainerVisibility()
	{
		SimHUDWidget_eventgetHelpContainerVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getHelpContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getRecordButtonVisibility = FName(TEXT("getRecordButtonVisibility"));
	bool USimHUDWidget::getRecordButtonVisibility()
	{
		SimHUDWidget_eventgetRecordButtonVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getRecordButtonVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getReportContainerVisibility = FName(TEXT("getReportContainerVisibility"));
	bool USimHUDWidget::getReportContainerVisibility()
	{
		SimHUDWidget_eventgetReportContainerVisibility_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getReportContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_getSubwindowVisibility = FName(TEXT("getSubwindowVisibility"));
	int32 USimHUDWidget::getSubwindowVisibility(int32 window_index)
	{
		SimHUDWidget_eventgetSubwindowVisibility_Parms Parms;
		Parms.window_index=window_index;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getSubwindowVisibility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_initializeForPlay = FName(TEXT("initializeForPlay"));
	bool USimHUDWidget::initializeForPlay()
	{
		SimHUDWidget_eventinitializeForPlay_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_initializeForPlay),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setHelpContainerVisibility = FName(TEXT("setHelpContainerVisibility"));
	bool USimHUDWidget::setHelpContainerVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetHelpContainerVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setHelpContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setRecordButtonVisibility = FName(TEXT("setRecordButtonVisibility"));
	bool USimHUDWidget::setRecordButtonVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetRecordButtonVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setRecordButtonVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setReportContainerVisibility = FName(TEXT("setReportContainerVisibility"));
	bool USimHUDWidget::setReportContainerVisibility(bool is_visible)
	{
		SimHUDWidget_eventsetReportContainerVisibility_Parms Parms;
		Parms.is_visible=is_visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportContainerVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setReportText = FName(TEXT("setReportText"));
	bool USimHUDWidget::setReportText(const FString& text)
	{
		SimHUDWidget_eventsetReportText_Parms Parms;
		Parms.text=text;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportText),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USimHUDWidget_setSubwindowVisibility = FName(TEXT("setSubwindowVisibility"));
	bool USimHUDWidget::setSubwindowVisibility(int32 window_index, bool is_visible, UTextureRenderTarget2D* render_target)
	{
		SimHUDWidget_eventsetSubwindowVisibility_Parms Parms;
		Parms.window_index=window_index;
		Parms.is_visible=is_visible ? true : false;
		Parms.render_target=render_target;
		ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setSubwindowVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	void USimHUDWidget::StaticRegisterNativesUSimHUDWidget()
	{
		UClass* Class = USimHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onToggleRecordingButtonClick", (Native)&USimHUDWidget::execonToggleRecordingButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventgetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "getHelpContainerVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventgetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "getRecordButtonVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventgetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "getReportContainerVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_index = { UE4CodeGen_Private::EPropertyClass::Int, "window_index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_window_index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "getSubwindowVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SimHUDWidget_eventgetSubwindowVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_initializeForPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventinitializeForPlay_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventinitializeForPlay_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "initializeForPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SimHUDWidget_eventinitializeForPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Event handler" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "onToggleRecordingButtonClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_is_visible_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->is_visible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "is_visible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_is_visible_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_is_visible,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "setHelpContainerVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_is_visible_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->is_visible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "is_visible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_is_visible_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_is_visible,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "setRecordButtonVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_is_visible_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->is_visible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "is_visible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_is_visible_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_is_visible,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "setReportContainerVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_setReportText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetReportText_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetReportText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_text = { UE4CodeGen_Private::EPropertyClass::Str, "text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimHUDWidget_eventsetReportText_Parms, text), METADATA_PARAMS(NewProp_text_MetaData, ARRAY_COUNT(NewProp_text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "setReportText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SimHUDWidget_eventsetReportText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_render_target = { UE4CodeGen_Private::EPropertyClass::Object, "render_target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, render_target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_is_visible_SetBit = [](void* Obj){ ((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->is_visible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "is_visible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_is_visible_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_index = { UE4CodeGen_Private::EPropertyClass::Int, "window_index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_render_target,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_is_visible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_window_index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "C++ Interface" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
				{ "ToolTip", "below are implemented in Blueprint. The return value is forced to be\nbool even when not needed because of Unreal quirk that if return value\nis not there then below are treated as events instead of overridable functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, "setSubwindowVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimHUDWidget_NoRegister()
	{
		return USimHUDWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_USimHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility, "getHelpContainerVisibility" }, // 152066571
				{ &Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility, "getRecordButtonVisibility" }, // 511282461
				{ &Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility, "getReportContainerVisibility" }, // 1096320785
				{ &Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility, "getSubwindowVisibility" }, // 1935922526
				{ &Z_Construct_UFunction_USimHUDWidget_initializeForPlay, "initializeForPlay" }, // 3686513693
				{ &Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick, "onToggleRecordingButtonClick" }, // 1513410901
				{ &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility, "setHelpContainerVisibility" }, // 3817409067
				{ &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility, "setRecordButtonVisibility" }, // 4128452640
				{ &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility, "setReportContainerVisibility" }, // 2150783737
				{ &Z_Construct_UFunction_USimHUDWidget_setReportText, "setReportText" }, // 3895369156
				{ &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility, "setSubwindowVisibility" }, // 1049133279
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SimHUD/SimHUDWidget.h" },
				{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USimHUDWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USimHUDWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USimHUDWidget, 1800739207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimHUDWidget(Z_Construct_UClass_USimHUDWidget, &USimHUDWidget::StaticClass, TEXT("/Script/AirSim"), TEXT("USimHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
