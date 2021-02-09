
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

}