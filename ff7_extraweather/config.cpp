
class CfgPatches
{
	class Fox_weather
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
		version="1.0";
		author="Vad";
		name = "Extra Weather";
		url = "https://github.com/vadric";
	};
};


class CfgFunctions
{
	class Fox_weather
	{
		tag = "foxextraweather";
		class extraweather
		{
			file = "\ff7_extraweather\fnc";
			class loadintozeus {postInit = 1;};
		};
	};
};