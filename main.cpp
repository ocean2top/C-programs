//This code is developed in Visual Studio 2019
//Written by ocean2top
//Developed using C++

#include <iostream>
#include <sstream>
#include <stdlib.h> //Convert string to integer atoi()
#include "Morse Dic.h"
#include "Checkdatatype.h"
using namespace std;

int MainMenu()
{
	string choice;
	bool repeat = true;
	while (repeat)
	{
		cout << "         MAINMENU\n";
		cout << "-------------------------\n";
		cout << "1. Alphabet to Morse code\n";
		cout << "2. Morse code to Alphabet\n";
		cout << "9. Quit\n";
		cout << "-------------------------\n\n";
		cout << "What do you want to do?: ";
		cin >> choice;
		if (!Validation(choice))
		{
			cout << "Invalid number\n\n";
		}
		else
			repeat = false;
		stringstream  integer(choice);
		int n;
		integer >> n;
		return n;
	}
  return 0;
}

int Selection(int n)
{
	bool loop = true;
	while (loop)
	{
		switch (n)
		{
		case 1:
			loop = false;
			return 1;
			break;
		case 2:
			return 2;
			loop = false;
			break;
		case 9:
			loop = false;
			exit(0);
			break;
		default:
			cout << "Select a valid number\n\n";
			n = MainMenu();
			break;
		}
	}
  return 0;
}

string converter(int d)
{
	string word;

	switch (d)
	{
	case 1:
		cout << '\n';
		cout << "Type a alphabet senteces that you want to convert into Morse code: ";
		cin >> word;
    break;
	case 2:
		cout << '\n';
		cout << "Type a Morse code that you want to convert into alphabet senctecs: ";
		cin >> word;
    break;
	}
	return word;
}

void Display()
{
	return;
}

int main()
{
	int select = MainMenu();
	int decide = Selection(select);
	string text = converter(decide);
	string letter = dictionary(text);
	cout << letter;
	return 0;
}