class CfgPatches
{
	class NLD2035_Characters
	{
		units[]=
		{
            "B_NL_Rifleman_Green",
			"B_NL_Rifleman_Green_Rolled",
			"B_NL_Rifleman_Green_Shirt",
			"B_NLD_Assaultpack_nfpg",
			"B_NLD_Kitbag_nfpg",
			"B_NLD_civi_nfpg"

		};
		weapons[]=
		{
            "NLD_NFP_Green_Uni",
			"NLD_NFP_Green_Rolled_Uni",
			"NLD_NFP_Green_Shirt_Uni",
			"NLD_NFP_Green_Helmet",
			"NLD_NFP_Green_Platecarrier",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};

#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
