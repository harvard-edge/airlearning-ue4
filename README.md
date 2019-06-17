# Air Learning Environment Generator
Air Learning environment generator is built on top of UE-4 game engine. More information on the environment generator is available in the [paper](https://arxiv.org/pdf/1906.00421.pdf)

In this page we give step by step instruction to build the environment generator and get it up and running. If you have read the paper, then this wiki will give instruction on setting up the portion highlighted in red in the Air Learning Infrastructure:
![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/Airlearning-Environment-Gen.png)

In this version of Air Learning, users can configure the following parameters:

| Parameters           	| Format                  	| Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 	|
|---------------------	|-------------------------	|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------	|
| Arena Size          	| [length, width, height] 	| The Arena Size is the total volume available in the environment. It is represented by [length, width, height] tuple. A large arena size means the UAV has to cover more distance in reaching the goal which directly impacts its energy and mission success.  The arena can be customized by adding materials, which we describe in the "materials" section.                                                                                                                                                              	|
| Wall Colors         	| [R, G, B]               	| The Wall Color parameter can be used to set the wall colors of the arena. The parameter takes [R, G, B] tuple as input. By setting different values of [R, G, B], any color in the visible spectrum can be applied to the walls. The neural network policies show sensitivity towards different colors and varying these color during training can help the policy to generalize well.                                                                                                                                      	|
| # Static Obstacles  	| Scalar Integer          	| The # Static Obstacles is a parameter that describes the total number of static objects that is spawned in the environment. Using this parameter, we can generate environments ranging from very dense to very sparse obstacles. Depending upon the value of this parameter, the navigation complexity can be easy or difficult. A large number of obstacles increases the collision probability and can be used for stressing the efficacy of reinforcement learning algorithms.                                           	|
| # Dynamic Obstacles 	| Scalar Integer          	| The # Dynamic Obstacles is a parameter that describes the total number of obstacles that can move in the environment.                                                                                                                                                                                                                                                                                                                                                                                                       	|
| Seed                	| Scalar Integer          	| The Seed parameter is used for randomizing the different parameters in the environment. By setting the same 'Seed' value, we can reproduce (and randomize) the environment (obstacle position, goal position, etc.).                                                                                                                                                                                                                                                                                                        	|
| Minimum Distance    	| Scalar Integer          	| The Minimum distance is a parameter that controls the minimum distance between two static objects in the arena. This parameter in conjunction with # Static Obstacles is what determines congestion.                                                                                                                                                                                                                                                                                                                        	|
| Goal Position       	| [X, Y, Z]               	| The Goal Position is a parameter that specifies the destination coordinate that the UAV must reach. The Goal Position coordinates should always be inside the arena, and there is error checking for input errors. Similar to # Static Obstacles, it increases task complexity.                                                                                                                                                                                                                                             	|
| Velocity            	| [Vmax, Vmin]            	| The Velocity parameter is a tuple of the form [V_min, V_max] that works with # Dynamic Obstacles. The environment generator randomly chooses a value from this range for the velocity of a dynamic obstacle. This coupled with the # Dynamic Obstacles helps control how dynamic and challenging the environment is for the aerial robot.                                                                                                                                                                                   	|
| Asset               	| [folder name]           	| An Asset in Air Learning is a mesh in UE4. Any asset that is available in the project can be used as a static obstacle, dynamic obstacle, or both. At simulation startup, Air Learning uses these assets as either a static or dynamic obstacle. The number of assets that will be spawned in the arena will be equal to the # Static Obstacle and # Dynamic Obstacle parameter. By having the ability to spawn any asset as an obstacle, the UAV agent can generalize to avoid collision with different types of obstacle. 	|
| Materials           	| [folder name]           	| A Material is a UE4 asset that can be applied to meshes to control the visual look of the scene. Material is usually made of multiple textures to create a particular visual effect for the asset. At simulation startup, Air Learning environment generator applies materials to matching assets.                                                                                                                                                                                                                          	|
| Textures            	| [folder name]           	| A Texture is an image that is used on an UE4 asset. They are mapped to the surfaces of any given asset. At startup, the environment generator applies textures to matching assets. Textures and materials help the training algorithm capture different object features, which is important to help the algorithm generalize.

## System requirements:
The following instructions are tested on Windows 10 machine and assume you have the following softwares already installed.
1) Windows 10 System 
2) Unreal Engine 4.18.3
3) Visual Studio Community 2017 (Version 15.7.1) 
4) Select Windows 8.1 SDK when installing Visual Studio

## Installing from source (Tested on Windows 10)

### Step 1: Clone the UE-4 Environment Generator Project:

`$ git clone https://github.com/harvard-edge/airlearning-ue4.git`

P.S: The file is 2.1 GB, so it might take some time depending upon your network speed (so feel free to context switch). We have some UE4 assets in the project. To reduce the size, we will upload that to a shared drive later where users can download and add to their project.

### Step 2: Compile the UE4 project (without AirSim plugin)
In this step, compile the environment generator without the AirSim plugin.
 
`$ cd airlearning-ue4`

`$ airlearning-ue4/airlearning.uproject`

This should pop-up an message from UE4:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/unreal-build-pop-up.PNG)

This message means, the UE4 is not able to find a binary and clicking "yes" will build the binary for you. We should see the progress of the build:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/building_pop_up.PNG):

Once the build is complete, the UE4 editor should load the Air Learning Environment generator project:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/editor-starting.PNG)


Finally, we should see the Air Learning environment generator project loaded on UE4 editor window:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/Airlearning-editor-mode.PNG)


Now to test if the project is loaded correctly, press play or (Alt + P). This should open the Air Learning Environment generator in the default game mode:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/Airlearning-env-gen-test.PNG)


If you have got this far, then you have successfully installed Air Learning Environment generator. Next we will see how see how to add AirSim plugin that will replace the default game mode and have UAV agent in the Air Learning environment generator project.

### Step 3: Install AirSim plugin for Air Learning

Clone the AirSim plugin for Air Learning. This version of AirSim has the energy model and has other client APIs that allow environment randomization.

`$ git clone -b rpc-base-reset-plus-energy https://github.com/srivatsankrishnan/AirSim-1.git`

P.S: Remember to checkout **rpc-base-reset-plus-energy** branch. This branch is needed for energy monitoring and environment randomization.

The instructions for installing AirSim can be found [here](https://microsoft.github.io/AirSim/docs/build_windows/). Once this version of AirSim is compiled, navigate to the plugin folder:

`$ cd AirSim\Unreal`

Copy the Plugin folder from AirSim to Air Learning UE-4 project

`$ xcopy /hiev Unreal\Plugins C:\workspace\airLearning-ue4\Plugins`

Right click on the AirLearning.uproject file and replace the content with the following information:

```
{
	"FileVersion": 3,
	"EngineAssociation": "4.18",
	"Category": "",
	"Description": "",
	"Modules": [
		{
			"Name": "JsonParsing18Version",
			"Type": "Runtime",
			"LoadingPhase": "Default",
			"AdditionalDependencies": [
				"Engine"
			]
		}
	],
	"Plugins": [
		{
			"Name": "AirSim",
			"Enabled": true
		}
	],
	"TargetPlatforms": [
		"MacNoEditor",
		"WindowsNoEditor"
	]
}
```

This basically tells the UE4 engine to include AirSim plugin in the project.

Now compile the environment generator with the AirSim plugin.
 
`$ cd airlearning-ue4`

`$ airlearning-ue4/airlearning.uproject`

This should pop-up an message from UE4:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/airsim-build-pop-up.PNG)

Once the build is complete, the UE4 editor should load the Air Learning Environment generator project with AirSim plugin. Now, we need to change the game mode to "AirSim Game Mode" change from default agent to UAV agent.To change the game mode, navigate to windows>> World Settings. In the game mode setting, choose the AirSimGameMode option in the drop down menu:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/airsim-game-mode.PNG)

Start the game by pressing "Play" or (Alt + p). This should start the game with the UAV agent if AirSim plugin is built correctly:

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/uav-agent.PNG)

If you have got till this stage, then Air Learning Environment generator project is installed correctly. 

## Air Learning Environment Generator Demo: 
Now we have the environment generator, we can use this to train different reinforcement learning algorithms. Here is the video demonstration of using Air Learning environment generator used in RL training.

![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/training_gif.gif)
