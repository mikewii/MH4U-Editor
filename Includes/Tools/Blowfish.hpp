// blowfish.h     interface file for blowfish.cpp
// _THE BLOWFISH ENCRYPTION ALGORITHM_
// by Bruce Schneier
// Revised code--3/20/94
// Converted to C++ class 5/96, Jim Conger
#ifndef BLOWFISH_HPP
#define BLOWFISH_HPP

#include "types.h"
#include <vector>
#include <string>

namespace TOOLS
{
    #define MAXKEYu8S       56  // 448 bits max
    #define NPASS           16  // SBox passes

    class Blowfish
    {
    private:
        u32         * PArray ;
        u32         (* SBoxes)[256];
        void        Blowfish_encipher (u32 *xl, u32 *xr) ;
        void        Blowfish_decipher (u32 *xl, u32 *xr) ;
        void        MH_XORswap (std::vector<char> &buffer, u32 seed);
        void        MH_vectorInsert (std::vector<char> &buffer, u32 value);

    public:
        enum FileType {
            Save,
            Quest
        };
        enum Output {
            Yes,
            No
        };
        enum Action {
            Decrypt,
            Encrypt,
	        Copy
        };
                    Blowfish ();
                    Blowfish (  Action act,
                                std::string filename,
                                std::vector<char> &output,
                                FileType type,
                                Output choise);
                    ~Blowfish ();
        void        Initialize (u8 key[], int keybytes) ;
        void        Clear();
        u32         GetOutputLength (u32 lInputLong) ;
        u32         Encode (u8 * pInput, u8 * pOutput, u32 lSize) ;
        void        Decode (u8 * pInput, u8 * pOutput, u32 lOutSize) ;
        void        MHDecode (std::vector<char> &input, std::vector<char> &output, FileType type);
        void        MHEncode (std::vector<char> &input, std::vector<char> &output, FileType type);

    } ;

    // choose a byte order for your hardware
    #define ORDER_DCBA	// chosing Intel in this case

    #ifdef ORDER_DCBA  	// DCBA - little endian - intel
        union aword {
        u32 dword;
        u8 byte [4];
        struct {
            u32 byte3:8;
            u32 byte2:8;
            u32 byte1:8;
            u32 byte0:8;
        } w;
        };
    #endif

    #ifdef ORDER_ABCD  	// ABCD - big endian - motorola
        union aword {
        u32 dword;
        u8 byte [4];
        struct {
            u32 byte0:8;
            u32 byte1:8;
            u32 byte2:8;
            u32 byte3:8;
        } w;
        };
    #endif

    #ifdef ORDER_BADC  	// BADC - vax
        union aword {
        u32 dword;
        u8 byte [4];
        struct {
            u32 byte1:8;
            u32 byte0:8;
            u32 byte3:8;
            u32 byte2:8;
        } w;
        };
    #endif
}
#endif