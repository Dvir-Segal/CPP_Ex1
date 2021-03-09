#include "snowman.hpp"
#include <string>
#include <stdexcept>
using namespace std;

namespace ariel{
    std:: string snowman(int input){
        const int numDigit = 8;
        const int devider = 10;
        const int minL = 0;
        const int maxL = 5;
    if (input<=0){
        throw out_of_range("Invalid input");
        return " ";
    }
    int num = input;
    for (int i = 0; i < numDigit; i++){
        if (minL<num%devider && num%devider<maxL){
            num/=devider;
        }
        else{
           throw out_of_range("Invalid input");
           return " "; 
        }
    }
    if (num > minL){
        throw out_of_range("Invalid input");
        return " "; 
    }
    return " ";    
    }

    const string H1U = " ";
const string H1D = " _===_";
const string H2U = "  ___";
const string H2D = " .....";
const string H3U = "   _";
const string H3D = "  /_\\";
const string H4U = "  ___";
const string H4D = " (_*_)";

const string N1 = ",";
const string N2 = ".";
const string N3 = "_";
const string N4 = " ";

const string L1 = ".";
const string L2 = "o";
const string L3 = "O";
const string L4 = "-";

const string R1 = ".";
const string R2 = "o";
const string R3 = "O";
const string R4 = "-";

const string X1U = " ";
const string X1D = "<";
const string X2U = "\\";
const string X2D = " ";
const string X3U = " ";
const string X3D = "/";
const string X4U = " ";
const string X4D = " ";

const string Y1U = " ";
const string Y1D = ">";
const string Y2U = "/";
const string Y2D = " ";
const string Y3U = " ";
const string Y3D = "\\";
const string Y4U = " ";
const string Y4D = " ";

const string T1 = "( : )";
const string T2 = "(] [)";
const string T3 = "(> <)";
const string T4 = "(   )";

const string B1 = " ( : )";
const string B2 = " (\" \")";
const string B3 = " (___)";
const string B4 = " (   )";
}