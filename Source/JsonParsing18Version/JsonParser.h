// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JsonParser.generated.h"

USTRUCT()
struct FGameSetting
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY()
		int32 Seed;

		UPROPERTY()
		FString NumLevels;

	UPROPERTY()
		FString EnvType;

	UPROPERTY()
		TArray <FString> ArenaSize;

	UPROPERTY()
		TArray <FString> Walls1;
	UPROPERTY()
		FString MinimumDistance;

	UPROPERTY()
		TArray <FString> PlayerStart;
	UPROPERTY()
		TArray <FString> End;

	UPROPERTY()
		FString NumberOfDynamicObjects;

	UPROPERTY()
		TArray<FString> VelocityRange;

	// for defining flavour of env-gen

	UPROPERTY()
		FString EnvGenFlavor;

	// for normal distribution

	UPROPERTY()
		FString GridSize;
	UPROPERTY()
		FString PeakCongestion;
	UPROPERTY()
		FString SpreadOfObstacles;
	UPROPERTY()
		FString GapSize;

	// for centroids

	UPROPERTY()
		TArray <FString> Centroid1;

	UPROPERTY()
		TArray <FString> Centroid2;

	UPROPERTY()
		TArray <FString> Centroid3;
};
USTRUCT()
struct FIndoorBasic
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		FString Name;

	UPROPERTY()
		TArray <FString> objects;

		UPROPERTY()
		FString NumberOfObjects;
};
USTRUCT()
struct FOutDoorBasic
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		FString Name;

	UPROPERTY()
	TArray <FString> objects;

	UPROPERTY()
		FString NumberOfObjects;

	UPROPERTY()
		FString Weather;

	UPROPERTY()
		FString Wind;
};
USTRUCT()
struct FMain
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		FGameSetting GameSetting;

	UPROPERTY()
		TArray<FIndoorBasic>Indoor;

	UPROPERTY()
		TArray<FOutDoorBasic>Outdoor;

};

UCLASS()
class JSONPARSING18VERSION_API AJsonParser : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJsonParser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FString> Data;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString NumberOfObjects;

	UPROPERTY(EditAnywhere , BlueprintReadWrite)
		TArray<FString> ArenaSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> Walls1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString MinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> PlayerStart;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> End;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Env;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 isValid;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString NumberOfDynamicObjects;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FString> VelocityRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 Seed;

	// for defining flavour of env-gen

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString EnvGenFlavor;

	// for normal distribution

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString GridSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString PeakCongestion;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString SpreadOfObstacles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString GapSize;

	// for centroids

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> Centroid1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> Centroid2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray <FString> Centroid3;
};
