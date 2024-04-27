#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool isEmpty(const string str);							//This functions will check for an empty string


bool isLengthOfMobileNumberIs11(const string str);		//This function will check that the lenght of mobile number is 11

bool isStringOnlyNumbers(const string str);				//This functions will check the strings in which the user must enter numbers

bool isStringOnlyAlphabets(const string str);			//This functions will check the strings in which the user must enter alphbets


void checkInput(int& n);		//This function will check for negative or invalid input in integer variable

bool checkSortingChoice(const int choice);		//This will check user choice for sorting
