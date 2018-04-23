class CfgPatches
{
	class Fox_Medical_Status
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_interaction"};
		author = "Vad";
		name = "Check Medical Status";
		url = "https://github.com/vadric";
	};
};



class CfgVehicles {
    class Man;
    class CAManBase: Man {
		class ACE_Actions {	
			class ACE_Torso {
				class CheckMediFox {
					displayName = "Check Vitals";
					condition = "true";
					exceptions[] = {};
					statement = "[_target] execVM 'ff7_MedicalStatus\MedicalStatus.sqf'";
					showDisabled = 0;
					priority = 2;
					icon = "MedicalStatus\heart.paa";
				};
			};
		};	
	};
};	

