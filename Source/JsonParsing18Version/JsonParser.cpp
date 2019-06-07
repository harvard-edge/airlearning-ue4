// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include "JsonUtilities.h"
#include "Engine.h"

// Sets default values
AJsonParser::AJsonParser()
{
	GLog->Log("Constructor started");
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	GLog->Log("Constructor ended");
}

// Called when the game starts or when spawned
void AJsonParser::BeginPlay()
{
	Super::BeginPlay();

	GLog->Log("beginplay started");
	
	try
	{
		const FString JsonFilePath = FPaths::ProjectContentDir() + "/JsonFiles/EnvGenConfig.json";
		FString JsonString; //Json converted to FString

		FFileHelper::LoadFileToString(JsonString, *JsonFilePath);

		FMain Main;

		bool valid  = FJsonObjectConverter::JsonObjectStringToUStruct<FMain>(JsonString, &Main, 0, 0);
		
		isValid = valid;

		if (valid == 1)
		{
			Data = Main.Indoor[0].objects;
			GLog->Log(JsonString);
			GLog->Log("sfdjngejbfwjqwnoesfjkesngkwbegjkwefbnjk");
			NumberOfObjects = Main.Indoor[0].NumberOfObjects;
			ArenaSize = Main.GameSetting.ArenaSize;
			PlayerStart = Main.GameSetting.PlayerStart;
			End = Main.GameSetting.End;

			for (int32 index = 0; index < Data.Num(); index++)
			{
				GLog->Log("name:" + Data[index]);
			}
			for (int32 index = 0; index < ArenaSize.Num(); index++)
			{
				GLog->Log("Size = " + ArenaSize[index]);
			}
			Env = Main.GameSetting.EnvType;
			MinimumDistance = Main.GameSetting.MinimumDistance;
			Walls1 = Main.GameSetting.Walls1;
			GLog->Log(NumberOfObjects);
			GLog->Log(Env);
			for (int32 index = 0; index < Walls1.Num(); index++)
			{
				GLog->Log("name:" + Walls1[index]);
			}

			//Seed Variable setting
			Seed = Main.GameSetting.Seed;

			//Dynamic part variables
			NumberOfDynamicObjects = Main.GameSetting.NumberOfDynamicObjects;
			VelocityRange = Main.GameSetting.VelocityRange;
			GLog->Log(NumberOfDynamicObjects);
			for (int32 index = 0; index < VelocityRange.Num(); index++)
			{
				GLog->Log("name:" + VelocityRange[index]);
			}
		}
		else
			throw 0;
		
	}
	catch (...)
	{
		GLog->Log("JSON file is not valid");
	}

	

	//const FString JsonFilePath = FPaths::ProjectContentDir() + "/JsonFiles/randomgenerated.json";
	//FString JsonString; //Json converted to FString

	//FFileHelper::LoadFileToString(JsonString,*JsonFilePath);


	//Displaying the json in a string format inside the output log
	//GLog->Log("Json String:");
	//GLog->Log(JsonString);

	//Create a json object to store the information from the json string
	//The json reader is used to deserialize the json object later on
	//TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	//TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);

	//if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	//{

	//FMain Main;
	//FJsonObjectConverter::JsonObjectStringToUStruct<FMain>(JsonString, &Main, 0, 0);

	//Data = Main.Indoor[0].objects;
	//GLog->Log("sfdjngejbfwjqwnoesfjkesngkwbegjkwefbnjk");
	//GLog->Log(Data);


	//for (int32 index = 0; index<Data.Num(); index++)
	//{
	//	GLog->Log("name:" + Data[index]);
	//}


	//The person "object" that is retrieved from the given json file
	//TSharedPtr<FJsonObject> GameSetting = JsonObject->GetObjectField("GameSetting");

	//Getting various properties
	//GLog->Log("ENV_TYPE:" + GameSetting->GetStringField("ENV_TYPE"));
	//GLog->Log("NUM_LEVELS:" + FString::FromInt(GameSetting->GetIntegerField("NUM_LEVELS")));

	//Retrieving an array property and printing each field
	/*TArray<TSharedPtr<FJsonValue>> objArray=PersonObject->GetArrayField("family");
	GLog->Log("printing family names...");
	for(int32 index=0;index<objArray.Num();index++)
	{

	GLog->Log("name:"+objArray[index]->AsString());
	}*/
	//}
	//else
	//{
	//	GLog->Log("couldn't deserialize");
	//}
	GLog->Log("BeginPlay ended");
}

// Called every frame
void AJsonParser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



/*
//for regular properties:
void AJsonParser::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
FName PropertyName = (e.Property != NULL) ? e.Property->GetFName() : NAME_None;
if (PropertyName == GET_MEMBER_NAME_CHECKED(AJsonParser, Arena_Size_X))
{
//various uproperty tricks, see link
//	UObject temp = e.GetObjectBeingEdited(0);
}
Super::PostEditChangeProperty(e);
}
*/
//for TArrays:
/*void AJsonParser::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& e)
{
int32 index = e.GetArrayIndex(TEXT("Meshes")); //checks skipped
UStaticMesh *mesh = Meshes[index]; //changed mesh
Super::PostEditChangeChainProperty(e);
}*/







// As a test just retrieve a stock texture to assign as the parameter
/*
std::string a = "Texture2D'/Game/Textures/T_Fire_Tiled_D.T_Fire_Tiled_D'";
std::wstring b(a.begin(), a.end());
UTexture *theTexture = LoadObject<UTexture>(NULL, b.c_str());

std::string ts = "MaterialInstanceConstant'/Game/Materials/TerrainMaterial_Inst.TerrainMaterial_Inst'";
std::wstring ws(ts.begin(), ts.end());
UMaterialInstance *terrainMaterialInstance = LoadObject<UMaterialInstance>(NULL, ws.c_str());
UMaterialInstanceDynamic *dynamicTerrainMaterialInstance = UMaterialInstanceDynamic::Create(terrainMaterialInstance, NULL);
dynamicTerrainMaterialInstance->SetTextureParameterValue("TerrainTexture", theTexture);
Component->SetMaterial(0, terrainMaterialInstance);
*/