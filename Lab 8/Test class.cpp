#include <iostream>
#include <vector>
#include <time.h>
#include <string>
#include "Character.h"


using namespace std;
void selectionSort(vector<int>&);
void showArray(vector<int>&);

int main()
{
	//Declare variables
	const int SIZE = 10;
	vector<int> values(SIZE);
	unsigned seed = time(0);
	srand(seed);
	string inputName;
	int randValue = 0;

	//generate 10 random values for vector
	for (int i = 0; i < SIZE; i++)
	{
		values[i] = 1 + rand() % 100;
	}

	//Greet Player and get name
	Character player1;
	cout << "Welcome my lord. I'm your new butler I am terribly sorry but I did not catch your name sire !!\n"
		 << "**Player 1 please enter your character name :";
	getline(cin, inputName);
	player1.setName(inputName);

	//Give hp 
	player1.setHp(400);
	cout << "Pleased to make your acquaintance \n\n! You look to be young but in good health.\n" 
		 << "**You are a lvl 1 lord with a base hp of :" << player1.getHp() << "**\n\n";

	//Roll for attack and set it to player 1 
	cout << "Now lets roll for your ATTACK stat!\n ";
	selectionSort(values);
	showArray(values);
	cout << "Ohh better hope you get the high one!\n"
		<< "**Hit ENTER for result**\n";
	cin.get();
	
	randValue = 1 + rand() % 10;
	player1.setAttack(values[randValue]);
	cout << "Your attack stat is \n.....\n" << player1.getAttack() << endl;
	
	if (player1.getAttack() <= 49 )
	{
		cout << "Well you could always be the smart one of your group!\n\n";
	}
	else if (player1.getAttack() >= 50)
	{
		cout << "Looks like we found ourself the next Hurcules!\n\n";
	}

	//Display Character Sheet Info
	cout << "*****CHARACTER SHEET*****\n" 
		 << "Player name :" << player1.getName() << endl << "Base Health :" << player1.getHp() << endl
		 << "Attack Stat :" << player1.getAttack() << endl << endl;
	
	//Closing statement
	cout << "Welcome my lord to Fanixa. May your blades be ever sharp and your wits sharper!\n";


	return 0;
}

void selectionSort(vector<int>& numbers)
{
	int temp;
	bool swap;

	do
	{
		swap = false;
		for (int i = 0; i < numbers.size() -1 ; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

void showArray(vector<int>& numbers)
{
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}