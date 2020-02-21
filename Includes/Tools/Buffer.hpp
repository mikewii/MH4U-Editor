#ifndef BUFFER_HPP
#define BUFFER_HPP
#include "types.h"
#include <vector>
#include <wx/variant.h>


namespace TOOLS
{
    class Buffer
    {
        public:
            static void                 SetwxBuffer(wxVariant &input);
            static void                 SetVectorBuffer(std::vector<char> &input);
            static wxVariant            GetwxBuffer();
            static std::vector<char>    GetVectorBuffer();
            static void                 Cleanup();

		//private:
			static wxVariant wxBuffer;
			static std::vector<char> vectorBuffer;
			static std::vector<char> vectorBufferQuest;
			//static char* EqBuffer;
			static std::vector<char> vectorEqBuffer;
			static std::vector<char> BufItm;
			static std::vector<char> BufGdm;
			static std::vector<std::string> BufItmNames;

    };
}

#endif