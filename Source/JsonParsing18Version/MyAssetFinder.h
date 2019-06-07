// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyAssetFinder.generated.h"

/**
 * 
 */
UCLASS()
class JSONPARSING18VERSION_API UMyAssetFinder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
		UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static TArray<FString> GetAllRandomAssetNames();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static	TArray<UTexture2D*> GetAllMaterialsAssets();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static	TArray<FString> GetAllMeshAssetNames();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static	TArray<UStaticMesh*> GetAllMeshAssets();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static	TArray<FString> GetAllMaterialsAssetNames();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static	TArray<UStaticMesh*> GetAllDynamicAssets();

	UFUNCTION(BlueprintCallable, Category = "CBluePrintLibrary1")
		static TArray<UMaterial*> GetAllMaterials();
};
