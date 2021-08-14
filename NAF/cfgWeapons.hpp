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
	class NAF_Uni_NFP_Green: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="BDU (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_green.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Green";
		};
	};
	class NAF_Uni_NFP_Green_Rolled: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="BDU Rolled (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_green.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Green_Rolled";
		};
	};
	class NAF_Uni_NFP_Green_Shirt: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="BDU Shirt (NFP Green)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_green.paa",
			"\NAF\data\uniforms\tex_shirt_grey.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Green_Shirt";
		};
	};
	class NAF_Uni_NFP_Tan: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="BDU (NFP Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_tan.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Tan";
		};
	};
	class NAF_Uni_NFP_Tan_Rolled: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="BDU Rolled (NFP Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_tan.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Tan_Rolled";
		};
	};
	class NAF_Uni_NFP_Tan_Shirt: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="BDU Shirt (NFP Tan)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_tan.paa",
			"\NAF\data\uniforms\tex_shirt_brown.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_NFP_Tan_Shirt";
		};
	};
	class NAF_Uni_Woodland: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="BDU (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Woodland";
		};
	};
	class NAF_Uni_Woodland_Rolled: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="BDU Rolled (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Woodland_Rolled";
		};
	};
	class NAF_Uni_Woodland_Shirt: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="BDU Shirt (Woodland)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_woodland.paa",
			"\NAF\data\uniforms\tex_shirt_brown.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Woodland_Shirt";
		};
	};
	class NAF_Uni_Jungle: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="BDU (Jungle)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_jungle.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Jungle";
		};
	};
	class NAF_Uni_Jungle_Rolled: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="BDU Rolled (Jungle)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_jungle.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Jungle_Rolled";
		};
	};
	class NAF_Uni_Jungle_Shirt: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="BDU Shirt (Jungle)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_jungle.paa",
			"\NAF\data\uniforms\tex_shirt_brown.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Jungle_Shirt";
		};
	};
	class NAF_Uni_Desert: U_B_CombatUniform_mcam
	{
		author="Pek";
		displayName="BDU (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Desert";
		};
	};
	class NAF_Uni_Desert_Rolled: U_B_CombatUniform_mcam_vest
	{
		author="Pek";
		displayName="BDU Rolled (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Desert_Rolled";
		};
	};
	class NAF_Uni_Desert_Shirt: U_B_CombatUniform_mcam_tshirt
	{
		author="Pek";
		displayName="BDU Shirt (Desert)";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\uniforms\tex_uni_desert.paa",
			"\NAF\data\uniforms\tex_shirt_brown.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="B_NAF_Soldier_Desert_Shirt";
		};
	};
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrier2_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_NAF_PC_Lite_Multi: V_PlateCarrier1_rgr
	{
		author="Pek";
		displayName="PC Lite (NFP Multitone)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_lite_multi.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Multi: V_PlateCarrier2_rgr
	{
		author="Pek";
		displayName="PC Rig (NFP Multitone)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_multi.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Spec_Multi: V_PlateCarrierSpec_rgr
	{
		author="Pek";
		displayName="PC Rig Special (NFP Multitone)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_multi.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Lite_Olive: V_PlateCarrier1_rgr
	{
		author="Pek";
		displayName="PC Lite (Olive)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_olive.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Olive: V_PlateCarrier2_rgr
	{
		author="Pek";
		displayName="PC Rig (Olive)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_olive.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Spec_Olive: V_PlateCarrierSpec_rgr
	{
		author="Pek";
		displayName="PC Rig Special (Olive)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_olive.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Lite_Tan: V_PlateCarrier1_rgr
	{
		author="Pek";
		displayName="PC Lite (Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_tan.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Tan: V_PlateCarrier2_rgr
	{
		author="Pek";
		displayName="PC Rig (Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_tan.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_NAF_PC_Rig_Spec_Tan: V_PlateCarrierSpec_rgr
	{
		author="Pek";
		displayName="PC Rig Special (Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_pc_hev_tan.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class HeadgearItem;
	class H_HelmetHBK_headset_F;
	class H_HelmetIA;
	class H_MilCap_grn;
	class H_Booniehat_khk_hs;
	class H_NAF_Viper_Green: H_HelmetHBK_headset_F
	{
		author="Pek";
		displayName="Viper Helmet (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_viper_green.paa"
		};
	};
	class H_NAF_Viper_Tan: H_HelmetHBK_headset_F
	{
		author="Pek";
		displayName="Viper Helmet (NFP Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_viper_tan.paa"
		};
	};
	class H_NAF_MICH_Desert: H_HelmetIA
	{
		author="Pek";
		displayName="MICH2001 (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_mich_desert.paa"
		};
	};
	class H_NAF_MICH_Jungle: H_HelmetIA
	{
		author="Pek";
		displayName="MICH2001 (Jungle)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_mich_jungle.paa"
		};
	};
	class H_NAF_MICH_Woodland: H_HelmetIA
	{
		author="Pek";
		displayName="MICH2001 (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_mich_woodland.paa"
		};
	};
	class H_NAF_Cap_Desert: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_desert.paa"
		};
	};
	class H_NAF_Cap_Jungle: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (Jungle)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_jungle.paa"
		};
	};
	class H_NAF_Cap_Woodland: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_woodland.paa"
		};
	};
	class H_NAF_Cap_Green: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_green.paa"
		};
	};
	class H_NAF_Cap_Tan: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (NFP Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_tan.paa"
		};
	};
	class H_NAF_Cap_Multi: H_MilCap_grn
	{
		author="Pek";
		displayName="Cap (NFP Multitone)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_cap_multi.paa"
		};
	};
	class H_NAF_Boonie_Desert: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (Desert)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_desert.paa"
		};
	};
	class H_NAF_Boonie_Jungle: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (Jungle)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_jungle.paa"
		};
	};
	class H_NAF_Boonie_Woodland: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (Woodland)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_woodland.paa"
		};
	};
	class H_NAF_Boonie_Green: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (NFP Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_green.paa"
		};
	};
	class H_NAF_Boonie_Tan: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (NFP Tan)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_tan.paa"
		};
	};
	class H_NAF_Boonie_Multi: H_Booniehat_khk_hs
	{
		author="Pek";
		displayName="Boonie (NFP Multitone)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\NAF\data\gear\tex_boonie_multi.paa"
		};
	};
};
