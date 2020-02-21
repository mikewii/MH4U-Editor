#include "Tools/Buffer.hpp"

namespace TOOLS
{
    wxVariant Buffer::wxBuffer = new wxVariant;
    std::vector<char> Buffer::vectorBuffer = std::vector<char>();
	std::vector<char> Buffer::vectorBufferQuest = std::vector<char>();
    //char* Buffer::EqBuffer = new char[28];
    std::vector<char> Buffer::vectorEqBuffer = std::vector<char>();
	std::vector<char> Buffer::BufItm = std::vector<char>();
	std::vector<char> Buffer::BufGdm = std::vector<char>();
	std::vector<std::string> Buffer::BufItmNames = std::vector<std::string>();


    void    Buffer::Cleanup() {
        //delete[]    Buffer::EqBuffer;
        //delete      Buffer::wxBuffer;
    }

    void    Buffer::SetwxBuffer(wxVariant &input) {
        wxBuffer = input;
    } // END of Buffer::SetwxBuffer

    void    Buffer::SetVectorBuffer(std::vector<char> &input) {
        vectorBuffer = input;
    } // END of Buffer::SetVectorBuffer

    std::vector<char>    Buffer::GetVectorBuffer() {
        return vectorBuffer;
    } // END of Buffer::GetVectorBuffer

    wxVariant   Buffer::GetwxBuffer() {
        return wxBuffer;
    } // END of Buffer::GetwxBuffer
}