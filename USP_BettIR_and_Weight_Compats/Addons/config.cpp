class CfgPatches
{
	class USP_BettIR_Compat
	{
		requiredaddons[]=
		{
			"BettIR_Core",
			"USP_Gear_Nvg"
		};
		requiredversion=1;
		units[]={};
		weapons[]={};
		name="USP BettIR Compat";
		author="prazv";
	};
};
class BettIR_Config
{
	class CompatibleNightvisionGoggles
	{
		class __base_NVG;
		class USP_NSEAS: __base_NVG
		{
		};
		class USP_GPNVG18_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_BLK2: __base_NVG
		{
		};
		class USP_GPNVG18_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_TAN2: __base_NVG
		{
		};
		class USP_GPNVG18_WP_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_BLK2: __base_NVG
		{
		};
		class USP_GPNVG18_WP_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_TAN2: __base_NVG
		{
		};
		class USP_GPNVG18_CB_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_CB_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_CB_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_CB_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_CB2_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_CB2_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB2_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB2_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_CB2_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB2_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB2_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_CB3_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_CB3_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB3_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB3_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_CB3_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_CB3_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB3_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_CB3_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_GM_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_GM_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_GM_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_GM_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_GM_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_GM_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_GM_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_GM_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_TAR_BLK2: __base_NVG
		{
		};
		class USP_GPNVG18_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_TAR_TAN2: __base_NVG
		{
		};
		class USP_GPNVG18_WP_TAR_BLK: __base_NVG
		{
		};
		class USP_GPNVG18_WP_TAR_TAN: __base_NVG
		{
		};
		class USP_GPNVG18_WP_TAR_TAN2: __base_NVG
		{
		};
		class USP_PVS14: __base_NVG
		{
		};
		class USP_PVS14_WP: __base_NVG
		{
		};
		class USP_PVS14_TAR: __base_NVG
		{
		};
		class USP_PVS14_WP_TAR: __base_NVG
		{
		};
		class USP_PVS15: __base_NVG
		{
		};
		class USP_PVS15_WP: __base_NVG
		{
		};
		class USP_PVS15_TAR: __base_NVG
		{
		};
		class USP_PVS15_WP_TAR: __base_NVG
		{
		};
		class USP_PVS31_BLK: __base_NVG
		{
		};
		class USP_PVS31_BLK2: __base_NVG
		{
		};
		class USP_PVS31_TAN: __base_NVG
		{
		};
		class USP_PVS31_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_TAN2: __base_NVG
		{
		};
		class USP_PVS31_HIGH_BLK: __base_NVG
		{
		};
		class USP_PVS31_HIGH_BLK2: __base_NVG
		{
		};
		class USP_PVS31_HIGH_TAN: __base_NVG
		{
		};
		class USP_PVS31_HIGH_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_HIGH_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_HIGH_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_HIGH_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_HIGH_TAN2: __base_NVG
		{
		};
		class USP_PVS31_LOW_BLK: __base_NVG
		{
		};
		class USP_PVS31_LOW_BLK2: __base_NVG
		{
		};
		class USP_PVS31_LOW_TAN: __base_NVG
		{
		};
		class USP_PVS31_LOW_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_LOW_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_LOW_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_LOW_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_LOW_TAN2: __base_NVG
		{
		};
		class USP_PVS31_MID_BLK: __base_NVG
		{
		};
		class USP_PVS31_MID_BLK2: __base_NVG
		{
		};
		class USP_PVS31_MID_TAN: __base_NVG
		{
		};
		class USP_PVS31_MID_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_MID_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_MID_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_MID_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_MID_TAN2: __base_NVG
		{
		};
		class USP_PVS31_MONOL_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_MONOL_BLK: __base_NVG
		{
		};
		class USP_PVS31_MONOR_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_MONOR_BLK: __base_NVG
		{
		};
		class USP_PVS31_TAR: __base_NVG
		{
		};
		class USP_PVS31_TAR_BLK2: __base_NVG
		{
		};
		class USP_PVS31_TAR_TAN: __base_NVG
		{
		};
		class USP_PVS31_TAR_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_TAN2: __base_NVG
		{
		};
		class USP_PVS31_TAR_HIGH: __base_NVG
		{
		};
		class USP_PVS31_TAR_HIGH_BLK2: __base_NVG
		{
		};
		class USP_PVS31_TAR_HIGH_TAN: __base_NVG
		{
		};
		class USP_PVS31_TAR_HIGH_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_HIGH_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_HIGH_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_HIGH_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_HIGH_TAN2: __base_NVG
		{
		};
		class USP_PVS31_TAR_LOW: __base_NVG
		{
		};
		class USP_PVS31_TAR_LOW_BLK2: __base_NVG
		{
		};
		class USP_PVS31_TAR_LOW_TAN: __base_NVG
		{
		};
		class USP_PVS31_TAR_LOW_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_LOW_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_LOW_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_LOW_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_LOW_TAN2: __base_NVG
		{
		};
		class USP_PVS31_TAR_MID: __base_NVG
		{
		};
		class USP_PVS31_TAR_MID_BLK2: __base_NVG
		{
		};
		class USP_PVS31_TAR_MID_TAN: __base_NVG
		{
		};
		class USP_PVS31_TAR_MID_TAN2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_MID_BLK: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_MID_BLK2: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_MID_TAN: __base_NVG
		{
		};
		class USP_PVS31_WP_TAR_MID_TAN2: __base_NVG
		{
		};
	};
};
class CfgWeapons
{
	class NVGoggles;
	class USP_NSEAS: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_GPNVG18_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB2_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB2_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB2_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB2_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB2_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB2_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB2_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB2_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB3_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB3_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB3_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB3_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB3_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB3_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_CB3_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB3_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_CB3_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_GM_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_GM_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_GM_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_GM_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_GM_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_GM_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_GM_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_GM_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAR_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_TAR_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAR_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_GPNVG18_WP_TAR_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 24;
		};
	};
	class USP_PVS14: NVGoggles
	{
		class ItemInfo
		{
			mass = 14;
		};
	};
	class USP_PVS14_WP: NVGoggles
	{
		class ItemInfo
		{
			mass=  14;
		};
	};
	class USP_PVS14_TAR: NVGoggles
	{
		class ItemInfo
		{
			mass = 14;
		};
	};
	class USP_PVS14_WP_TAR: NVGoggles
	{
		class ItemInfo
		{
			mass = 14;
		};
	};
	class USP_PVS15: NVGoggles
	{
		class ItemInfo
		{
			mass = 20;
		};
	};
	class USP_PVS15_WP: NVGoggles
	{
		class ItemInfo
		{
			mass = 20;
		};
	};
	class USP_PVS15_TAR: NVGoggles
	{
		class ItemInfo
		{
			mass = 20;
		};
	};
	class USP_PVS15_WP_TAR: NVGoggles
	{
		class ItemInfo
		{
			mass = 20;
		};
	};
	class USP_PVS31_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_HIGH_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_HIGH_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_HIGH_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_HIGH_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_HIGH_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_HIGH_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_HIGH_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_HIGH_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};class USP_PVS31_LOW_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_LOW_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_LOW_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_LOW_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_LOW_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_LOW_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_LOW_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_LOW_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_MID_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_MID_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_MID_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};class USP_PVS31_MID_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MID_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MID_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MID_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MID_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_MONOL_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MONOL_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_MONOR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_MONOR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_HIGH: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_HIGH_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_HIGH_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_HIGH_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_HIGH_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_HIGH_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_HIGH_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_HIGH_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_LOW: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_LOW_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_LOW_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_LOW_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_LOW_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_LOW_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_LOW_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_LOW_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_MID: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_MID_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_MID_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_TAR_MID_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_MID_BLK: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_MID_BLK2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_MID_TAN: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
	class USP_PVS31_WP_TAR_MID_TAN2: NVGoggles
	{
		class ItemInfo
		{
			mass = 16;
		};
	};
};
class cfgMods
{
	author="prazv";
	timepacked="1754213124";
};




