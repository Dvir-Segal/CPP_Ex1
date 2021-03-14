/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << ariel::snowman(21212144) << endl;   /* Should print:
  ___
 .....
\(o,.) 
 (   )>
 (   )
	*/
	cout << ariel::snowman(32411112) << endl;   /* Should print:
   _
  /_\
 (-..) 
<( : )>
 (" ")
	*/
   cout << ariel::snowman(41123231) << endl;   /* Should print: 
  ___
 (_*_)
 (.,o)/
/(> <) 
 ( : )
     */
  cout << ariel::snowman(41441322) << endl;    /* Should print: 
  ___
 (_*_)
 (-,-) 
<(] [)\
 (" ")
     */
    cout << ariel::snowman(34342211) << endl;    /* Should print: 
   _
  /_\
\(O -)/
 ( : ) 
 ( : )
     */
    cout << ariel::snowman(14344223) << endl;    /* Should print: 
 _===_
 (O -)/
 (] [) 
 (___)
     */
    cout << ariel::snowman(12344321) << endl;    /* Should print: 
 _===_
 (O.-) 
 (] [)\
 ( : )
     */
    cout << ariel::snowman(34121321) << endl;    /* Should print: 
   _
  /_\
 (. o) 
<(] [)\
 ( : )
     */

    
    //Exeptions
	try {
		cout << ariel::snowman(-1) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(0) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-12) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-123) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-4122) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-21333) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-323211) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-1322144) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(-11224433) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(1) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(12) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(312) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(4123) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(33122) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(121333) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(2323121) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
      try {
		cout << ariel::snowman(131322144) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(91234123) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(16142344) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(31512344) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(41271112) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(33128432) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
    try {
		cout << ariel::snowman(12133944) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid input"
	}
}
