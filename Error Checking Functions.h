#pragma once
#include<iostream>
#include<string>
using namespace std;

bool isLengthOfMobileNumberIs11(const string str);		//This function will check that the lenght of mobile number is 11

bool isStringOnlynumber(const string str);				//This functions will check the strings in which the user must enter numbers

bool isStringOnlyAlphbets(const string str);			//This functions will check the strings in which the user must enter alphbets

void checkInput(int& n)	//This function will check for negative or invalid input in integer variable
{
	while (cin.fail() || n == INT_MAX || n == INT_MIN || n < 0)			
	{
		cin.clear();
		cin.ignore();
	}
}