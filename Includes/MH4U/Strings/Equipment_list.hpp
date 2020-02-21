#ifndef EQUIPMENT_LIST_HPP
#define EQUIPMENT_LIST_HPP
#include <wx/arrstr.h>
#include <string>

using std::string;

namespace MH4U
{
    const char* EQUIPMENT_NAMES[] = {
        "(None)",
        "Head",
        "Chest",
        "Arms",
        "Waist",
        "Legs",
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
    }; wxArrayString wxEQUIPMENT_NAMES(21, EQUIPMENT_NAMES);

    const string TYPE[2][] ={
        {"hh", "ss"},
        {"hh2", "ss2"}};
}

#endif