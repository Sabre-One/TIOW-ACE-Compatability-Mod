// Generated by unRap v1.06 by Kegetys

class Cfgweapons {
	class InventoryItem_Base_F;	// External class reference
	class ItemCore;	// External class reference
	class UniformItem;	// External class reference
	class HeadgearItem;	// External class reference
	class VestItem;	// External class reference
	class Rifle;	// External class reference
	
	class Rifle_Base_F : Rifle {
		class weaponSlotsInfo;	// External class reference
		class GunParticles;	// External class reference
	};
	class UGL_F;	// External class reference
	
	class SM_Gear : ItemCore {
		scope = 0;
		allowedSlots[] = {BACKPACK_SLOT};
		hiddenSelections[] = {"camo"};
		
		class ItemInfo : VestItem {
			hiddenSelections[] = {"camo"};
			LOAD[] = {(0,0)};
		};
	};
	class TIOW_Mk7Vest : SM_Gear { // For more info go to https://community.bistudio.com/wiki/Arma_3_Soldier_Protection

		class ItemInfo : ItemInfo {

			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					armor = 250; // addition to armor of referenced hitpoint
					passThrough = 0.1; // multiplier of base passThrough defined in referenced hitpoint
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_UM : TIOW_Mk7Vest {

		
		class ItemInfo : ItemInfo {

			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_IF : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_BA : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_BR : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_SL : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_RG : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			mass = 100;
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_IH : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_WS : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_DA : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_SW : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_WB : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_IW : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_BL : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_WE : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_EC : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_AL : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_TS : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_NL : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_Mk7Limbs_DG : TIOW_Mk7Vest {
		
		class ItemInfo : ItemInfo {
			
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Chest {
					hitpointName = "HitChest";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 250;
					passThrough = 0.1;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
	};
	class SM_Helm_Base : ItemCore {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_UM : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_UM : TIOW_MK7Helmet_UM {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_IF : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_IF : TIOW_MK7Helmet_IF {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_BA : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_BA : TIOW_MK7Helmet_BA {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_BR : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_BR : TIOW_MK7Helmet_BR {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_SL : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_SL : TIOW_MK7Helmet_SL {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_RG : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_RG : TIOW_MK7Helmet_RG {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_IH : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_IH : TIOW_MK7Helmet_IH {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_WS : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_WS : TIOW_MK7Helmet_WS {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_DA : SM_Helm_Base {

		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_DA : TIOW_MK7Helmet_DA {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_SW : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_SW : TIOW_MK7Helmet_SW {

		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_WB : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_WB : TIOW_MK7Helmet_WB {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_IW : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet2_IW : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_IW : TIOW_MK7Helmet_IW {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_BL : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_BL : TIOW_MK7Helmet_BL {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_WE : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_WE : TIOW_MK7Helmet_WE {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_EC : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_EC : TIOW_MK7Helmet_EC {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_AL : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_AL : TIOW_MK7Helmet_AL {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_TS : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_TS : TIOW_MK7Helmet_TS {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_NL : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_NL : TIOW_MK7Helmet_NL {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK7Helmet_DG : SM_Helm_Base {
		
		class ItemInfo : HeadgearItem {
			
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
	class TIOW_MK4Helmet_DG : TIOW_MK7Helmet_DG {
		
		class ItemInfo : HeadgearItem {
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
	};
};
