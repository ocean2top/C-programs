//This code is developed in Visual Studio 2019
//Written by ocean2top
//Developed using C++

#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h> //Convert string to integer atoi()
#include <list>
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
		getline(cin, choice);
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

string GetWord(int d)
{
  string word;
	switch (d)
	{
	case 1:
		cout << '\n';
		cout << "Type a alphabet senteces that you want to convert into Morse code: ";
    getline(cin, word);
    break;
	case 2:
		cout << '\n';
		cout << "Type a Morse code that you want to convert into alphabet senctecs: ";
    getline(cin, word);
    break;
	}
  
	return word;
}

void AMC(string text)
{
	int length = text.size();
	for (int i = 0; i < length; i++)
	{
		string letter = dictionary(text[i]);
		cout << letter;
		if (i < length - 1)
			cout << ' ';
	}
}

void MAC(string text)
{
  cout << "Test 1";
  /*int maximum_size = 100;
  char ntext[maximum_size];
  stringstream str(text);
  str >> ntext;
  int length = strlen(ntext);

  for (int i = 0; i < length; i++)
  {
    string temp;
    stringstream let;
    let << ntext[i];
    let >> temp;
    string letter = dictionary(temp);
    cout << letter;
    if (i < length-1)
      cout << ' ';
  }*/
}

void Display()
{
	return;
}

int main()
{
	int select = MainMenu();
	int decide = Selection(select);
	string sentence = GetWord(decide);
	cout << "You typed: " << sentence << '\n';
	if (decide == 1)
	{
		AMC(sentence);
	}
	else if (decide == 2)
	{
		MAC(sentence);
	}

	return 0;
}