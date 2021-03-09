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

int arr[numDigit];
for (int i = numDigit-1; i >= 0; i--){
    arr[i] = input%devider;
    input/=devider;
}

string output = "\n";
switch (arr[0]){
    case 1:
        output.append(H1U + "\n" + H1D + "\n");
        break;
    case 2:
        output.append(H2U + "\n" + H2D + "\n");
        break;
    case 3:
        output.append(H3U + "\n" + H3D + "\n");
        break;  
    case 4:
        output.append(H4U + "\n" + H4D + "\n");
        break;
}

string face = "(";
switch (arr[2]){
    case 1:
        face.append(L1);
        break;
    case 2:
        face.append(L2);
        break;
    case 3:
        face.append(L3);
        break;  
    case 4:
        face.append(L4);
        break;
}

switch (arr[1]){
    case 1:
        face.append(N1);
        break;
    case 2:
        face.append(N2);
        break;
    case 3:
        face.append(N3);
        break;  
    case 4:
        face.append(N4);
        break;
}

switch (arr[3]){
    case 1:
        face.append(R1+")");
        break;
    case 2:
        face.append(R2+")");
        break;
    case 3:
        face.append(R3+")");
        break;  
    case 4:
        face.append(R4+")");
        break;
}

switch (arr[4]){
    case 1:
        output.append(X1U+face);
        break;
    case 2:
        output.append(X2U+face);
        break;
    case 3:
        output.append(X3U+face);
        break;  
    case 4:
        output.append(X4U+face);
        break;
}

switch (arr[5]){
    case 1:
        output.append(Y1U+"\n");
        break;
    case 2:
        output.append(Y2U+"\n");
        break;
    case 3:
        output.append(Y3U+"\n");
        break;
    case 4:
        output.append(Y4U+"\n");
        break;
}

switch (arr[4]){
    case 1:
        output.append(X1D);
        break;
    case 2:
        output.append(X2D);
        break;
    case 3:
        output.append(X3D);
        break;  
    case 4:
        output.append(X4D);
        break;
}

switch (arr[6]){
    case 1:
        output.append(T1);
        break;
    case 2:
        output.append(T2);
        break;
    case 3:
        output.append(T3);
        break;  
    case 4:
        output.append(T4);
        break;
}

switch (arr[5]){
    case 1:
        output.append(Y1D+"\n");
        break;
    case 2:
        output.append(Y2D+"\n");
        break;
    case 3:
        output.append(Y3D+"\n");
        break;
    case 4:
        output.append(Y4D+"\n");
        break;
}

switch (arr[7]){
    case 1:
        output.append(B1);
        break;
    case 2:
        output.append(B2);
        break;
    case 3:
        output.append(B3);
        break;
    case 4:
        output.append(B4);
        break;
}

return output;

}


}
