// ---------- VEHICLES ----------
// replace china_army with X_X



class ff7_O_china_army_LSV_02_unarmed_F: O_T_LSV_02_unarmed_F {
	scopeCurator=2;
	side=0;
	forceInGarage=1;
	faction="ff7_O_china_army";
	displayName="Qilin (unarmed)";
	vehicleclass = "Car"; //Unit Group
	crew="ff7_O_china_army_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
	};
};
class ff7_O_china_army_LSV_02_armed_F: O_T_LSV_02_armed_F {
	scopeCurator=2;
	side=0;
	forceInGarage=1;
	faction="ff7_O_china_army";
	displayName="Qilin (armed)";
	vehicleclass = "Car"; //Unit Group
	crew="ff7_O_china_army_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{

	};
};
class ff7_O_china_army_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F {
	scopeCurator=2;
	side=0;
	forceInGarage=1;
	faction="ff7_O_china_army";
	displayName="Ka-60";
	vehicleclass = "Air"; //Unit Group
	crew="ff7_O_china_army_helicrew_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{

	};
};
class ff7_O_china_army_Hatchback_01_F: C_Hatchback_01_F {
	scopeCurator=2;
	side=0;
	forceInGarage=1;
	faction="ff7_O_china_army";
	displayName="Hatchback";
	vehicleclass = "Car"; //Unit Group
	crew="ff7_O_china_army_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
	};
};
class ff7_O_china_army_Van_01_transport_F: C_Van_01_transport_F {
	scopeCurator=2;
	side=0;
	forceInGarage=1;
	faction="ff7_O_china_army";
	displayName="Truck";
	vehicleclass = "Car"; //Unit Group
	crew="ff7_O_china_army_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{

	};
};