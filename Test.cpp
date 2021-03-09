#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

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





TEST_CASE("Proper input"){
    CHECK_THROWS_AS(snowman(-12), out_of_range);
    CHECK_THROWS_AS(snowman(0), out_of_range);
    CHECK_THROWS_AS(snowman(1233122), out_of_range);
    CHECK_THROWS_AS(snowman(134328), out_of_range);
    CHECK_THROWS_AS(snowman(134328), out_of_range);
    CHECK_THROWS_AS(snowman(8470), out_of_range);
    CHECK_THROWS_AS(snowman(112), out_of_range);
    CHECK_THROWS_AS(snowman(1231), out_of_range);
    CHECK_THROWS_AS(snowman(54321132), out_of_range);
    CHECK_THROWS_AS(snowman(1122443), out_of_range);
    CHECK_THROWS_AS(snowman(1112223332), out_of_range);
    CHECK_THROWS_AS(snowman(1112223332), out_of_range);

}

TEST_CASE("Good snowman code") {
    CHECK(string(snowman(11114411)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L1 + N1 + R1 + ")" + Y4U + "\n" + X4D + T1 + Y4D + "\n" +B1));
    CHECK(string(snowman(12334223)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L3 + N2 + R3 + ")" + Y2U + "\n" + X4D + T2 + Y2D + "\n" + B3));
    CHECK(string(snowman(12432122)) == string("\n" + H1U + "\n" + H1D + "\n" + X2U + "(" + L4 + N2 + R3 + ")" + Y1U + "\n" + X2D + T2 + Y1D + "\n" + B2));
    CHECK(string(snowman(32411112)) == string("\n" + H3U + "\n" + H3D + "\n" + X1U + "(" + L4 + N2 + R1 + ")" + Y1U + "\n" + X1D + T1 + Y1D + "\n" + B2));
    CHECK(string(snowman(41123231)) == string("\n" + H4U + "\n" + H4D + "\n" + X3U + "(" + L1 + N1 + R2 + ")" + Y2U + "\n" + X3D + T3 + Y2D + "\n" + B1));
    CHECK(string(snowman(22222223)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X2D + T2 + Y2D + "\n" + B3));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));
    CHECK(string(snowman(41341322)) == string("\n" + H4U + "\n" + H4D + "\n" + X1U + "(" + L3 + N1 + R4 + ")" + Y3U + "\n" + X1D + T2 + Y3D + "\n" + B2));
    CHECK(string(snowman(22221233)) == string("\n" + H2U + "\n" + H2D + "\n" + X1U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X1D + T3 + Y2D + "\n" + B3));
}
