
#define _ARMA_

class CfgPatches
{
	class FOX_FLASHLIGHTS_LASERS
	{
		units[] = {};
		weapons[] = {"FOX_SPOT_A","FOX_SIG_TORCH_A","FOX_SIG_TORCH_B","FOX_SIG_TORCH_C","FOX_SIG_TORCH_D","FOX_SIG_TORCH_E","FOX_SIG_TORCH_F","FOX_VARI_TORCH_A","FOX_VARI_TORCH_B","FOX_VARI_TORCH_C","FOX_VARI_TORCH_D","FOX_VARI_TORCH_E","FOX_VARI_TORCH_F","FOX_VARI_TORCH_G","FOX_VARI_TORCH_H","FOX_COMBO_LASER","FOX_COMBO_TORCH"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","cba_jr","CBA_main","A3_Data_F"};
		version = 1;
		author = "FoxForce";
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		FOX_VARI_TORCH_A = 1;
		FOX_VARI_TORCH_B = 1;
		FOX_VARI_TORCH_C = 1;
		FOX_VARI_TORCH_D = 1;
		FOX_VARI_TORCH_E = 1;
		FOX_VARI_TORCH_F = 1;
		FOX_VARI_TORCH_G = 1;
		FOX_VARI_TORCH_H = 1;
		FOX_COMBO_LASER = 1;
		FOX_COMBO_TORCH = 1;
		FOX_SIG_TORCH_A = 1;
		FOX_SIG_TORCH_B	= 1;
		FOX_SIG_TORCH_C = 1;
		FOX_SIG_TORCH_D = 1;
		FOX_SIG_TORCH_E = 1;
		FOX_SIG_TORCH_F = 1;
		FOX_SPOT_A = 1;
	};
};

class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		FOX_pistol_light_A = 1;
		FOX_pistol_light_B = 1;
	};
};

class cfgWeapons
{
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class FOX_VARI_TORCH_A: acc_flashlight
	{
		scope = 2;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "HIGH";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_H";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_B";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,110};
				ambient[] = {0.9,0.81,0.7};
				intensity = 20;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 110;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 50;
					constant = 90;
					linear = 1;
					quadratic = 0.2;
					hardLimitStart = 100;
					hardLimitEnd = 180;
				};
			};
		};
	};
	class FOX_VARI_TORCH_B: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "MAX";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_A";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_C";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,110};
				ambient[] = {0.9,0.81,0.7};
				intensity = 25;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 120;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 80;
					constant = 80;
					linear = 5;
					quadratic = 0.02;
					hardLimitStart = 80;
					hardLimitEnd = 250;
				};
			};
		};
	};
	class FOX_VARI_TORCH_C: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "SPOT";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_B";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_D";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {170,150,120};
				ambient[] = {0.9,0.81,0.7};
				intensity = 26;
				size = 1;
				scale[] = {0};
				innerAngle = 15;
				outerAngle = 24;
				coneFadeCoef = 1.4;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "1000";
				dayLight = 0;
				class Attenuation
				{
					start = 250;
					constant = 80;
					linear =  10;
					quadratic = 0.1;
					hardLimitStart = 250;
					hardLimitEnd = 1000;
				};
			};
		};
	};
	class FOX_VARI_TORCH_D: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "WIDE";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_C";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_E";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,140,90};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 30;
				outerAngle = 160;
				coneFadeCoef = 1.5;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 30;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 70;
					hardLimitEnd = 120;
				};
			};
		};
	};	
	class FOX_VARI_TORCH_E: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "RED";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_D";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_F";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,10,10};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_VARI_TORCH_F: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "GREEN";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_E";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_G";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {10,150,10};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_VARI_TORCH_G: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "LOW";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_F";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_H";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,110};
				ambient[] = {0.9,0.81,0.7};
				intensity = 10;
				size = 1;
				scale[] = {0};
				innerAngle = 20;
				outerAngle = 90;
				coneFadeCoef = 10;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = .2;
				flareMaxDistance = "10.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0.5;
					constant = 0.5;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 10;
					hardLimitEnd = 30;
				};
			};
		};
	};	
		class FOX_VARI_TORCH_H: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Variable Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "MED";
		MRT_SwitchItemPrevClass = "FOX_VARI_TORCH_G";
		MRT_SwitchItemNextClass = "FOX_VARI_TORCH_A";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,110};
				ambient[] = {0.9,0.81,0.7};
				intensity = 20;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 100;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = .7;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0.5;
					linear = 0.1;
					quadratic = 0.2;
					hardLimitStart = 70;
					hardLimitEnd = 100;
				};
			};
		};
	};	
	class acc_pointer_IR;
	class FOX_COMBO_LASER: acc_pointer_IR
	{
		scope = 2;
		displayName = "Fox Laser Light Combo";
		model = "\a3\weapons_f\acc\accv_pointer_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "IR Laser";
		MRT_SwitchItemPrevClass = "FOX_COMBO_TORCH";
		MRT_SwitchItemNextClass = "FOX_COMBO_TORCH";
	};
	class FOX_COMBO_TORCH: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Laser Light Combo";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "FLASH LIGHT";
		MRT_SwitchItemPrevClass = "FOX_COMBO_LASER";
		MRT_SwitchItemNextClass = "FOX_COMBO_LASER";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,110};
				ambient[] = {0.9,0.81,0.7};
				intensity = 20;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 110;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 50;
					constant = 90;
					linear = 1;
					quadratic = 0.2;
					hardLimitStart = 100;
					hardLimitEnd = 180;
				};
			};
		};
	};
	class FOX_SIG_TORCH_A: acc_flashlight
	{
		scope = 2;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "WHITE";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_F";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_B";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,180,180};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 30;
					hardLimitEnd = 100;
				};
			};
		};
	};
	class FOX_SIG_TORCH_B: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "RED";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_A";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_C";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,10,10};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};	
	class FOX_SIG_TORCH_C: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "GREEN";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_B";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_D";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {10,180,10};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_SIG_TORCH_D: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "BLUE";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_C";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_E";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {10,10,180};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_SIG_TORCH_E: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "YELLOW";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_D";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_F";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,10};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_SIG_TORCH_F: acc_flashlight
	{
		scope = 1;
		displayName = "Fox Signal Torch";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "PURPLE";
		MRT_SwitchItemPrevClass = "FOX_SIG_TORCH_E";
		MRT_SwitchItemNextClass = "FOX_SIG_TORCH_A";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,10,180};
				ambient[] = {0.9,0.81,0.7};
				intensity = 70;
				size = 1;
				scale[] = {0};
				innerAngle = 5;
				outerAngle = 80;
				coneFadeCoef = 2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "2000";
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 90;
					linear = 0.01;
					quadratic = .1;
					hardLimitStart = 10;
					hardLimitEnd = 50;
				};
			};
		};
	};
	class FOX_SPOT_A: acc_flashlight
	{
		scope = 2;
		displayName = "Fox Spotlight";
		model = "\a3\weapons_f\acc\accv_flashlight_f.p3d";
		author = "FoxForce";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{
				color[] = {180,160,130};
				ambient[] = {0.9,0.81,0.7};
				intensity = 30;
				size = 1;
				scale[] = {0};
				innerAngle = 15;
				outerAngle = 22;
				coneFadeCoef = 1.2;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = "1000";
				dayLight = 0;
				class Attenuation
				{
					start = 250;
					constant = 80;
					linear =  10;
					quadratic = 0.1;
					hardLimitStart = 250;
					hardLimitEnd = 1000;
				};
			};
		};
	};
	class acc_flashlight_pistol;
	class FOX_pistol_light_A: acc_flashlight_pistol
	{
		scope=2;
		displayName="Fox Pistol Mini";
		model="\A3\weapons_f\acc\accv_Flashlight_TLS_F.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "SPOT";
		MRT_SwitchItemPrevClass = "FOX_pistol_light_B";
		MRT_SwitchItemNextClass = "FOX_pistol_light_B";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=3;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.9,0.81,0.7};
				intensity=25;
				size=1;
				innerAngle=15;
				outerAngle=30;
				coneFadeCoef=4;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				class Attenuation
				{
					start=100;
					constant=60;
					linear=10;
					quadratic=0.1;
					hardLimitStart=40;
					hardLimitEnd=130;
				};
				scale[]={0};				
			};
		};
	};				

	class FOX_pistol_light_B: acc_flashlight_pistol
	{
		scope=1;
		displayName="Fox Pistol Mini";
		model="\A3\weapons_f\acc\accv_Flashlight_TLS_F.p3d";
		author = "FoxForce";
		MRT_switchItemHintText = "WIDE";
		MRT_SwitchItemPrevClass = "FOX_pistol_light_A";
		MRT_SwitchItemNextClass = "FOX_pistol_light_A";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=3;
			class FlashLight
			{					
				color[]={180,160,130};
				ambient[]={0.9,0.81,0.7};
				intensity=50;
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=2;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=15;
					linear=.1;
					quadratic=0.2;
					hardLimitStart=30;
					hardLimitEnd=120;
				};
				scale[]={0};
			};
		};
	};		
};



