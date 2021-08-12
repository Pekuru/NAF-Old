class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_AR_F;
	class B_Soldier_SL_F;
	class B_NL_Rifleman_Green: B_Soldier_F
	{
		author="Pek";
		displayName="Rifleman (NFP G)";
		scope=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_uni.paa",
			"\NLD2035\data\shirt_grey.paa"
		};
		uniformClass="NLD_NFP_Green_Uni";
	};
	class B_NL_Rifleman_Green_Rolled: B_Soldier_SL_F
	{
		author="Pek";
		displayName="Rifleman Rolled Sleeves (NFP G)";
		scope=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_uni.paa",
			"\NLD2035\data\shirt_grey.paa"
		};
		uniformClass="NLD_NFP_Green_Rolled_Uni";
	};
	class B_NL_Rifleman_Green_Shirt: B_Soldier_AR_F
	{
		author="Pek";
		displayName="Rifleman Shirt (NFP G)";
		scope=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_uni.paa",
			"\NLD2035\data\shirt_grey.paa"
		};
		uniformClass="NLD_NFP_Green_Shirt_Uni";
	};
	class B_AssaultPack_rgr;
	class B_Kitbag_rgr;
	class B_CivilianBackpack_01_Sport_Red_F;
	class B_NLD_Assaultpack_nfpg: B_AssaultPack_rgr
	{
		author="Pek";
		displayName="Assault Pack (NFP G)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_bp3.paa"
		};
	};
	class B_NLD_Kitbag_nfpg: B_Kitbag_rgr
	{
		author="Pek";
		displayName="Kitbag (NFP G)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_bp2.paa"
		};
	};
	class B_NLD_civi_nfpg: B_CivilianBackpack_01_Sport_Red_F
	{
		author="Pek";
		displayName="Cilivian Pack (NFP G)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_bp1.paa"
		};
	};
};