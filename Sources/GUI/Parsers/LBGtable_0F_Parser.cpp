#include "LBGtable_0F_Parser.h"
#include <fstream>
//#include "lbg_0F_bin.h"
#include <vector>
#include <array>

using std::fstream;
using std::ios;

LBGtable_0F_Parser::LBGtable_0F_Parser( wxWindow* parent )
:
LBGtable_0F_( parent )
{

}


void LBGtable_0F_Parser::Populate() {

    std::string filename = "lbg_0F.csv";
    fstream csv;
    csv.open(filename, ios::in);
    std::string cell;
    std::string line;
    //cell = csv.getline(csv, 2, ',');

    //std::istringstream input("abc|def|gh");
    std::vector<std::array<char, 4>> v;

    // note: the following loop terminates when std::ios_base::operator bool()
    // on the stream returned from getline() returns false
    for (std::array<char, 4> a; csv.getline(&a[0], 4, ','); ) {
        v.push_back(a);
    }

    for (auto& a : v) {
        std::cout << &a[0] << '\n';
    }



}