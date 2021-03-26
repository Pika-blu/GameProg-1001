#include <iostream>

using namespace std;

void DisplayAsterisk(int num);

int main()
{
	//Declare variables for user input
	int value1, value2, value3, value4, value5 = 0;
	
	//Communicate w/ user 
	cout << "Welcome to the number to asterisk converter. Enter 5 numbers that range from 1 to 30 to have them converted.\n";
	cin >> value1 >> value2 >> value3 >> value4 >> value5;
	cout << "The numbers you have entered are: " << value1 << "  " << value2 << "  " << value3 << "  " << value4 << "  " << value5 << endl;
	cout << "Now time to convert the chosen values from 1 to 30 into asterisks\n";
	cout << "=====================================\n";
	cout << "          ASTERISK GRAPH\n";
	cout << "=====================================\n";

	//Run function to turn converted numbers into asterisks
	DisplayAsterisk(value1);
	DisplayAsterisk(value2);
	DisplayAsterisk(value3);
	DisplayAsterisk(value4);
	DisplayAsterisk(value5);

	//Tell the user the program is over 
	cout << "=====================================\n";
	cout << "      THANK YOU, COME AGAIN!\n";
	cout << "=====================================\n";

	//End program
	return 0;
}

void DisplayAsterisk(int num)
{
	//Declare a counter variable
	int i = 0;

	//Check if the number matches the parameters
	//If not tell them to try again
	if (num < 1 || num > 30)
	{
		cout << "This number is out of the parameter of 1 to 30. Please try again.\n";
	}
	//If correct then display Asterisks
	else if ( num <= 30 && num >= 1)
	{
		for (i = 0; i < num; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}