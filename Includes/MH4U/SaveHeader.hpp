#pragma once
#include "types.h"
#include "MH4U/Equipment/Equipment.hpp"
#include "MH4U/Equipment/EqGeneral.hpp"
#include <string>
#include <vector>
#include <wx/textctrl.h>
#include <wx/clrpicker.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/dataview.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/bmpcbox.h>

const u32 ITEM_S = 100*14;
const u32 EQUIP_S = 100*15;
const u32 PALICO_EQUIP_S = 100*6;

namespace MH4U
{
    class Save
    {
        public:
        #pragma pack(push,1)
        
	    struct sDate {
		    uint8_t		Day;
		    uint8_t		Month;
		    uint16_t	Year;
	    };
	    
	    struct sCardList {
		    sDate		AcquireDate;
		    wchar_t		Comment[11 + 1];  // or 13(1) no padding
		    uint32_t	padding1;
		    uint32_t	Union;
		    uint8_t		Type;
		    uint8_t		padding[3];
		    uint64_t	GCID;
	    };
	    
	    struct sMonsterLog {
		    uint16_t	Hunts; //shown as = hunts + caps
		    uint16_t	Captures;
		    uint16_t	BigCrown; // Absolute Percent
		    uint16_t	SmallCrown; // Absolute Percent
		    struct {
			    uint16_t	isDiscovered	: 1;
			    uint16_t	isBigCrown		: 2; // 0 = none 1 = silver, 2 = gold
			    uint16_t	isSmallCrown	: 1; // 0 = none 1 = gold
		    };
	    };
	    
	    
	    
	    struct sJournal {
		    sDate		CompleteDate;
		    int16_t		Type;// 12 cases
		    uint16_t	QuestLevel;
		    uint8_t		MilestoneType[3]; // 39 cases
		    uint8_t		padding; // ?
		    uint32_t	PlayerN[3];
		    uint32_t	FaintN[3];
		    wchar_t		Player_2_Name[10 + 2];
		    uint8_t		padding2;
		    wchar_t		Player_3_Name[10 + 2];
		    uint8_t		padding3;
		    wchar_t		Player_4_Name[10 + 2];
		    uint8_t		padding4;
		    wchar_t		QuestName[20 + 1];
		    uint8_t		padding5;
		    uint8_t		PlayerWeapon[4];
		    uint16_t	padding6;
	    };
	    
	    struct sGuildCard { // at 0x83F0450
		    uint8_t			BTM_BackgroundID;
		    uint8_t			Title_middleID;
		    uint16_t		Title_startID;
		    uint16_t		Title_endID;
		    uint16_t		HR;
		    wchar_t			PlayerName[10 + 2];
		    uint16_t		CaravanLow;
		    uint16_t		GHallLow;
		    uint16_t		GHlaaHigh;
		    uint16_t		GuildQuests;
		    uint16_t		Arena;
		    uint16_t		CaravanHigh;
		    uint16_t		GRank;
		    uint16_t		padding1; // ?
		    Equipment::sWeapon		Weapon;
		    Equipment::sArmor		Head;
		    Equipment::sArmor		Chest;
		    Equipment::sArmor		Arms;
		    Equipment::sArmor		Waiste;
		    Equipment::sArmor		Legs;
		    Equipment::sTalisman	Talisman;
		    struct {
			    uint32_t		Unity; // : TODO - find division in unity number
		    };
		    uint32_t		StreetPassTags;
		    wchar_t			Greeting[26 + 1]; // or 62(1)
		    
		    uint8_t			Gender;
		    uint8_t			Face;
		    uint8_t			Voice;
		    uint8_t			EyeColor;
		    uint8_t			FaceFeature;
			uint8_t			Clothing;
		    uint8_t			Hair;
		    uint8_t			isRegistered;
		    uint8_t			Scene;
		    uint8_t			Pose;
		    uint8_t			ClothingColor[2]; // X:Y
		    uint8_t			HairColor[2];
		    uint8_t			FaceFeatureColor[2];
		    uint8_t			SkinTone[2];
		    uint8_t			unk1[8];
		    uint8_t			unk2[64];
		    uint32_t		unk3;
		    sJournal		JournalNote[10];
		    sMonsterLog		MonsterLog[59];
		    
		    
		    
		    
		    
		    
		    
	    };
	    
	    struct sBoxPalicoEquip {
		    u16         eqType;
		    u16         ID;
	    };
	    

        struct sPalico { // size 0xE8
            wchar_t				PalicoName[10+2];
            u32					padding1[2];
            uint8_t				CloatColor[4]; // rgba
            uint8_t				ClothingColor[4];
            uint8_t				Coat;
            uint8_t				Clothes;
            uint8_t				Eyes;
            uint8_t				Ears;
            uint8_t				Tail;
            uint8_t				Voice;
            uint16_t			unk[3];
            sBoxPalicoEquip		Weapon;
            sBoxPalicoEquip		Head;
	        sBoxPalicoEquip		Body;
            uint16_t			unk1[5];
            wchar_t				PalicoComment[14+1];
	        uint32_t			unk2[6];
	        wchar_t				FormerMaster[10 + 2];
	        uint32_t			unk3[8];
	        wchar_t				Namegiver[10 + 2];
	        uint32_t			unk4[6];
        };
        
        struct sBoxEquip {
            union{
                Equipment::sWeapon      Weapon;
                Equipment::sArmor       Armor;
                Equipment::sTalisman    Talisman;
                struct {
                    u8      Type;
                    u8      padding;
                    u16     ID;
                    u8      RawData[24];
                } wxEquipment;
                u8      RawData[28];
            };
        };
        struct sBoxItem {
            u16     ID;
            u16     Ammount;
        };
        struct sGqAreaInfo {
            u8      unk[4];
        };
        struct sGqBossAreaInfo {
            u8          unk[7];
        };
        struct GqBoss {
            u16         ID;
            u16         unk[19];
        };
        struct sGuildQuest { // Start at id:45100
            wchar_t			OriginalOwnerName[10+2];
            uint64_t		GQuniqueID;
            uint16_t		padding;
            uint8_t			PoogieFeline;
            uint8_t			PoogieFelineID;
            uint8_t			PoogiFelineArea;
            uint8_t			BiasWeapon;
            uint8_t			BiasArmorSeries;
            uint8_t			BiasArmor;
            GqBoss			Monster[5];
            sGqBossAreaInfo MonsterAreaInfo[5];
            uint8_t			padding2;
            sGqAreaInfo		AreaInfo[5];
            uint8_t				InitialLevel;
            uint8_t				CurrentLevel;
            uint8_t				IsRare;
            uint8_t				MonsterFrenzyStatus[5];
        };
        struct sHeader { // at 0x8369848
            wchar_t					PlayerName[10+2];
            uint8_t					Gender;
            uint8_t					Face;
            uint8_t					Hair;
            uint8_t					Clothing;
            uint8_t					Voice;
            uint8_t					EyeColor;
            uint8_t					FaceFeature;
            uint8_t					FaceFeatureColor[3];
            uint8_t					HairColor[3];
            uint8_t					ClothingColor[3];
            uint8_t					SkinTone[3];
            uint8_t					padding; // maybe?
            uint32_t				HunterRank;
            uint32_t				HunterRankPoints;
            uint32_t				Zenny;
            uint32_t				Playtime; // seconds
            uint32_t				padding1;
            Equipment::sWeapon		Weapon;
            Equipment::sArmor		Head;
            Equipment::sArmor		Chest;
            Equipment::sArmor		Arms;
            Equipment::sArmor		Waiste;
            Equipment::sArmor		Legs;
            Equipment::sTalisman	Talisman;
            uint32_t				WeaponEquipedBoxSlot;
            uint32_t				ChestEquipedBoxSlot;
            uint32_t				ArmsEquipedBoxSlot;
            uint32_t				WaistEquipedBoxSlot;
            uint32_t				LegsEquipedBoxSlot;
            uint32_t				HeadEquipedBoxSlot;
            uint32_t				TalismanEquipedBoxSlot;
            uint32_t				unk[5];
            uint32_t				padding2[10];
            uint16_t				padding3;
            sBoxItem				BoxItems[ITEM_S];
            sBoxEquip				BoxEquipment[EQUIP_S];	// 0x173E = [0]
            sBoxPalicoEquip			BoxPalicoEquip[PALICO_EQUIP_S];
            uint16_t				padding4;
            sPalico					MainPalico;				// 0xC4B0
	        
            uint32_t				unk1[1476];
            sGuildQuest				GuildQuestRegistered[10]; // 0xDCA0 | at 0x83774F0
            uint8_t					unk2[4];
            uint32_t				fillers[3];
            uint32_t				padding5[2];
            uint32_t				CaravanPoints;			// 0xE8A0
	        
			uint32_t				unk3[677];
	        sPalico					FirstStringersPalico[5]; // 1 at 0xF338	2 at 0xF420
	        sPalico					ReservesPalico[50]; // end: 0x12510
	        uint32_t				unk4[60];
	        sGuildCard				GuildCard;
	        

        };
        #pragma pack(pop)
						/*  Pass "filename" and "output" buffer to Blowfish
						**  to decrypt and prepare buffer to work.
						*/
						Save();
						~Save();
	    
	    /* Encrypt given savefile using Buffer::vectorBuffer
	     **/
	    static void		Init(std::string& filepath, size_t encryption);
	    static void		Populate();

        static void     SwitchStatusNType(int Type, EquipmentType EqType, wxChoice* wxStatusAmmount);
        static const char*     IDtoString (EquipmentType Type, u32 ID);

        static	void            FillGeneral1(   wxTextCtrl* wxPlName,
                                        wxChoice*   wxGender,
                                        wxChoice*   wxFace,
                                        wxChoice*   wxFaceFeature,
                                        wxChoice*   wxHair,
                                        wxChoice*   wxClothing,
                                        wxChoice*   wxVoice);

        static	void            FillGeneral2(   wxSpinCtrl* wxHR,
                                        wxSpinCtrl* wxHRPoints,
                                        wxSpinCtrl* wxCaravanPoints);

        static	void            FillGeneral3(   wxSpinCtrl* wxZenny,
                                        wxSpinCtrl* wxPlaytime);

        static	void            FillColors( wxColourPickerCtrl* wxFaceFeatureColor,
                                    wxColourPickerCtrl* wxHairColor,
                                    wxColourPickerCtrl* wxClothingColor,
                                    wxColourPickerCtrl* wxSkinTone);
        
        static	void            FillItemBox(wxDataViewListCtrl* wxItemBox);
        static	void            FillEqBox(wxDataViewListCtrl* wxEqBox);
        static wxVector<wxVariant>     MakeItem(int i);

        static void     FillItemComboBox(wxComboBox* wxItemComboBox);
        static void     FillEqEditorTypeChoiceBox(wxChoice* wxTypeCBox);
        static const wxArrayString&  TypeTowxArrayString (EquipmentType Type);
        static const wxString&       TypetowxString(EquipmentType Type);
        static void     SwitchEqEditorNameType(EquipmentType Type, wxComboBox* wxNameBox);

        static void     FillSlotComboBoxes( wxComboBox* wxSlot1,
                                            wxComboBox* wxSlot2,
                                            wxComboBox* wxSlot3);

        ///
        ///
        /// Panel specific fillers:
        static void     FillArmorPanel(   wxChoice*   wxDefence,
                                          wxChoice*   wxResistance);

        static void     FillTalismanPanel(
            wxComboBox* wxSkill1,
            wxComboBox* wxSkill2);

        static void     FillWeaponPanel(
            wxChoice*   wxHoning,
            wxChoice*   wxStatusType,
            wxChoice*   wxStatusN,
            wxBitmapComboBox* wxSharpness);

        static void     FillGSpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillSnSpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillDBpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillHammerPanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillLancePanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillLSpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillCBpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillSApanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillGLpanel(
            wxChoice*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillHHpanel(
            wxBitmapComboBox*   wxBonus,
            wxChoice*   wxAtkLvl);

        static void     FillIGpanel(
            wxChoice*   wxRelicKinsect,
            wxChoice*   wxAtkLvl,
            wxChoice*   wxCraftedKinsect);
	    
	    static void		WriteGeneral(
		    wxTextCtrl*	wxPlayerName,
		    wxChoice*	wxGender,
		    wxChoice*	wxFace,
		    wxChoice*	wxFaceFeature,
		    wxChoice*	wxHair,
		    wxChoice*	wxClothing,
		    wxChoice*	wxVoice,
		    wxChoice*	wxEyeColor,
		    wxColourPickerCtrl*	wxFaceFeatureColour,
		    wxColourPickerCtrl*	wxHairColour,
		    wxColourPickerCtrl*	wxClothingColour,
		    wxColourPickerCtrl*	wxSkinTone,
		    wxSpinCtrl*	wxZenny,
		    wxSpinCtrl*	wxCaravanPoints,
		    wxSpinCtrl*	wxHR,
		    wxSpinCtrl*	wxHRpoints,
		    wxSpinCtrl*	wxPlaytime);

        static void     ParserTypeToEqEditor(int ID, wxChoice* wxType);
        static void     ParserNameToEqEditor(int ID, wxComboBox* wxName);
        
        static wxColour			RGBtowxRGB(uint8_t RGB[3]);
	    static void				wxColourToRGB(wxColour& colour, uint8_t RGB[3]);
        static void				SetSelectedEqID(int id);
        static int				GetSelectedEqID();
        

        static sHeader *saveHeader;
        static int selectedEqID;
    };
}