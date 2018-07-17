class Indep
{
	class FF7_I_Dilong_Corp
	{
		name = "Dilong Corp";
		
		class Infantry

		{
			name = "Infantry";

			// ---------- FIRE TEAM ----------

			class FF7_I_Dilong_Corp_InfTeam
			{
				name = "Fire Team";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_TL_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AR_F";
					rank = "CORPORAL";
					position[] = {5,-5,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_LAT_F";
					rank = "PRIVATE";
					position[] = {10,-10,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_GL_F";
					rank = "PRIVATE";
					position[] = {-5,-5,0};
				};
			};

			// ---------- RIFLE SQUAD ----------

			class FF7_I_Dilong_Corp_InfSquad
			{
				name = "Rifle Squad";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_SL_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_F";
					rank = "PRIVATE";
					position[] = {5,-5,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_M_F";
					rank = "PRIVATE";
					position[] = {10,-10,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AR_F";
					rank = "CORPORAL";
					position[] = {15,-15,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "FF7_I_DIC_medic_F";
					rank = "PRIVATE";
					position[] = {20,-20,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_LAT_F";
					rank = "CORPORAL";
					position[] = {-5,-5,0};
				};
				class Unit6
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_TL_F";
					rank = "SERGEANT";
					position[] = {-10,-10,0};
				};
				class Unit7
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_A_F";
					rank = "SERGEANT";
					position[] = {-15,-15,0};
				};
			};

			// ---------- SENTRY ----------

			class FF7_I_Dilong_Corp_InfSentry
			{
				name = "Sentry";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_GL_F";
					rank = "CORPORAL";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_F";
					rank = "PRIVATE";
					position[] = {5,-5,0};
				};
			};
			
			// ---------- AT TEAM ----------

			class FF7_I_Dilong_Corp_ATTeam
			{
				name = "AT Team";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AAT_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AT_F";
					rank = "CORPORAL";
					position[] = {5,-5,0};
				};
			};
			
			// ---------- AA TEAM ----------

			class FF7_I_Dilong_Corp_AATeam
			{
				name = "AA Team";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AAA_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AA_F";
					rank = "CORPORAL";
					position[] = {5,-5,0};
				};
			};
			
			// ---------- SNIPER TEAM ----------

			class FF7_I_Dilong_Corp_SniperTeam
			{
				name = "Sniper Team";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_sniper_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_spotter_F";
					rank = "CORPORAL";
					position[] = {5,-5,0};
				};
			};
		};
		
		class Motorized

		{
			name = "Motorized";

			// ---------- QILIN SQUAD ----------
			
			class FF7_I_Dilong_Corp_MotorSquad
			{
				name = "Motorized Squad";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_LSV_02_unarmed_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_F";
					rank = "PRIVATE";
					position[] = {5,-5,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_M_F";
					rank = "PRIVATE";
					position[] = {10,-10,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AR_F";
					rank = "CORPORAL";
					position[] = {15,-15,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "FF7_I_DIC_medic_F";
					rank = "PRIVATE";
					position[] = {20,-20,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_LAT_F";
					rank = "CORPORAL";
					position[] = {-5,-5,0};
				};
				class Unit6
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_TL_F";
					rank = "SERGEANT";
					position[] = {-10,-10,0};
				};
			};
			
			// ---------- QILIN(armed) SQUAD ----------
			
			class FF7_I_Dilong_Corp_MotorArmedSquad
			{
				name = "Motorized(armed) Squad";
				faction = "FF7_I_Dilong_Corp";
				rarityGroup = 0.5;
				class Unit0
				{
					side = 2;
					vehicle = "FF7_I_DIC_LSV_02_armed_F";
					rank = "SERGEANT";
					position[] = {0,0,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_F";
					rank = "PRIVATE";
					position[] = {5,-5,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_M_F";
					rank = "PRIVATE";
					position[] = {10,-10,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_AR_F";
					rank = "CORPORAL";
					position[] = {15,-15,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "FF7_I_DIC_medic_F";
					rank = "PRIVATE";
					position[] = {20,-20,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "FF7_I_DIC_soldier_LAT_F";
					rank = "CORPORAL";
					position[] = {-5,-5,0};
				};
			};
		};
	};
};