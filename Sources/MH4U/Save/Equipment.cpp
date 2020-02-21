#include "MH4U/Equipment/Equipment.hpp"
#include "Tools/Buffer.hpp"
#include "MH4U/SaveHeader.hpp"
#include "MH4U\Strings\Relics_list.hpp"

namespace MH4U
{
    static void    SetSlotData( 
        Save::sHeader* Header,
        int ID,
        int i,
        wxComboBox* wxSlot,
        wxCheckBox* wxSlotCheck);

    static void    WriteSlotData(
        Equipment::sArmor* Eq,
        int i,
        wxComboBox* wxSlot,
        wxCheckBox* wxSlotCheck);



	

    void    Equipment::SaveArmorData(
            wxSpinCtrl* wxUpgradeLevel,
            wxSpinCtrl* wxColore,
            wxSpinCtrl* wxColorMode,
            wxChoice*   wxDefence,
            wxChoice*   wxResistance) {

        sArmor *Eq = reinterpret_cast<sArmor*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));

        Eq->ArmorLevel = wxUpgradeLevel->GetValue() - 1;
        Eq->Color = wxColore->GetValue();
        Eq->ColorMode = wxColorMode->GetValue();

        Eq->Defence = wxDefence->GetSelection();
        Eq->Resistance = wxResistance->GetSelection();

    }

    void     Equipment::SaveBlademasterData(
        wxChoice*   wxHoning,
        wxBitmapComboBox* wxSharpness,
        wxChoice*   wxAtkLvl,
        wxChoice*   wxAtkBonus,
        wxChoice*   wxRelicLvl,
        wxChoice*   wxStatusType,
        wxChoice*   wxStatusAmount,
        EquipmentType EqType) {

        sWeapon::sGS *Eq = reinterpret_cast<sWeapon::sGS*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));

        int honing = wxHoning->GetSelection();
        int sharpness = wxSharpness->GetSelection();
        int atkLvl = wxAtkLvl->GetSelection();
        int Bonus = wxAtkBonus->GetSelection();
        int relicLvl = wxRelicLvl->GetSelection();
        int statusType = wxStatusType->GetSelection();
        int statumAmount = wxStatusAmount->GetSelection();

        if (sharpness == 22) { sharpness = 158; }
        if (atkLvl == 21) { atkLvl = 91; }
        if ((EqType == EquipmentType::GL) && (Bonus == 15)) { Bonus = 255; }

        Eq->Hone.Honing = honing;
        Eq->Sharpness = sharpness;
        Eq->AtkAffDef = atkLvl;
        Eq->AtkBonus = Bonus;
        Eq->RelicLevel = relicLvl;
        Eq->StatusType = statusType;
        Eq->StatusAmount = statumAmount;

    }


    void    Equipment::SaveIGdata(
        wxChoice*   wxCraftedKinsect,
        wxChoice*   wxKinsectLevel,
        wxSpinCtrl* wxKPower,
        wxSpinCtrl* wxKStamina,
        wxSpinCtrl* wxKSpeed,
        wxSpinCtrl* wxKFire,
        wxSpinCtrl* wxKWater,
        wxSpinCtrl* wxKThunder,
        wxSpinCtrl* wxKIce,
        wxSpinCtrl* wxKDragon) {

        sWeapon::sIG *Eq = reinterpret_cast<sWeapon::sIG*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));

        int craftedKinsect = wxCraftedKinsect->GetSelection();
        int kLevel = wxKinsectLevel->GetSelection();
        int kPower = wxKPower->GetValue();
        int kStamina = wxKStamina->GetValue();
        int kSpeed = wxKSpeed->GetValue();
        int kFire = wxKFire->GetValue();
        int kWater = wxKWater->GetValue();
        int kThunder = wxKThunder->GetValue();
        int kIce = wxKIce->GetValue();
        int kDragon = wxKDragon->GetValue();

        /// TODO: implement relic check!
        
        Eq->KinsectLevel        = kLevel;
        Eq->KinsectPower        = kPower;
        Eq->KinsectStamina      = kStamina;
        Eq->KinsectSpeed        = kSpeed;
        Eq->KinectFireAtk       = kFire;
        Eq->KinsectWaterAtk     = kWater;
        Eq->KinsectThunderAtk   = kThunder;
        Eq->KinsectIceAtk       = kIce;
        Eq->KinsectDragonAtk    = kDragon;

    }
    ///
    ///
    /// Parsers:

	void	Equipment::ParseGeneralData(
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
            wxChoice*	wxExcavatedType) {

		Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));


		bool isPolished;
		bool isGlow;
		uint8_t slots;
		uint8_t rarity;
		uint8_t excavatedType;



		SetSlotData(buf, ID, 0, wxDecoSlot1, wxDecoSlot1Fixed);
		SetSlotData(buf, ID, 1, wxDecoSlot2, wxDecoSlot2Fixed);
		SetSlotData(buf, ID, 2, wxDecoSlot3, wxDecoSlot3Fixed);

		isPolished = static_cast<bool>(static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Info.Polished));
		isGlow = static_cast<bool>((static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Info.Glow)));
		slots = ((static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Info.Slots)));

		wxPolished->SetValue(!isPolished);
		wxGlow->SetValue(isGlow);
		wxSlots->SetSelection(slots);

		rarity = static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Rarity);
		wxRarity->SetSelection(rarity);

		excavatedType = static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.ExcavatedType);
		wxExcavatedType->SetSelection(excavatedType);

	} // END of Equipment::ParseGeneralData

    void     Equipment::ParseArmorData(
        int			ID,
        wxSpinCtrl* wxUpgradeLevel,
        wxSpinCtrl* wxColore,
        wxSpinCtrl* wxColorMode,
        wxChoice* wxDefence,
        wxChoice* wxResistance) {

        Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));

        uint8_t defence;
        uint8_t resistance;

        wxUpgradeLevel->SetValue(static_cast<int>(buf->BoxEquipment[ID].Armor.ArmorLevel) + 1);
        wxColore->SetValue(buf->BoxEquipment[ID].Armor.Color);
        wxColorMode->SetValue(buf->BoxEquipment[ID].Armor.ColorMode);

        defence = static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Defence);
        wxDefence->SetSelection(defence);

        resistance = static_cast<uint8_t>(buf->BoxEquipment[ID].Armor.Resistance);
        wxResistance->SetSelection(resistance);

    } // END of Equipment::ParseArmorData
    
    void    Equipment::ParseBlademasterData(
        EquipmentType EqType,
        int         ID,
        wxChoice*   wxHoning,
        wxBitmapComboBox* wxSharpness,
        wxChoice*   wxAtkLvl,
        wxChoice*   wxAtkBonus,
        wxChoice*   wxRelicLvl,
        wxChoice*   wxStatusType,
        wxChoice*   wxStatusAmount) {

        Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));
        
        int honing = buf->BoxEquipment[ID].Weapon.GS.Hone.Honing;
        int sharpness = buf->BoxEquipment[ID].Weapon.GS.Sharpness;
        int atkLvl = buf->BoxEquipment[ID].Weapon.GS.AtkAffDef;
        /// Bonus - is diffrent for each weapon, look at structures*
        int Bonus = buf->BoxEquipment[ID].Weapon.GS.AtkBonus;
        int relicLvl = buf->BoxEquipment[ID].Weapon.GS.RelicLevel;
        int statusType = buf->BoxEquipment[ID].Weapon.GS.StatusType;
        int statusAmount = buf->BoxEquipment[ID].Weapon.GS.StatusAmount;


        if (sharpness == 158) { sharpness = 22; }
        if (atkLvl == 91) { atkLvl = 21; }
        if ((EqType == EquipmentType::GL) && (Bonus == 255)) { Bonus = 15; }


        wxHoning->SetSelection(honing);
        wxSharpness->SetSelection(sharpness);
        wxAtkLvl->SetSelection(atkLvl);
        wxAtkBonus->SetSelection(Bonus);
        wxRelicLvl->SetSelection(relicLvl);
        wxStatusType->SetSelection(statusType);

        MH4U::Save::SwitchStatusNType(
            statusType,
            static_cast<MH4U::EquipmentType>(EqType),
            wxStatusAmount);

        wxStatusAmount->SetSelection(statusAmount);

    } // END of Equipment::ParseGSdata

    void     Equipment::ParseIGdata(
        int         ID,
        wxChoice*   wxCraftedKinsect,
        wxChoice*   wxRelicKinsect,
        wxCollapsiblePane* wxRelicInfo,
        wxChoice*   wxKinsectLevel,
        wxSpinCtrl* wxKPower,
        wxSpinCtrl* wxKStamina,
        wxSpinCtrl* wxKSpeed,
        wxSpinCtrl* wxKFire,
        wxSpinCtrl* wxKWater,
        wxSpinCtrl* wxKThunder,
        wxSpinCtrl* wxKIce,
        wxSpinCtrl* wxKDragon) {

        Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));

        int craftedKinsect = buf->BoxEquipment[ID].Weapon.IG.KinsectType_Crafted;
        int kLevel = buf->BoxEquipment[ID].Weapon.IG.KinsectLevel;
        int kPower = buf->BoxEquipment[ID].Weapon.IG.KinsectPower;
        int kStamina = buf->BoxEquipment[ID].Weapon.IG.KinsectStamina;
        int kSpeed = buf->BoxEquipment[ID].Weapon.IG.KinsectSpeed;
        int kFire = buf->BoxEquipment[ID].Weapon.IG.KinectFireAtk;
        int kWater = buf->BoxEquipment[ID].Weapon.IG.KinsectWaterAtk;
        int kThunder = buf->BoxEquipment[ID].Weapon.IG.KinsectThunderAtk;
        int kIce = buf->BoxEquipment[ID].Weapon.IG.KinsectIceAtk;
        int kDragon = buf->BoxEquipment[ID].Weapon.IG.KinsectDragonAtk;

        
        // TODO: implement relic check
        wxCraftedKinsect->Disable();
        int EqID = buf->BoxEquipment[ID].Weapon.IG.ID;
        if (!relicCheckIG(EqID)) {
            wxRelicInfo->Disable();
            wxCraftedKinsect->Enable();
            wxCraftedKinsect->SetSelection(craftedKinsect);
        }
        

        wxKinsectLevel->SetSelection(kLevel);
        wxKPower->SetValue(kPower);
        wxKStamina->SetValue(kStamina);
        wxKSpeed->SetValue(kSpeed);
        wxKFire->SetValue(kFire);
        wxKWater->SetValue(kWater);
        wxKThunder->SetValue(kThunder);
        wxKIce->SetValue(kIce);
        wxKDragon->SetValue(kDragon);

    } // END of Equipment::ParseIGdata



	void Equipment::SaveGeneralData(
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
		wxChoice*	wxExcavatedType){

        TOOLS::Buffer::vectorEqBuffer.resize(sizeof(sArmor));
        TOOLS::Buffer::vectorEqBuffer.clear();
        
        sArmor *Eq = reinterpret_cast<sArmor*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));


		

        Eq->EqipType = Type;
        Eq->ID = NameID;

        WriteSlotData(Eq, 0, wxDecoSlot1, wxDecoSlot1Fixed);
        WriteSlotData(Eq, 1, wxDecoSlot2, wxDecoSlot2Fixed);
        WriteSlotData(Eq, 2, wxDecoSlot3, wxDecoSlot3Fixed);

        Eq->Info.Polished = !wxPolished->IsChecked();
        Eq->Info.Glow = wxGlow->IsChecked();
        Eq->Info.Slots = wxSlots->GetSelection();

        Eq->Rarity = wxRarity->GetSelection();
        Eq->ExcavatedType = wxExcavatedType->GetSelection();

	} // END of Equipment::SaveGeneralData

    void     Equipment::ParseTalismanData(
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
        wxChoice*   wxSlots) {

        Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));

        SetSlotData(buf, ID, 0, wxDecoSlot1, wxDecoSlot1Fixed);
        SetSlotData(buf, ID, 1, wxDecoSlot2, wxDecoSlot2Fixed);
        SetSlotData(buf, ID, 2, wxDecoSlot3, wxDecoSlot3Fixed);

        short skill1 = buf->BoxEquipment[ID].Talisman.Skill1;
        short skill1Ammount = buf->BoxEquipment[ID].Talisman.Skill1Ammount;
        
        wxSkill1->SetSelection(skill1);
        wxSkill1Ammount->SetValue(skill1Ammount);

        short skill2 = buf->BoxEquipment[ID].Talisman.Skill2;
        short skill2Ammount = buf->BoxEquipment[ID].Talisman.Skill2Ammount;

        wxSkill2->SetSelection(skill2);
        wxSkill2Ammount->SetValue(skill2Ammount);

        short slots = buf->BoxEquipment[ID].Talisman.NumOfSlots;
        wxSlots->SetSelection(slots);




    } // End of Equipment::ParseTalismanData

    ///
    ///
    /// Type specific savers:

    void     Equipment::SaveTalismanData(
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
        wxChoice*   wxSlots) {

        TOOLS::Buffer::vectorEqBuffer.resize(sizeof(sTalisman));
        TOOLS::Buffer::vectorEqBuffer.clear();

        sTalisman *Eq = reinterpret_cast<sTalisman*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));
        sArmor *EqTal = reinterpret_cast<sArmor*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));


        Eq->EquipType = Type;
        Eq->TalismanType = NameID;
        
        WriteSlotData(EqTal, 0, wxDecoSlot1, wxDecoSlot1Fixed);
        WriteSlotData(EqTal, 1, wxDecoSlot2, wxDecoSlot2Fixed);
        WriteSlotData(EqTal, 2, wxDecoSlot3, wxDecoSlot3Fixed);

        Eq->Skill1 = wxSkill1->GetSelection();
        Eq->Skill1Ammount = wxSkill1Ammount->GetValue();
        
        Eq->Skill2 = wxSkill2->GetSelection();
        Eq->Skill2Ammount = wxSkill2Ammount->GetValue();

        Eq->NumOfSlots = wxSlots->GetSelection();

    } // END of Equipment::SaveTalismanData

    void    Equipment::SaveFlushData(int ID) {

        Save::sHeader *buf = reinterpret_cast<Save::sHeader*>(&(TOOLS::Buffer::vectorBuffer.data()[0]));

        buf->BoxEquipment[ID] = *reinterpret_cast<Save::sBoxEquip*>(&(TOOLS::Buffer::vectorEqBuffer.data()[0]));
    }





























    void    SetSlotData(
        Save::sHeader* Header,
        int ID,
        int i,
        wxComboBox* wxSlot,
        wxCheckBox* wxSlotCheck) {

        bool isFixed;
        uint16_t decoration;
        decoration = static_cast<uint16_t>(Header->BoxEquipment[ID].Armor.Slot[i].Decoration);
        isFixed = static_cast<bool>(Header->BoxEquipment[ID].Armor.Slot[i].isFixed);

        wxSlot->SetSelection(decoration);
        wxSlotCheck->SetValue(isFixed);
        
    }

    void    WriteSlotData(
        Equipment::sArmor* Eq,
        int i,
        wxComboBox* wxSlot,
        wxCheckBox* wxSlotCheck) {

        bool isFixed;
        uint16_t decoration;

        isFixed = wxSlotCheck->IsChecked();
        decoration = wxSlot->GetSelection();

        Eq->Slot[i].Decoration = decoration;
        Eq->Slot[i].isFixed = isFixed;
    }
}