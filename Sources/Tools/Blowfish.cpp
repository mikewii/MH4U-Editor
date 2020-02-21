#include "Tools/Blowfish.hpp"
#include "Tools/BlowfishTables.hpp"
#include "Tools/Endian.hpp"
#include <random>
#include <iostream>
#include "MH4U/Keys.hpp"

namespace TOOLS
{
    #define S(x,i) (SBoxes[i][x.w.byte##i])
    #define bf_F(x) (((S(x,0) + S(x,1)) ^ S(x,2)) + S(x,3))
    #define ROUND(a,b,n) (a.dword ^= bf_F(b) ^ PArray[n])

    Blowfish::Blowfish () {
        // nothing to do here
        
        
    };
    void Blowfish::Clear () {
        delete PArray ;
        delete [] SBoxes ;
    };

    Blowfish::Blowfish (Action act,
                        std::string filename,
                        std::vector<char> &output,
                        FileType type,
                        Output choise) {
        PArray = new u32[18];
        SBoxes = new u32[4][256];
        
        
        switch(act){

            case(Action::Decrypt):{
                ////printf("Decrypting file %s\n", filename.c_str());
                FILE *finput;
                finput = fopen(filename.c_str(), "rb");
                fseek(finput, 0, SEEK_END);
                u32 finputSize = ftell(finput);
                rewind(finput);

                std::vector<char> inputBuffer(finputSize);
                fread(inputBuffer.data(), finputSize, 1, finput);
                fclose(finput);
                MHDecode(inputBuffer, output, type);
                switch(choise) {
                    case(Yes):{
                        FILE *foutput;
                        filename.append(".dec");
                        foutput = fopen(filename.c_str(), "wb");
                        fwrite(output.data(), output.size(), 1, foutput);
                        fclose(foutput);
                        ////printf("Created File %s\n", filename.c_str());
                        break;
                    };
                    case(No):{
                        ////printf("Decrypting complete!\n");
                        break;
                    };
                };
                break;
            };

            case(Action::Encrypt):{
                // takes buffer filled with data
                ////printf("Encrypting file %s\n", filename.c_str());
                std::vector<char> buffer;
                MHEncode(output, buffer, type);
                switch(choise){
                    case(Yes):{
                        FILE *foutput;
                        filename.append(".out.enc");
                        foutput = fopen(filename.c_str(), "wb");
                        fwrite(buffer.data(), buffer.size(), 1, foutput);
                        fclose(foutput);
                        ////printf("Created File %s\n", filename.c_str());
                        break;
                    };
                    case(No):{
                        ////printf("Encrypting complete!\n");
                        break;
                    };
                }
                output = buffer;
                break;
            };
        case(Action::Copy): {
	        FILE *finput;
	        finput = fopen(filename.c_str(), "rb");
	        fseek(finput, 0, SEEK_END);
	        u32 finputSize = ftell(finput);
	        rewind(finput);
			
	        output.resize(finputSize);
	        fread(output.data(), finputSize, 1, finput);
	        fclose(finput);
	        break;
        };
        }
        
        //Clear();
    };


    void Blowfish::MHDecode (   std::vector<char> &input,
                                std::vector<char> &output,
                                FileType type) {

        u32 outSize = GetOutputLength(input.size());

        switch(type) {
            case(Quest):{
				
	            const int version = 0x35303076;
	            int fVersion = *reinterpret_cast<int*>(&input[4]);
	            
	            if (version == fVersion) {
		            output = input;
		            break;
	            }
	            
                output.resize(outSize);
                Initialize(MH4U::KeyDLC, sizeof(MH4U::KeyDLC) -1);
                
                Decode((u8*)input.data(), (u8*)output.data(), outSize);
                //Clear();
                ////printf("Done!\n");
                break;
            };
            case(Save):{
                //printf("Decrypting save file\n");
                output.resize(outSize);
                Initialize(MH4U::KeySaveFile, sizeof(MH4U::KeySaveFile) -1);

                Decode((u8*)input.data(), (u8*)output.data(), outSize);
                //Clear();

                // TODO XOR:
                u32 seed = (*reinterpret_cast<u32*>(&output[0])) >> 16;
                //printf("seed: 0x%X\n", seed);
                output.erase(output.begin(), output.begin()+4);

                // XOR swap
                MH_XORswap(output, seed);

                u32 checksum = *reinterpret_cast<u32*>(&output[0]);
                //printf("checksum: 0x%X\n", checksum);
                output.erase(output.begin(), output.begin()+4);
                //printf("Done!\n");
                break;
            };
        };

    }; // END Blowfish::MHDecode

    void Blowfish::MHEncode (   std::vector<char> &input,
                                std::vector<char> &output,
                                FileType type) {
        u32 outSize = GetOutputLength(input.size());

        switch(type) {
            case(Quest):{
                //printf("Encrypting quest file\n");
                output.resize(outSize - 4);
                Initialize(MH4U::KeyDLC, sizeof(MH4U::KeyDLC) -1);
                
                Encode((u8*)input.data(), (u8*)output.data(), outSize);
                //Clear();
                //printf("Done!\n");
                break;
            };
            case(Save):{
                //printf("Encrypting save file\n");
                
                std::mt19937 randomEngine(0x484D); // 0x484D = "MH"
                u16 random = randomEngine(); // must be u16
                u32 seed, seed_header;
                seed = seed_header = random;
                u32 i = 0;
                u32 checksum = 0;
                
                // calculate checksum:
                while (i < input.size()) {
                    checksum += input[i] & 0xFF;
                    i++;
                }; i = 0;

                //printf("seed: 0x%X\nseed_header: 0x%X\nchecksum: 0x%X\n", seed, seed_header, checksum);

                // insert checksum at begining of vector:
                MH_vectorInsert(input, checksum);

                // XOR swap
                MH_XORswap(input, seed);
                
                // insert seed at begining of vector
                seed_header = (seed_header << 16) + 0x10;
                //printf("seed: 0x%X\n", seed_header);
                MH_vectorInsert(input, seed_header);

                outSize = GetOutputLength(input.size());
                output.resize(outSize);
                Initialize(MH4U::KeySaveFile, sizeof(MH4U::KeySaveFile) -1);
                Encode((u8*)input.data(), (u8*)output.data(), outSize);
                //Clear();

                //printf("Done!\n");
                break;
            };
        };
    }; // END Blowfish::MHEncode

    void Blowfish::MH_XORswap (std::vector<char> &buffer, u32 seed) {
        u32 i = 0;
        while(i < buffer.size()) {
                    if (seed == 0){seed = 1;}
                    seed = seed * 0xB0 % 0xFF53;
                    *reinterpret_cast<u16*>(&buffer[i]) ^= seed;
                    i+=2;
                };
    };

    void Blowfish::MH_vectorInsert (std::vector<char> &buffer, u32 value) {
        u8 i = 0;
        value = swap_endian<u32>(value);
        while (i < 4){
            if(i !=0){value >>= 8;}
            buffer.insert(buffer.begin(), value);
            i++;
        };
    }

    Blowfish::~Blowfish () {
        //printf("destructing\n");
        delete PArray ;
        delete [] SBoxes ;
    }

    // the low level (private) encryption function
    void Blowfish::Blowfish_encipher (u32 *xl, u32 *xr) {
        union aword  Xl, Xr ;

        Xl.dword = *xl ;
        Xr.dword = *xr ;

        Xl.dword ^= PArray [0];
        ROUND (Xr, Xl, 1) ;  ROUND (Xl, Xr, 2) ;
        ROUND (Xr, Xl, 3) ;  ROUND (Xl, Xr, 4) ;
        ROUND (Xr, Xl, 5) ;  ROUND (Xl, Xr, 6) ;
        ROUND (Xr, Xl, 7) ;  ROUND (Xl, Xr, 8) ;
        ROUND (Xr, Xl, 9) ;  ROUND (Xl, Xr, 10) ;
        ROUND (Xr, Xl, 11) ; ROUND (Xl, Xr, 12) ;
        ROUND (Xr, Xl, 13) ; ROUND (Xl, Xr, 14) ;
        ROUND (Xr, Xl, 15) ; ROUND (Xl, Xr, 16) ;
        Xr.dword ^= PArray [17] ;

        *xr = Xl.dword ;
        *xl = Xr.dword ;
    } // END Blowfish::Blowfish_encipher

    // the low level (private) decryption function
    void Blowfish::Blowfish_decipher (u32 *xl, u32 *xr)
    {
        union aword  Xl ;
        union aword  Xr ;

        Xl.dword = *xl ;
        Xr.dword = *xr ;

        Xl.dword ^= PArray [17] ;
        ROUND (Xr, Xl, 16) ;  ROUND (Xl, Xr, 15) ;
        ROUND (Xr, Xl, 14) ;  ROUND (Xl, Xr, 13) ;
        ROUND (Xr, Xl, 12) ;  ROUND (Xl, Xr, 11) ;
        ROUND (Xr, Xl, 10) ;  ROUND (Xl, Xr, 9)  ;
        ROUND (Xr, Xl, 8)  ;  ROUND (Xl, Xr, 7)  ;
        ROUND (Xr, Xl, 6)  ;  ROUND (Xl, Xr, 5)  ;
        ROUND (Xr, Xl, 4)  ;  ROUND (Xl, Xr, 3)  ;
        ROUND (Xr, Xl, 2)  ;  ROUND (Xl, Xr, 1)  ;
        Xr.dword ^= PArray[0];

        *xl = Xr.dword;
        *xr = Xl.dword;
    } // END Blowfish::Blowfish_decipher

    // constructs the enctryption sieve
    void Blowfish::Initialize (u8 key[], int keybytes) {
        
        s32         i, j ;
        u32         data, datal, datar ;
        union aword temp ;

        // first fill arrays from data tables
        for (i = 0 ; i < 18 ; i++)
            PArray [i] = bf_P [i] ;

        for (i = 0 ; i < 4 ; i++)
        {
            for (j = 0 ; j < 256 ; j++)
                SBoxes [i][j] = bf_S [i][j] ;
        }


        j = 0 ;
        for (i = 0 ; i < NPASS + 2 ; ++i)
        {
            temp.dword = 0 ;
            temp.w.byte0 = key[j];
            temp.w.byte1 = key[(j+1) % keybytes] ;
            temp.w.byte2 = key[(j+2) % keybytes] ;
            temp.w.byte3 = key[(j+3) % keybytes] ;
            data = temp.dword ;
            PArray [i] ^= data ;
            j = (j + 4) % keybytes ;
        }

        datal = 0 ;
        datar = 0 ;

        for (i = 0 ; i < NPASS + 2 ; i += 2)
        {
            Blowfish_encipher (&datal, &datar) ;
            PArray [i] = datal ;
            PArray [i + 1] = datar ;
        }

        for (i = 0 ; i < 4 ; ++i)
        {
            for (j = 0 ; j < 256 ; j += 2)
            {
            Blowfish_encipher (&datal, &datar) ;
            SBoxes [i][j] = datal ;
            SBoxes [i][j + 1] = datar ;
            }
        }
        
    } // END Blowfish::Initialize

    // get output length, which must be even MOD 8
    u32 Blowfish::GetOutputLength (u32 lInputLong)
    {
        u32     lVal ;

        lVal = lInputLong % 8 ;	// find out if uneven number of bytes atthe end
        if (lVal != 0)
            return lInputLong + 8 - lVal ;
        else
            return lInputLong ;
    }

    // Encode pIntput into pOutput.  Input length in lSize.  Returned value
    // is length of output which will be even MOD 8 bytes.  Inputbuffer and
    // output buffer can be the same, but be sure buffer length is even MOD8.
    u32 Blowfish::Encode (u8 * pInput, u8 * pOutput, u32 lSize)
    {
        u32     lCount, lOutSize, lGoodBytes ;
        u8      *pi, *po ;
        int	    i, j ;
        int	    SameDest = (pInput == pOutput ? 1 : 0) ;

        lOutSize = GetOutputLength (lSize) ;
        for (lCount = 0 ; lCount < lOutSize ; lCount += 8)
        {
            if (SameDest)   // if encoded data is being written into inputbuffer
            {
                if (lCount < lSize - 7) // if not dealing with unevenbytes at end
                {
                    Blowfish_encipher ((u32 *) pInput,
                        (u32 *) (pInput + 4)) ;
                }
                else        // pad end of data with null bytes tocomplete encryption
                {
                    po = pInput + lSize ;   // point at bytepast theend of actual data
                    j = (int) (lOutSize - lSize) ;  // number ofbytes to set to null
                    for (i = 0 ; i < j ; i++)
                        *po++ = 0 ;
                    Blowfish_encipher ((u32 *) pInput,
                        (u32 *) (pInput + 4)) ;
                }
                pInput += 8 ;
            }
            else            // output buffer not equal to inputbuffer, so must copy
            {               // input to output buffer prior to encrypting
                if (lCount < lSize - 7) // if not dealing with unevenbytes at end
                {
                    pi = pInput ;
                    po = pOutput ;
                    for (i = 0 ; i < 8 ; i++) // copy bytes to output
                        *po++ = *pi++ ;
                    Blowfish_encipher ((u32 *) pOutput, // nowencrypt them
                        (u32 *) (pOutput + 4)) ;
                }
                else        // pad end of data with null bytes tocomplete encryption
                {
                    lGoodBytes = lSize - lCount ;   // number ofremaining data bytes
                    po = pOutput ;
                    for (i = 0 ; i < (int) lGoodBytes ; i++)
                        *po++ = *pInput++ ;
                    for (j = i ; j < 8 ; j++)
                        *po++ = 0 ;
                    Blowfish_encipher ((u32 *) pOutput,
                        (u32 *) (pOutput + 4)) ;
                }
                pInput += 8 ;
                pOutput += 8 ;
            }
        }
        return lOutSize ;
    } // END Blowfish::Encode


    // Decode pIntput into pOutput.  Input length in lSize.  Inputbuffer and
    // output buffer can be the same, but be sure buffer length is even MOD8.
    void Blowfish::Decode (u8 * pInput, u8 * pOutput, u32 lSize)
    {
        u32     lCount ;
        u8      *pi, *po ;
        int	    i ;
        int	    SameDest = (pInput == pOutput ? 1 : 0) ;

        for (lCount = 0 ; lCount < lSize ; lCount += 8)
        {
            if (SameDest)   // if encoded data is being written into inputbuffer
            {
                Blowfish_decipher ((u32 *) pInput,
                    (u32 *) (pInput + 4)) ;
                pInput += 8 ;
            }
            else            // output buffer not equal to inputbuffer
            {               // so copy input to output before decoding
                pi = pInput ;
                po = pOutput ;
                for (i = 0 ; i < 8 ; i++)
                    *po++ = *pi++ ;
                Blowfish_decipher ((u32 *) pOutput,
                    (u32 *) (pOutput + 4)) ;
                pInput += 8 ;
                pOutput += 8 ;
            }
        }
    } // END Blowfish::Decode


}
