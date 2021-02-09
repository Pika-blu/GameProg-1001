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
	cout << "Usersubmitted haiku, topic is, gaming\n";


	// Open the poem
	inputFile.open("haiku.txt");
	inputFile >> haiku;
	cout << haiku;



	inputFile.close();
	cout << "\nYour haiku is stored at haiku.txt ";




	return 0;
}