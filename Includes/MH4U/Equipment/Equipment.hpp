#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include "types.h"
#include <vector>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include "MH4U/Equipment/EqGeneral.hpp"
#include <wx\bmpcbox.h>
#include <wx\collpane.h>


namespace MH4U
{
    class Equipment
    {
        public:
        
        enum{
            Crafted,
            Relic };
        enum{
            Blademaster,
            Gunner};

        struct sDecoSlot{
            u16     Decoration : 15;
            u16     isFixed : 1;
        };
        struct sInfo {
            u8		Polished : 1;
            u8		Glow : 1;
            u8		Slots : 2;
            u8		padding : 4;
        };
        struct sHone {
            u8      padding : 6;
            u8      Honing : 2;
        };
        struct sArmor {
            u8          EqipType;
            u8          ArmorLevel;
            u16         ID;
            u16         Color;
            sDecoSlot   Slot[3];
            u8          Resistance;
            u8          Defence;
            u16         Unk;
            sInfo       Info;
            u8          Rarity;
            u8          ExcavatedType;
            u8          ColorMode;
            u32         Padding[2];
        };
        struct sTalisman {
            u8          EquipType;
            u8          NumOfSlots;
            u8          TalismanType;
            u8          Unk[3];
            sDecoSlot   Slot[3];
            u16         Skill1;
            s16         Skill1Ammount;
            u16         Skill2;
            s16         Skill2Ammount;
            u32         Padding[2];
        };
        union sWeapon {
            struct sGS {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sharpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          AtkBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }GS;
            struct sSnS {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sharpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          DefBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }SnS;
            struct sHammer {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          AffBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }Hammer;
            struct sLance {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          DefBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }Lance;
            struct sLBG {
                u8          EquipType;
                u8          UpgradeType;
                u16         ID;
                u8          Unk1;
                u8          Unk2;
                sDecoSlot   Slot[3];
                u8          ClipSizeType;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          CrouchFireType;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }LBG;
            struct sHBG {
                u8          EquipType;
                u8          UpgradeType;
                u16         ID;
                u8          Unk1;
                u8          Unk2;
                sDecoSlot   Slot[3];
                u8          ClipSizeType;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          RapidFireType;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }HBG;
            struct sLS {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          AffBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }LS;
            struct sSA {
                u8          EquipType;
                u8          EquipLevel;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          PhialType;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }SA;
            struct sGL {
                u16         EquipType;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          ShotTypeLevel;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }GL;
            struct sBow {
                u16         EquipType;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          ShotType;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          Unk;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }Bow;
            struct sDB {
                u16         EquipType;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          AffBonus;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }DB;
            struct sHH {
                u16         EquipType;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          SongNoteColor;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }HH;
            struct sIG {
                u8          EquipType;
                u8          KinsectLevel;
                u16         ID;
                union{
                    u8      StatusAmount_Relics;
                    u8      KinsectType_Crafted;
                };
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          KinsectType_Relics;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u8          KinsectPower;
                u8          KinsectStamina;
                u8          KinsectSpeed;
                u8          KinectFireAtk;
                u8          KinsectWaterAtk;
                u8          KinsectThunderAtk;
                u8          KinsectIceAtk;
                u8          KinsectDragonAtk;
            }IG;
            struct sCB {
                u16         EquipType;
                u16         ID;
                u8          StatusAmount;
                u8          StatusType;
                sDecoSlot   Slot[3];
                u8          Sparpness;
                u8          AtkAffDef;
                u8          RelicLevel;
                u8          PhialType;
                sInfo       Info;
                u8          Rarity;
                u8          ExcavatedType;
                sHone       Hone;
                u32         padding[2];
            }CB;
        };


        Equipment(){};
        ~Equipment(){};

        



        static void     SaveFlushData(int ID);

       

        ///
        /// Parsers:
		static void		ParseGeneralData(
			int			ID,
			wxComboBox* wxDecoSlot1,
			wxCheckBox* wxDecoSlot1Fixed,
			wxComboBox* wxDecoSlot2,
			wxCheckBox* wxDecoSlot2Fixed,
			wxComboBox* wxDecoSlot3,
			wxCheckBox* wxDecoSlot3Fixed,
			wxCheckBox* wxPolished,
			wxCheckBox* wxGlow,
			wxChoice*   wxSlots,
			wxChoice*	wxRarity,
			wxChoice*	wxExcavatedType);

        static void     ParseArmorData(
            int			ID,
            wxSpinCtrl* wxUpgradeLevel,
            wxSpinCtrl* wxColore,
            wxSpinCtrl* wxColorMode,
            wxChoice*   wxDefence,
            wxChoice*   wxResistance);

        static void     ParseBlademasterData(
            EquipmentType EqType,
            int         ID,
            wxChoice*   wxHoning,
            wxBitmapComboBox* wxSharpness,
            wxChoice*   wxAtkLvl,
            wxChoice*   wxAtkBonus,
            wxChoice*   wxRelicLvl,
            wxChoice*   wxStatusType,
            wxChoice*   wxStatusAmount);

        static void     ParseIGdata(
            int         ID,
            wxChoice*   wxRelicKinsect,
            wxChoice*   wxCraftedKinsect,
            wxCollapsiblePane* wxRelicInfo,
            wxChoice*   wxKinsectLevel,
            wxSpinCtrl* wxKPower,
            wxSpinCtrl* wxKStamina,
            wxSpinCtrl* wxKSpeed,
            wxSpinCtrl* wxKFire,
            wxSpinCtrl* wxKWater,
            wxSpinCtrl* wxKThunder,
            wxSpinCtrl* wxKIce,
            wxSpinCtrl* wxKDragon);
        
        static void     ParseTalismanData(
            int         ID,
            wxComboBox* wxDecoSlot1,
            wxCheckBox* wxDecoSlot1Fixed,
            wxComboBox* wxDecoSlot2,
            wxCheckBox* wxDecoSlot2Fixed,
            wxComboBox* wxDecoSlot3,
            wxCheckBox* wxDecoSlot3Fixed,
            wxComboBox* wxSkill1,
            wxSpinCtrl* wxSkill1Ammount,
            wxComboBox* wxSkill2,
            wxSpinCtrl* wxSkill2Ammount,
            wxChoice*   wxSlots);

        ///
        ///
		static void		SaveGeneralData(
            int         Type,
            int         NameID,
			wxComboBox* wxDecoSlot1,
			wxCheckBox* wxDecoSlot1Fixed,
			wxComboBox* wxDecoSlot2,
			wxCheckBox* wxDecoSlot2Fixed,
			wxComboBox* wxDecoSlot3,
			wxCheckBox* wxDecoSlot3Fixed,
			wxCheckBox* wxPolished,
			wxCheckBox* wxGlow,
			wxChoice*   wxSlots,
			wxChoice*	wxRarity,
			wxChoice*	wxExcavatedType);

        

		static void		SaveArmorData(
            wxSpinCtrl* wxUpgradeLevel,
            wxSpinCtrl* wxColore,
            wxSpinCtrl* wxColorMode,
            wxChoice*   wxDefence,
            wxChoice*   wxResistance);

        static void     SaveBlademasterData(
            wxChoice*   wxHoning,
            wxBitmapComboBox* wxSharpness,
            wxChoice*   wxAtkLvl,
            wxChoice*   wxAtkBonus,
            wxChoice*   wxRelicLvl,
            wxChoice*   wxStatusType,
            wxChoice*   wxStatusAmount,
            EquipmentType EqType = EquipmentType::None);

        static void     SaveIGdata(
            wxChoice*   wxCraftedKinsect,
            wxChoice*   wxKinsectLevel,
            wxSpinCtrl* wxKPower,
            wxSpinCtrl* wxKStamina,
            wxSpinCtrl* wxKSpeed,
            wxSpinCtrl* wxKFire,
            wxSpinCtrl* wxKWater,
            wxSpinCtrl* wxKThunder,
            wxSpinCtrl* wxKIce,
            wxSpinCtrl* wxKDragon);

        static void     SaveTalismanData(
            int         Type,
            int         NameID,
            wxComboBox* wxDecoSlot1,
            wxCheckBox* wxDecoSlot1Fixed,
            wxComboBox* wxDecoSlot2,
            wxCheckBox* wxDecoSlot2Fixed,
            wxComboBox* wxDecoSlot3,
            wxCheckBox* wxDecoSlot3Fixed,
            wxComboBox* wxSkill1,
            wxSpinCtrl* wxSkill1Ammount,
            wxComboBox* wxSkill2,
            wxSpinCtrl* wxSkill2Ammount,
            wxChoice*   wxSlots);

    };
}

#endif