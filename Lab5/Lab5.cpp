#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//Array that can hold 10 ints
	const int ISIZE = 10;
	int userInput[ISIZE];
	int i = 0;
	int average = 0;
	vector<int> lessThan(10);
	vector<int> greaterThan(10);

	//Ask user for ints
	cout << " Please enter up to 10 integers that you would like the average of.\n";
	for (i = 0; i < ISIZE; i++)
	{
		cin >> userInput[i];		
	}
	
	cout << "\nYou have entered the following numbers\n";
	for (i = 0; i < ISIZE; i++)
	{
		cout << userInput[i] << "  ";
	}
	
	//Determine average of ints
	cout << "\nNow calculating the average!\n";
	for (i = 0; i < ISIZE; i++)
	{
		average += userInput[i];
	}
	
	average = average / (ISIZE + 1);
	cout << "The average is :" << average << endl;
	
	//Sorting the numbers
	for (i = 0; i < ISIZE; i++)
	{
		if (userInput[i] <= average)
		{
			lessThan[i] = userInput[i];
		}
		else
		{
			greaterThan[i] = userInput[i];
		}
	}

	//Display the sorting
	cout << "The numbers are less than or equal to the average are : \n";

	for (i = 0; i < ISIZE; i++)
	{
		cout << lessThan[i] << "  ";
	}

	cout << "\nThe numbers are greater than the average\n";
	for (i = 0; i < ISIZE; i++)
	{
		cout << greaterThan[i] << "  ";
	}

	return 0;
}