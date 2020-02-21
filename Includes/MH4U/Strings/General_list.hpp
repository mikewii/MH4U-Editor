#ifndef GENERAL_LIST_HPP
#define GENERAL_LIST_HPP
#include <wx/arrstr.h>
#include <cmath>

namespace MH4U
{
    enum StatusTypes{
        none,
        Fire,
        Water,
        Thunder,
        Dragon,
        Ice,
        Poison,
        Paralysis,
        Sleep,
        Blast};

    const char* EQUIPMENT_NAMES[] = {
        "(None)",
        "Chest",
        "Arms",
        "Waist",
        "Legs",
        "Head",
        "Talisman",
        "Great Sword",
        "Sword'n'Shield",
        "Hammer",
        "Lance",
        "Light Bow Gun",
        "Heavy Bow Gun",
        "Long Sword",
        "Switch Axe",
        "Gun Lance",
        "Bow",
        "Dual Blades",
        "Hunting Horn",
        "Insect Glaive",
        "Charge Blade"
    }; const wxArrayString wxEQUIPMENT_NAMES(21, EQUIPMENT_NAMES);

    const char* ARMOR_DEFENCE_LIST[] = {
        "10",
        "12",
        "16",
        "18",
        "20",
        "22",
        "33",
        "36",
        "39",
        "20",
        "24",
        "30",
        "34",
        "40",
        "45",
        "65",
        "72",
        "78",
        "46",
        "50",
        "54",
        "64",
        "72",
        "86",
        "92",
        "98",
        "112",
        "120" }; const wxArrayString wxARMOR_DEFENCE_LIST(28, ARMOR_DEFENCE_LIST);

    const char* ARMOR_RESISTANCE_LIST[] = {
        "Fi 4 / Wa -1 / Th 1 / Ic 0 / Dr 1",
        "Fi 1 / Wa 4 / Th -1 / Ic 0 / Dr 1",
        "Fi -1 /Wa 0 / Th 4 / Ic 1 / Dr 1",
        "Fi 0 / Wa -1 / Th 1 / Ic 4 / Dr 1",
        "Fi 1 / Wa 1 / Th -1 / Ic 0 / Dr 4",
        "Fi 6 / Wa -2 / Th 1 / Ic 0 / Dr 1",
        "Fi 1 / Wa 6 / Th -2 / Ic 0 / Dr 1",
        "Fi -2 / Wa 0 / Th 6 / Ic 1 / Dr 1",
        "Fi -2 / Wa 0 / Th 1 / Ic 6 / Dr 1",
        "Fi 1 / Wa 1 / Th 0 / Ic -2 / Dr 6",
        "Fi 6 / Wa -1 / Th 1 / Ic -1 / Dr 4",
        "Fi 1 / Wa 6 / Th -1 / Ic -1 / Dr 4",
        "Fi -1 / Wa -1 / Th 6 / Ic 1 / Dr 4",
        "Fi -1 / Wa -1 / Th 1 / Ic 6 / Dr 4",
        "Fi 1 / Wa 1 / Th -2 / Ic -2 / Dr 8",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 3 / Wa -2 / Th 0 / Ic -1 / Dr 0",
        "Fi 0 / Wa 3 / Th -2 / Ic -1 / Dr 0",
        "Fi -2 / Wa -1 / Th 3 / Ic 0 / Dr 0",
        "Fi -1 / Wa -2 / Th 0 / Ic 3 / Dr 0",
        "Fi 0 / Wa 0 / Th -2 / Ic -1 / Dr 3",
        "Fi 5 / Wa -3 / Th 0 / Ic -1 / Dr 0",
        "Fi 0 / Wa 5 / Th -3 / Ic -1 / Dr 0",
        "Fi -3 / Wa -1 / Th 5 / Ic 0 / Dr 0",
        "Fi -3 / Wa -1 / Th 0 / Ic 5 / Dr 0",
        "Fi 0 / Wa 0 / Th -1 / Ic -3 / Dr 5",
        "Fi 5 / Wa -2 / Th 0 / Ic -2 / Dr 3",
        "Fi 0 / Wa 5 / Th -2 / Ic -2 / Dr 3",
        "Fi -2 / Wa -2 / Th 5 / Ic 0 / Dr 3",
        "Fi -2 / Wa -2 / Th 0 / Ic 5 / Dr 3",
        "Fi 0 / Wa 0 / Th -3 / Ic -3 / Dr 7",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0",
        "Fi 0 / Wa 0 / Th 0 / Ic 0 / Dr 0" }; const wxArrayString wxARMOR_RESISTANCE_LIST(40, ARMOR_RESISTANCE_LIST);

    const char* WEAPON_HONING[] = {
        "(None)",
        "Attack",
        "Defence",
        "Life" }; const wxArrayString wxWEAPON_HONING(4, WEAPON_HONING);

    const char* WEAPON_STATUS_TYPE[] = {
        "(None)",
        "Fire",
        "Water",
        "Thunder",
        "Dragon",
        "Ice",
        "Poison",
        "Paralysis",
        "Sleep",
        "Blast" }; const wxArrayString wxWEAPON_STATUS_TYPE(10, WEAPON_STATUS_TYPE);

    const char* WEAPON_HIGH_STATUS[] = {
        "210",
        "250*",
        "250",
        "280*",
        "270",
        "300*",
        "280",
        "310*",
        "300",
        "330*",
        "330",
        "360*",
        "360",
        "390*",
        "400",
        "430*",
        "450",
        "480*" }; const wxArrayString wxWEAPON_HIGH_STATUS(18, WEAPON_HIGH_STATUS);

    const char* WEAPON_HIGH_ELEMENT[] = {
        "180",
        "220*",
        "250",
        "300*",
        "280",
        "310*",
        "340",
        "370*",
        "390",
        "400*",
        "430",
        "460*",
        "480",
        "490*",
        "510",
        "550*",
        "570",
        "630*",
        "630",
        "660*",
        "670",
        "690*",
        "700",
        "720*",
        "750",
        "810*" }; const wxArrayString wxWEAPON_HIGH_ELEMENT(26, WEAPON_HIGH_ELEMENT);

    const char* WEAPON_LOW_STATUS[] = {
        "100",
        "120*",
        "120",
        "140*",
        "130",
        "150*",
        "140",
        "150*",
        "150",
        "160*",
        "160",
        "180*",
        "180",
        "190*",
        "200",
        "210*",
        "220",
        "240*" }; const wxArrayString wxWEAPON_LOW_STATUS(18, WEAPON_LOW_STATUS);

    const char* WEAPON_LOW_ELEMENT[] = {
        "90",
        "110*",
        "120",
        "150*",
        "140",
        "150*",
        "170",
        "180*",
        "190",
        "200*",
        "210",
        "230*",
        "240",
        "240*",
        "250",
        "270*",
        "280",
        "310*",
        "310",
        "330*",
        "330",
        "340*",
        "350",
        "360*",
        "370",
        "400*" }; const wxArrayString wxWEAPON_LOW_ELEMENT(26, WEAPON_LOW_ELEMENT);

    const char* WEAPON_MEDIUM_STATUS[] = {
        "140",
        "170*",
        "170",
        "190*",
        "180",
        "200*",
        "190",
        "210*",
        "200",
        "220*",
        "220",
        "240*",
        "240",
        "260*",
        "270",
        "290*",
        "300",
        "320*" }; const wxArrayString wxWEAPON_MEDIUM_STATUS(18, WEAPON_MEDIUM_STATUS);

    const char* WEAPON_MEDIUM_ELEMENT[] = {
        "120",
        "150*",
        "170",
        "200*",
        "190",
        "210*",
        "230",
        "250*",
        "260",
        "270*",
        "290",
        "310*",
        "320",
        "330*",
        "340",
        "370*",
        "380",
        "420*",
        "420",
        "440*",
        "450",
        "460*",
        "470",
        "480*",
        "500",
        "540*" }; const wxArrayString wxWEAPON_MEDIUM_ELEMENT(26, WEAPON_MEDIUM_ELEMENT);
    const char* WPN_STATUS_NONE[] = {
        "(None)",
        "Chose type" }; const wxArrayString wxWPN_STATUS_NONE(1, WPN_STATUS_NONE);

    const char* ATK_BONUS[] = {
        "(None)",
        "+10",
        "+20" }; const wxArrayString wxATK_BONUS(3, ATK_BONUS);

    const char* AFFINITY_BONUS[] = {
        "(None)",
        "+10%",
        "+20%" }; const wxArrayString wxAFFINITY_BONUS(3, AFFINITY_BONUS);

    const char* DEFENCE_BONUS[] = {
        "(None)",
        "+10",
        "+20",
        "+20",
        "+35" }; const wxArrayString wxDEFENCE_BONUS(5, DEFENCE_BONUS);

    const char* SA_PHIALS[] = {
        "Power",
        "Element",
        "Para",
        "Dragon",
        "Exhaust",
        "Poison" }; const wxArrayString wxSA_PHIALS(6, SA_PHIALS);

    const char* CB_PHIALS[] = {
        "Impact",
        "Element" }; const wxArrayString wxCB_PHIALS(2, CB_PHIALS);

    const char* GL_SHOTS[] = {
        "Lv1 Normal",
        "Lv1 Wide",
        "Lv1 Long",
        "LV2 Normal",
        "LV2 Wide",
        "LV2 Long",
        "LV3 Normal",
        "LV3 Wide",
        "LV3 Long",
        "LV4 Normal",
        "LV4 Wide",
        "LV4 Long",
        "LV5 Normal",
        "LV5 Wide",
        "LV5 Long",
        "Lv86 Normal*" }; const wxArrayString wxGL_SHOTS(16, GL_SHOTS);

    const char* IG_KINSECT_NAMES[] = {
        "Cutting | Culldrone",
        "Cutting | Reavedrone",
        "Cutting | Alucanid",
        "Cutting | Monarch Alucanid",
        "Cutting | Empresswing",
        "Cutting | Rigiprayne",
        "Cutting | Cancadaman",
        "Cutting | Fiddlebrix",
        "Cutting | Windchopper",
        "Cutting | Grancathar",
        "Cutting | Psuedocath",
        "Cutting | Elscarad",
        "Blunt   | Mauldrone",
        "Blunt   | Pummeldrone",
        "Blunt   | Foebeetle",
        "Blunt   | Carnage Beetle",
        "Blunt   | Bonnetfille",
        "Blunt   | Ladytarge",
        "Blunt   | Ladypavise",
        "Blunt   | Arkmaiden",
        "Blunt   | Gullshad",
        "Blunt   | Bullshroud",
        "Blunt   | Whispervesp",
        "Blunt   | Arginesse",
        "Blunt   | Thunderball(dummy)",
        "Cutting | Bilbobrix",
        "Cutting | Foliacath",
        "Cutting | Exalted Alucanid",
        "Cutting | Great Elscarad",
        "Blunt   | Ladytower",
        "Blunt   | Fleetflammer",
        "Blunt   | Gleambeetle",
        "Blunt   | Great Arginesse",
        "Blunt   | Clockmaster",
        "Cutting | Barret Hawk(dummy)" }; const wxArrayString wxIG_KINSECT_NAMES(35, IG_KINSECT_NAMES);

    const int RAW_ATK[] = {
        110,
        120,
        130,
        140,
        150,
        160,
        170,
        170,
        170,
        180,
        170,
        180,
        190,
        230,
        210,
        240,
        250,
        270,
        290,
        310,
        340,
        355 };


    wxArrayString wxGS_ATK;
    wxArrayString wxH_HH_ATK;
    wxArrayString wxL_GL_ATK;
    wxArrayString wxSNS_DB_ATK;
    wxArrayString wxLS_ATK;
    wxArrayString wxSA_ATK;
    wxArrayString wxIG_ATK;
    wxArrayString wxCB_ATK;
    wxArrayString wxBOW_ATK;
    wxArrayString wxLBG_ATK;
    wxArrayString wxHBG_ATK;

    void ATK_CALC() {
        for (int i = 0;i < 22;i++) {

            int gs          = ceil(MH4U::RAW_ATK[i] * 4.8);
            int hammer_hh   = ceil(MH4U::RAW_ATK[i] * 5.2);
            int lance_gl    = ceil(MH4U::RAW_ATK[i] * 2.3);
            int sns_db      = ceil(MH4U::RAW_ATK[i] * 1.4);
            int ls          = ceil(MH4U::RAW_ATK[i] * 3.3);
            int sa          = ceil(MH4U::RAW_ATK[i] * 5.4);
            int ig          = ceil(MH4U::RAW_ATK[i] * 3.1);
            int cb          = ceil(MH4U::RAW_ATK[i] * 3.6);
            int bow         = ceil(MH4U::RAW_ATK[i] * 1.2);
            int lbg         = ceil(MH4U::RAW_ATK[i] * 1.3);
            int hbg         = ceil(MH4U::RAW_ATK[i] * 1.5);

            wxGS_ATK.push_back      (std::to_string(gs));
            wxH_HH_ATK.push_back    (std::to_string(hammer_hh));
            wxL_GL_ATK.push_back    (std::to_string(lance_gl));
            wxSNS_DB_ATK.push_back  (std::to_string(sns_db));
            wxLS_ATK.push_back      (std::to_string(ls));
            wxSA_ATK.push_back      (std::to_string(sa));
            wxIG_ATK.push_back      (std::to_string(ig));
            wxCB_ATK.push_back      (std::to_string(cb));
            wxBOW_ATK.push_back     (std::to_string(bow));
            wxLBG_ATK.push_back     (std::to_string(lbg));
            wxHBG_ATK.push_back     (std::to_string(hbg));

        }
    }
}
#endif

