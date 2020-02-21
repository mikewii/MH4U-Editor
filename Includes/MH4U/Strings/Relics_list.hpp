#pragma once

namespace MH4U
{
    struct {
        uint8_t start = 115;
        uint8_t end = 139;
        uint8_t start2 = 236;
        uint8_t end2 = 245;
    }relicGS;

    struct  {
        uint8_t start = 112;
        uint8_t end = 141;
        uint8_t start2 = 237;
        uint8_t end2 = 246;
    } relicSnS;

    struct  {
        uint8_t start = 116;
        uint8_t end = 145;
        uint8_t start2 = 237;
        uint8_t end2 = 246;
    } relicHammer;

    struct  {
        uint8_t start = 93;
        uint8_t end = 117;
        uint8_t start2 = 204;
        uint8_t end2 = 213;
    } relicLance;

    struct  {
        uint8_t start = 93;
        uint8_t end = 117;
        uint8_t start2 = 217;
        uint8_t end2 = 226;
    } relicLS;

    struct  {
        uint8_t start = 87;
        uint8_t end = 111;
        uint8_t start2 = 188;
        uint8_t end2 = 197;
    } relicSA;

    struct  {
        uint8_t start = 100;
        uint8_t end = 124;
        uint8_t start2 = 209;
        uint8_t end2 = 218;
    } relicGL;

    struct  {
        uint8_t start = 110;
        uint8_t end = 134;
        uint8_t start2 = 217;
        uint8_t end2 = 226;
    } relicDB;

    struct  {
        uint8_t start = 81;
        uint8_t end = 100;
        uint8_t start2 = 175;
        uint8_t end2 = 184;
    } relicHH;

    struct  {
        uint8_t start = 138;
        uint8_t end = 157;
    } relicIG;

    struct  {
        uint8_t start = 105;
        uint8_t end = 124;
    } relicCB;




    static bool relicCheckGS(int ID) {
        
        if ((ID >= relicGS.start && ID <= relicGS.end) ||
            (ID >= relicGS.start2 && ID <= relicGS.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckSnS(int ID) {

        if ((ID >= relicSnS.start && ID <= relicSnS.end) ||
            (ID >= relicSnS.start2 && ID <= relicSnS.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckHammer(int ID) {

        if ((ID >= relicHammer.start && ID <= relicHammer.end) ||
            (ID >= relicHammer.start2 && ID <= relicHammer.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckLance(int ID) {

        if ((ID >= relicLance.start && ID <= relicLance.end) ||
            (ID >= relicLance.start2 && ID <= relicLance.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckLS(int ID) {

        if ((ID >= relicLS.start && ID <= relicLS.end) ||
            (ID >= relicLS.start2 && ID <= relicLS.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckSA(int ID) {

        if ((ID >= relicSA.start && ID <= relicSA.end) ||
            (ID >= relicSA.start2 && ID <= relicSA.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckGL(int ID) {

        if ((ID >= relicGL.start && ID <= relicGL.end) ||
            (ID >= relicGL.start2 && ID <= relicGL.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckDB(int ID) {

        if ((ID >= relicDB.start && ID <= relicDB.end) ||
            (ID >= relicDB.start2 && ID <= relicDB.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckHH(int ID) {

        if ((ID >= relicHH.start && ID <= relicHH.end) ||
            (ID >= relicHH.start2 && ID <= relicHH.end2))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckIG(int ID) {

        if ((ID >= relicIG.start && ID <= relicIG.end))
        {
            return true;
        }

        return false;
    }

    static bool relicCheckCB(int ID) {

        if ((ID >= relicCB.start && ID <= relicCB.end))
        {
            return true;
        }

        return false;
    }
}