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
	haiku = "The lord of the Rings, The battle for middle ear-, th. Is a bad name!v2";
	cout << haiku << "\nRecieved\n";

	//Store the Poem
	outputFile.open("haiku.txt");

	outputFile << haiku;
	 

	outputFile.close();
	cout << "\nYour haiku has been saved to haiku.txt";
	
	
	/*
	/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	//Declare Variables
	ifstream inputFile;
	string haiku;

	//Get Haiku
	cout << "Usersubmitted haiku, topic is: Gaming\n";

	// Open the poem
	inputFile.open("haiku.txt");
	getline(inputFile, haiku);
	cout << "You have submitted the following haiku :" << haiku << endl;


	//Close file
	inputFile.close();

	return 0;
	
	*/
	return 0;
}