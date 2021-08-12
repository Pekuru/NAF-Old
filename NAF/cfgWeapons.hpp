class CfgWeapons
{
	class Uniform_Base;
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		class ItemInfo;
	};
	class NLD_NFP_Green_Uni: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="Combat Uniform (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_uni.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NL_Rifleman_Green";
		};
	};
	class NLD_NFP_Green_Rolled_Uni: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="Combat Uniform Rolled (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_uni.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NL_Rifleman_Green_Rolled";
		};
	};
	class NLD_NFP_Green_Shirt_Uni: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="Combat Uniform T-Shirt (NFP Green)";
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
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NL_Rifleman_Green_Shirt";
		};
	};
	class HeadgearItem;
	class H_HelmetHBK_headset_F;
	class NLD_NFP_Green_Helmet: H_HelmetHBK_headset_F
	{
		author="Pek";
		displayName="Helm (NFP G)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_helm.paa"
		};
	};
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class NLD_NFP_Green_Platecarrier: V_PlateCarrier1_rgr
	{
		author="Pek";
		displayName="Platecarrier (NFP G)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NLD2035\data\nfp_green_pc.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
};
