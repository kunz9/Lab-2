/*
Dakota Kunz
Due:09/14/2022
Lab 2 Exploring Output
Discription: This lab is designed to get you familiar output
to the command prompt using C ++
*/
#include <iostream>
#include <string>
using namespace std;
const string M = "Monday\t\t";
const string T = "Tuesday\t\t";
const string W = "Wednesday\t";
const string Th = "Thursday\t";
const string F = "Friday\t\t";
const string C = "8:00\tCollege Algebra and Trigonomitry 127";
const string Code = "10:00\tC++ 162";
const string Chem = "11:45\tGeneral Chemistry 1 Lec 165";
const string College = "12:00\tCollege Expirence 108";
const string Lab = "2:15\tGeneral Chemistry 1 Lab 165";

int main()
{	
	cout << endl << M << C;
	cout << endl << M << Code;
	cout << endl << M << Chem;
	cout << endl << T << C;
	cout << endl << T << Code;
	cout << endl << T << College;
	cout << endl << W << C;
	cout << endl << W << Code;
	cout << endl << W << Chem;
	cout << endl << W << Lab;
	cout << endl << Th << C;
	cout << endl << Th << Code;
	cout << endl << F << C;
	cout << endl << F << Code;
	cout << endl << F << Chem;
	return 0;
}