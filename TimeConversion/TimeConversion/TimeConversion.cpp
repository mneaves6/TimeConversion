/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: TimeConversion
 * This program converts time from 12-hour to 24-hour notation
 * and vice-versa.
 */

/*
 * Pseudocode
 * BEGIN
 * print menu
 * input one of three options
 *     1 = convert 12 hour to 24 hour
 *     2 = convert 24 hour to 12 hour
 *     3 = quit program
 * if user enters 1
 *     input hour between 1 and 12
 *     input minutes
 *     input AM or PM
 *     print result
 * if user enters 2
 *     input hour between 1 and 24
 *     input minutes
 *     input AM or PM
 *     print result
 * if user enters 3
 *     program stops
 * END
 */

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Function prototypes
int printMenu();
int convert12Hrto24Hr();
int convert24Hrto12Hr();

//Main function
int main()
{
	//Variable for main function
	int intChoice = 1;

	//Entire program
	do
	{
		//Call printMenu function
		printMenu();

		//User input
		cin >> intChoice;

		//Option 1
		if (1 == intChoice)
		{
			convert12Hrto24Hr();
		}

		//Option 2
		else if (2 == intChoice)
		{
			convert24Hrto12Hr();
		}

		//Option 3
		else if (3 == intChoice)
		{
			cout << " " << endl;
			cout << "Come back soon!" << endl;
			cout << " " << endl;
		}

		//Error message
		else
		{
			cout << " " << endl;
			cout << "Input not valid." << endl;
			cout << " " << endl;
		}
	}

	//Program loops until user quits
	while (intChoice != 3);

    return 0;
}

//printMenu function
int printMenu()
{
	//Options menu
	cout << "Welcome to the time conversion program!" << endl;
	cout << "This program helps you convert time from 12-hour" << endl;
	cout << "notation to 24-hour notation and vice-versa." << endl;
	cout << " " << endl;
	cout << "Here are the available options:" << endl;
	cout << "1 = 12-hour to 24-hour" << endl;
	cout << "2 = 24-hour to 12-hour" << endl;
	cout << "3 = quit program" << endl;
	cout << " " << endl;
	cout << "Please enter your choice: ";

	return 0;
}

//convert12Hrto24Hr function
int convert12Hrto24Hr()
{
	//Variables for convert12Hrto24Hr function
	int intHourAlpha = 1;
	int intMinAlpha = 00;
	char chrChoiceAlpha = 'a';

	//User input for intHourAlpha
	cout << " " << endl;
	cout << "Enter hour(s) between 1 and 12: ";
	cin >> intHourAlpha;

	//Error message for intHourAlpha
	if (intHourAlpha < 1 || intHourAlpha > 12)
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Enter hour(s) between 1 and 12: ";
		cin >> intHourAlpha;
	}

	//User input for intMinAlpha
	cout << " " << endl;
	cout << "Enter minute(s) between 00 and 59: ";
	cin >> intMinAlpha;

	//Error message for intMinAlpha
	if (intMinAlpha < 00 || intMinAlpha > 59)
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Enter minute(s) between 00 and 59: ";
		cin >> intMinAlpha;
	}

	//User input for chrChoiceAlpha
	cout << " " << endl;
	cout << "Is the time AM (a) or PM (b)? ";
	cin >> chrChoiceAlpha;

	//Error message for chrChoiceAlpha
	if (chrChoiceAlpha != 'a' && chrChoiceAlpha != 'b')
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Is the time AM (a) or PM (b)? ";
		cin >> chrChoiceAlpha;
	}

	//If user chooses AM
	if ('a' == chrChoiceAlpha)
	{
		//Result
		cout << " " << endl;
		cout << "Your time is " << intHourAlpha << ":" << intMinAlpha;
		cout << " " << "AM." << endl;
		cout << " " << endl;
	}

	//If user chooses PM
	else if ('b' == chrChoiceAlpha)
	{
		//12Hrto24Hr equation
		intHourAlpha = intHourAlpha + 12;
		//Result
		cout << " " << endl;
		cout << "Your time is " << intHourAlpha << ":" << intMinAlpha;
		cout << " " << "PM." << endl;
		cout << " " << endl;
	}

	return 0;
}

//convert24Hrto12Hr function
int convert24Hrto12Hr()
{
	//Variables for convert24Hrto12Hr function
	int intHourBravo = 1;
	int intMinBravo = 00;
	char chrChoiceBravo = 'a';

	//User input for intHourBravo
	cout << " " << endl;
	cout << "Enter hour(s) between 1 and 24: ";
	cin >> intHourBravo;

	//Error message for intHourBravo
	if (intHourBravo < 1 || intHourBravo > 24)
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Enter hour(s) between 1 and 24: ";
		cin >> intHourBravo;
	}

	//User input for intMinBravo
	cout << " " << endl;
	cout << "Enter minute(s) between 00 and 59: ";
	cin >> intMinBravo;

	//Error message for intMinBravo
	if (intMinBravo < 00 || intMinBravo > 59)
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Enter minute(s) between 00 and 59: ";
		cin >> intMinBravo;
	}

	//User input for chrChoiceBravo
	cout << " " << endl;
	cout << "Is the time AM (a) or PM (b)? ";
	cin >> chrChoiceBravo;

	//Error message for chrChoiceBravo
	if (chrChoiceBravo != 'a' && chrChoiceBravo != 'b')
	{
		cout << " " << endl;
		cout << "Input not valid." << endl;
		cout << " " << endl;
		cout << "Is the time AM (a) or PM (b)? ";
		cin >> chrChoiceBravo;
	}

	//If user chooses AM
	else if ('a' == chrChoiceBravo)
	{
		//Result
		cout << " " << endl;
		cout << "Your time is " << intHourBravo << ":" << intMinBravo;
		cout << " " << "AM." << endl;
		cout << " " << endl;
	}

	//If user chooses PM
	else if ('b' == chrChoiceBravo)
	{
		//24Hrto12Hr equation
		intHourBravo = intHourBravo - 12;
		//Result
		cout << " " << endl;
		cout << "Your time is " << intHourBravo << ":" << intMinBravo;
		cout << " " << "PM." << endl;
		cout << " " << endl;
	}

	return 0;
}