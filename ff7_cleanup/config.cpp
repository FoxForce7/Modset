
class CfgPatches
{
	class Fox_clean
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
		version="1.0";
		author="Vad";
		name = "Cleanup Script";
		url = "https://github.com/vadric";
	};
};


class CfgFunctions
{
	class Cleanupfox
	{
		tag = "cleaner";
		class Cleanups
		{
			file = "\ff7_cleanup\fnc";
			class repetitivecleanup {postInit = 1;};
		};
	};
};
