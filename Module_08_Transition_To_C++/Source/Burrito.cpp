/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Hello World with Dr. Dan - A Complete Introduction to Programming from Java to C++ (Code and Course � Dan Grissom)
//
// Additional Lesson Resources from Dr. Dan:
//		High-Quality Video Tutorials: www.helloDrDan.com
//		Free Commented Code: https://github.com/DanGrissom/hello-world-dr-dan-java
//
// Lesson Note:
// 		This class is consumed by Lesson_04_Burrito_Client.cpp
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "../Headers/Burrito.h"

///////////////////////////////////////////////////////////////////////////////////
// Constructor
///////////////////////////////////////////////////////////////////////////////////
Burrito::Burrito(string meat, string beans)
{
	meatType = meat;
	beanType = beans;
}

///////////////////////////////////////////////////////////////////////////////////
// Deconstructor
///////////////////////////////////////////////////////////////////////////////////
Burrito::~Burrito() { }

///////////////////////////////////////////////////////////////////////////////////
// Returns textual summary of class as a String.
///////////////////////////////////////////////////////////////////////////////////
string Burrito::getSummary() {
	string summary = "Burrito w/ " + meatType + " & " + beanType;
	return summary;
}

