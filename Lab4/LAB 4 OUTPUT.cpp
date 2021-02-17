#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	//Declare Variables
	ofstream outputFile;
	string haiku;
	//Get Haiku
	cout << "Please type out a haiku following the traditional method of 5-7-5 syllable structure!\n";
	haiku = "The lord of the Rings, The battle for middle ear-, th. Is a bad name!";
	cout << haiku << "\nRecieved\n";

	//Store the Poem
	outputFile.open("haiku.txt");

	outputFile << haiku;
	 

	outputFile.close();
	cout << "\nYour haiku has been saved to haiku.txt";
	
	
	
	return 0;
}