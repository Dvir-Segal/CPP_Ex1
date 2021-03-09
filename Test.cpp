#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>

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




//Check the input (proper input: positive input, 8 digits, every digit between 1-4)
TEST_CASE("Negetives Number"){
    CHECK_THROWS_AS(snowman(-1), out_of_range);
    CHECK_THROWS_AS(snowman(0), out_of_range);
    CHECK_THROWS_AS(snowman(-12), out_of_range);
    CHECK_THROWS_AS(snowman(-123), out_of_range);
    CHECK_THROWS_AS(snowman(-4122), out_of_range);
    CHECK_THROWS_AS(snowman(-21333), out_of_range);
    CHECK_THROWS_AS(snowman(-323211), out_of_range);
    CHECK_THROWS_AS(snowman(-1322144), out_of_range);
    CHECK_THROWS_AS(snowman(-11224433), out_of_range);
}

TEST_CASE("Length of Input"){
    CHECK_THROWS_AS(snowman(1), out_of_range);
    CHECK_THROWS_AS(snowman(12), out_of_range);
    CHECK_THROWS_AS(snowman(312), out_of_range);
    CHECK_THROWS_AS(snowman(4123), out_of_range);
    CHECK_THROWS_AS(snowman(33122), out_of_range);
    CHECK_THROWS_AS(snowman(121333), out_of_range);
    CHECK_THROWS_AS(snowman(2323211), out_of_range);
    CHECK_THROWS_AS(snowman(131322144), out_of_range);
}

TEST_CASE("Every digit between 1-4"){
    CHECK_THROWS_AS(snowman(91234123), out_of_range);
    CHECK_THROWS_AS(snowman(16142344), out_of_range);
    CHECK_THROWS_AS(snowman(31512344), out_of_range);
    CHECK_THROWS_AS(snowman(41271112), out_of_range);
    CHECK_THROWS_AS(snowman(33128432), out_of_range);
    CHECK_THROWS_AS(snowman(12133944), out_of_range);
    CHECK_THROWS_AS(snowman(23232171), out_of_range);
    CHECK_THROWS_AS(snowman(13132216), out_of_range);
}

TEST_CASE("Good snowman code") {
    //Check for H
    CHECK(string(snowman(11114411)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L1 + N1 + R1 + ")" + Y4U + "\n" + X4D + T1 + Y4D + "\n" +B1));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));
    CHECK(string(snowman(41341322)) == string("\n" + H4U + "\n" + H4D + "\n" + X1U + "(" + L3 + N1 + R4 + ")" + Y3U + "\n" + X1D + T2 + Y3D + "\n" + B2));

    //Check for N
    CHECK(string(snowman(14334223)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L3 + N4 + R3 + ")" + Y2U + "\n" + X4D + T2 + Y2D + "\n" + B3));
    CHECK(string(snowman(13432122)) == string("\n" + H1U + "\n" + H1D + "\n" + X2U + "(" + L4 + N3 + R3 + ")" + Y1U + "\n" + X2D + T2 + Y1D + "\n" + B2));
    CHECK(string(snowman(32411112)) == string("\n" + H3U + "\n" + H3D + "\n" + X1U + "(" + L4 + N2 + R1 + ")" + Y1U + "\n" + X1D + T1 + Y1D + "\n" + B2));
    CHECK(string(snowman(41123231)) == string("\n" + H4U + "\n" + H4D + "\n" + X3U + "(" + L1 + N1 + R2 + ")" + Y2U + "\n" + X3D + T3 + Y2D + "\n" + B1));

    //Check for L
    CHECK(string(snowman(11114411)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L1 + N1 + R1 + ")" + Y4U + "\n" + X4D + T1 + Y4D + "\n" +B1));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));
    CHECK(string(snowman(41441322)) == string("\n" + H4U + "\n" + H4D + "\n" + X1U + "(" + L4 + N1 + R4 + ")" + Y3U + "\n" + X1D + T2 + Y3D + "\n" + B2));
    
    //Check for R
    CHECK(string(snowman(14344223)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X4D + T2 + Y2D + "\n" + B3));
    CHECK(string(snowman(13432122)) == string("\n" + H1U + "\n" + H1D + "\n" + X2U + "(" + L4 + N3 + R3 + ")" + Y1U + "\n" + X2D + T2 + Y1D + "\n" + B2));
    CHECK(string(snowman(32411112)) == string("\n" + H3U + "\n" + H3D + "\n" + X1U + "(" + L4 + N2 + R1 + ")" + Y1U + "\n" + X1D + T1 + Y1D + "\n" + B2));
    CHECK(string(snowman(41123231)) == string("\n" + H4U + "\n" + H4D + "\n" + X3U + "(" + L1 + N1 + R2 + ")" + Y2U + "\n" + X3D + T3 + Y2D + "\n" + B1));

    //Check for X
    CHECK(string(snowman(14344223)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X4D + T2 + Y2D + "\n" + B3));
    CHECK(string(snowman(13432122)) == string("\n" + H1U + "\n" + H1D + "\n" + X2U + "(" + L4 + N3 + R3 + ")" + Y1U + "\n" + X2D + T2 + Y1D + "\n" + B2));
    CHECK(string(snowman(32411112)) == string("\n" + H3U + "\n" + H3D + "\n" + X1U + "(" + L4 + N2 + R1 + ")" + Y1U + "\n" + X1D + T1 + Y1D + "\n" + B2));
    CHECK(string(snowman(41123231)) == string("\n" + H4U + "\n" + H4D + "\n" + X3U + "(" + L1 + N1 + R2 + ")" + Y2U + "\n" + X3D + T3 + Y2D + "\n" + B1));

    //Check for Y
    CHECK(string(snowman(11114411)) == string("\n" + H1U + "\n" + H1D + "\n" + X4U + "(" + L1 + N1 + R1 + ")" + Y4U + "\n" + X4D + T1 + Y4D + "\n" +B1));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));
    CHECK(string(snowman(41441322)) == string("\n" + H4U + "\n" + H4D + "\n" + X1U + "(" + L4 + N1 + R4 + ")" + Y3U + "\n" + X1D + T2 + Y3D + "\n" + B2));

    //Check for T
    CHECK(string(snowman(22222222)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X2D + T2 + Y2D + "\n" + B2));
    CHECK(string(snowman(22221233)) == string("\n" + H2U + "\n" + H2D + "\n" + X1U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X1D + T3 + Y2D + "\n" + B3));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));

    //Check for B
    CHECK(string(snowman(22222222)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X2D + T2 + Y2D + "\n" + B2));
    CHECK(string(snowman(22221233)) == string("\n" + H2U + "\n" + H2D + "\n" + X1U + "(" + L2 + N2 + R2 + ")" + Y2U + "\n" + X1D + T3 + Y2D + "\n" + B3));
    CHECK(string(snowman(34342211)) == string("\n" + H3U + "\n" + H3D + "\n" + X2U + "(" + L3 + N4 + R4 + ")" + Y2U + "\n" + X2D + T1 + Y2D + "\n" + B1));
    CHECK(string(snowman(21212144)) == string("\n" + H2U + "\n" + H2D + "\n" + X2U + "(" + L2 + N1 + R1 + ")" + Y1U + "\n" + X2D + T4 + Y1D + "\n" + B4));
}
