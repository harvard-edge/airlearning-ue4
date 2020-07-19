// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include "JsonUtilities.h"
#include "Engine.h"
#include "EnvGenObstacle.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <numeric>

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
	
	//try
	//{
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

			// for env-gen flavor

			EnvGenFlavor = Main.GameSetting.EnvGenFlavor;

			// for normal distribution

			GridSize = Main.GameSetting.GridSize;
			PeakCongestion = Main.GameSetting.PeakCongestion;
			SpreadOfObstacles = Main.GameSetting.SpreadOfObstacles;
			GapSize = Main.GameSetting.GapSize;

			// for centroids

			Centroid1 = Main.GameSetting.Centroid1;
			Centroid2 = Main.GameSetting.Centroid2;
			Centroid3 = Main.GameSetting.Centroid3;
		}
		else
			//throw 0;
			GLog->Log("JSON file is not valid");
		
	//}
	//catch (...)
	//{
	//	GLog->Log("JSON file is not valid");
	//}

	

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

void AJsonParser::dumpObstacleCoords(FString filename = "")
{
	if (filename == "") {
		filename = "EnvGenStats.json";
	}

	FString ObsDataFilePath = FPaths::ProjectContentDir() + "/JsonFiles/" + filename;

	TArray<AActor*> obstacles;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnvGenObstacle::StaticClass(), obstacles);

	AEnvGenObstacle * obs;
	FVector origin, box_extent;

	FVector player_start;
	player_start.X = FCString::Atof(*PlayerStart[0]);
	player_start.Y = FCString::Atof(*PlayerStart[1]);
	player_start.Z = FCString::Atof(*PlayerStart[2]);

	FVector end;
	end.X = FCString::Atof(*End[0]);
	end.Y = FCString::Atof(*End[1]);
	end.Z = FCString::Atof(*End[2]);

	FVector arena_size;
	arena_size.X = FCString::Atof(*ArenaSize[0]);
	arena_size.Y = FCString::Atof(*ArenaSize[1]);
	arena_size.Z = FCString::Atof(*ArenaSize[2]);

	float grid_size = FCString::Atof(*GridSize);
	float spread = FCString::Atof(*SpreadOfObstacles);

	std::string write_str("{\n");

	write_str += ("\t\"SpreadOfObstacles\": " + std::string(TCHAR_TO_UTF8(*SpreadOfObstacles)) + ",\n");
	write_str += ("\t\"PeakCongestion\": " + std::string(TCHAR_TO_UTF8(*PeakCongestion)) + ",\n");

	// Map stats

	// hack: we only use the grid squares up to spread of obstacles away from the
	// straight line connecting player start and end because that is the meaningful
	// area the drone goes through, and not necessarily the entire arena

	float y2_y1, x2_x1, x2y1, y2x1;
	y2_y1 = end.Y - player_start.Y;
	x2_x1 = end.X - player_start.X;
	x2y1 = end.X * player_start.Y;
	y2x1 = end.Y * player_start.X;

	std::vector<float> obs_distances;

	for (float i = -arena_size.X/2; i < arena_size.X/2; i += grid_size) {
		for (float j = -arena_size.Y/2; j < arena_size.Y/2; j += grid_size) {
			// checking if lies within 1.5 * spread
			float dist_point_to_line = std::abs(y2_y1 * i - x2_x1 * j + x2y1 - y2x1) / std::sqrt(std::pow(y2_y1, 2) + std::pow(x2y1, 2));
			if (dist_point_to_line < 1.5 * spread) {
				float shortest_obs_dist = INT_MAX;
				FVector2D grid_pt(i, j);
				for (AActor * obs_ptr : obstacles) {
					// switching X and Y around because we're doing everything in NED coordinates, not UE4
					FVector2D obs_pos(obs_ptr->GetActorLocation().Y/100.0, obs_ptr->GetActorLocation().X/100.0);
					float dist = FVector2D::Distance(grid_pt, obs_pos);
					if (dist < shortest_obs_dist) {
						shortest_obs_dist = dist;
					}
				}
				obs_distances.push_back(shortest_obs_dist);
			}
		}
	}

	float sum = std::accumulate(obs_distances.begin(), obs_distances.end(), 0.0);
	float mean = sum / obs_distances.size();
	float sq_sum = std::inner_product(obs_distances.begin(), obs_distances.end(), obs_distances.begin(), 0.0);
	float stddev = std::sqrt(sq_sum / obs_distances.size() - mean * mean);

	obstacles[0]->GetActorBounds(false, origin, box_extent);
	float box_extent_area = (box_extent.X/100.0) * 2 * (box_extent.Y/100.0) * 2;
	// area covered by obstacles / total relevant arena area
	float mean_congestion = (box_extent_area * obstacles.Num()) / (1.5 * spread * FVector::Distance(player_start, end));

	write_str += ("\t\"AverageOfObsDistances\": " + std::to_string(mean) + ",\n");
	write_str += ("\t\"StddevOfObsDistances\": " + std::to_string(stddev) + ",\n");
	write_str += ("\t\"AverageCongestion\": " + std::to_string(mean_congestion) + ",\n");

	write_str += ("\t\"NumberOfObstacles\": " + std::to_string(obstacles.Num()) + ",\n");
	write_str += "\t\"ObstacleList\": [\n";

	// using ostreanstring to make int concat easier
	std::ostringstream bounds_str;

	int obs_ind = 0;
	for (AActor * obs_ptr : obstacles) {
		obs = static_cast<AEnvGenObstacle*>(obs_ptr);
		obs->GetActorBounds(false, origin, box_extent);

		// Xs and Ys are reversed in unreal vs our coordinate system
		// write box extent as top right corner, followed by bottom left corner wrt NED coordinates
		// output in meters, not in unreal units (cm)
		bounds_str << "\t\t["
			<< "[" << (origin.Y + box_extent.Y)/100.0 - player_start.Y << "," << (origin.X + box_extent.X)/100.0 - player_start.X << "],"
			<< "[" << (origin.Y - box_extent.Y)/100.0 - player_start.Y << "," << (origin.X - box_extent.X)/100.0 - player_start.X << "]"
		<< "]";

		if (obs_ind == (obstacles.Num() - 1)) {
			bounds_str << "\n";
		}
		else {
			bounds_str << ",\n";
		}
		obs_ind++;
	}

	write_str += bounds_str.str();

	// ending bracket for obstacle list
	write_str += "\t]\n";
	
	// ending bracket for entire json file
	write_str += "}\n";

	FFileHelper::SaveStringToFile(UTF8_TO_TCHAR(write_str.c_str()), *ObsDataFilePath);
}