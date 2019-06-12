# Air Learning Environment Generator
Air Learning environment generator is built on top of UE-4 game engine. More information on the environment generator is available in the [paper](https://arxiv.org/pdf/1906.00421.pdf)

In this page we give step by step instruction to build the environment generator and get it up and running. If you have read the paper, then this wiki will give instruction on setting up the portion highlighted in red in the Air Learning Infrastructure:
![](https://github.com/harvard-edge/airlearning-ue4/blob/master/Images/Airlearning-Environment-Gen.png)



## System requirements:
The following instructions are tested on Windows 10 machine and assume you have the following softwares already installed.
1) Windows 10 System 
2) Unreal Engine 4.18.3
3) Visual Studio Community 2017 (Version 15.7.1)

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
