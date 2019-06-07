// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAssetFinder.h"
#include "Engine.h"


TArray<FString> UMyAssetFinder::GetAllRandomAssetNames()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UWorld::StaticClass(), false, true);
	ObjectLibrary->LoadAssetDataFromPath(TEXT("/Game/Maps"));
	TArray<FAssetData> AssetDatas;
	ObjectLibrary->GetAssetDataList(AssetDatas);
	UE_LOG(LogTemp, Warning, TEXT("Found maps: %d"), AssetDatas.Num());

	TArray<FString> Names = TArray<FString>();

	for (int32 i = 0; i < AssetDatas.Num(); ++i)
	{
		FAssetData& AssetData = AssetDatas[i];

		auto name = AssetData.AssetName.ToString();
		Names.Add(name);
	}
	return Names;
}
TArray<UTexture2D*> UMyAssetFinder::GetAllMaterialsAssets()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UTexture::StaticClass(), false, true);
	ObjectLibrary->LoadAssetsFromPath(TEXT("/Game/Textures"));

	TArray<UTexture2D*> Textures = TArray<UTexture2D*>();
	ObjectLibrary->GetObjects(Textures);
	UE_LOG(LogTemp, Warning, TEXT("Found materials: %d"), Textures.Num());

	return Textures;
}

TArray<FString> UMyAssetFinder::GetAllMeshAssetNames()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UStaticMesh::StaticClass(), false, true);
	ObjectLibrary->LoadAssetDataFromPath(TEXT("/Game/Models"));
	TArray<FAssetData> AssetDatas;
	ObjectLibrary->GetAssetDataList(AssetDatas);
	UE_LOG(LogTemp, Warning, TEXT("Found maps: %d"), AssetDatas.Num());

	TArray<FString> Names = TArray<FString>();

	for (int32 i = 0; i < AssetDatas.Num(); ++i)
	{
		FAssetData& AssetData = AssetDatas[i];

		auto name = AssetData.AssetName.ToString();
		Names.Add(name);
	}
	return Names;
}
TArray<UStaticMesh*> UMyAssetFinder::GetAllMeshAssets()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UStaticMesh::StaticClass(), false, true);
	ObjectLibrary->LoadAssetsFromPath(TEXT("/Game/Models"));

	TArray<UStaticMesh*> Models = TArray<UStaticMesh*>();
	ObjectLibrary->GetObjects(Models);
	UE_LOG(LogTemp, Warning, TEXT("Found materials: %d"), Models.Num());

	return Models;
}
TArray<FString> UMyAssetFinder::GetAllMaterialsAssetNames()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UTexture::StaticClass(), false, true);
	FString k = "/Game/Textures";
	ObjectLibrary->LoadAssetDataFromPath(k);
	TArray<FAssetData> AssetDatas;
	ObjectLibrary->GetAssetDataList(AssetDatas);
	UE_LOG(LogTemp, Warning, TEXT("Found materials: %d"), AssetDatas.Num());

	TArray<FString> Names = TArray<FString>();

	for (int32 i = 0; i < AssetDatas.Num(); ++i)
	{
		FAssetData& AssetData = AssetDatas[i];

		auto name = AssetData.AssetName.ToString();
		Names.Add(name);
	}
	return Names;
}

//dynamic mesh fetching function of "Dynamic" folder
TArray<UStaticMesh*> UMyAssetFinder::GetAllDynamicAssets()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UStaticMesh::StaticClass(), false, true);
	ObjectLibrary->LoadAssetsFromPath(TEXT("/Game/Dynamic"));

	TArray<UStaticMesh*> Models = TArray<UStaticMesh*>();
	ObjectLibrary->GetObjects(Models);
	UE_LOG(LogTemp, Warning, TEXT("Found meshes: %d"), Models.Num());

	return Models;
}

TArray<UMaterial*> UMyAssetFinder::GetAllMaterials()
{
	auto ObjectLibrary = UObjectLibrary::CreateLibrary(UMaterial::StaticClass(), false, true);
	ObjectLibrary->LoadAssetsFromPath(TEXT("/Game/Materials"));

	TArray<UMaterial*> Materials = TArray<UMaterial*>();
	ObjectLibrary->GetObjects(Materials);
	UE_LOG(LogTemp, Warning, TEXT("Found materials: %d"), Materials.Num());

	return Materials;
}