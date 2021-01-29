// What it be, what it do, its time for Lab 2 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	bool Quit = false;
    float number1, number2, number3;
    char yn = 'y';
	while (!Quit)
	{

		cout << "Enter 3 numbers by typing in the desired number and hitting your enter key \n";
		cin >> number1 >> number2 >> number3;
		cout << endl;
		cout << "Sum of " << number1 << " + " << number2 << " + " << number3 << " = " << number1 + number2 + number3 << endl;
		cout << "Product of " << number1 << " x " << number2 << " x " << number3 << " = " << number1 * number2 * number3 << endl;
		cout << "And the average between " << number1 << "  " << number2 << "  " << number3 << " = " << (number1 + number2 + number3) / 3 << endl;

		cout << "Would you like to quit? 'Y' for yes or any other key for no\n"; // felt like a calculate-esqu feature shouldnt close after one use
		cin >> yn;

		yn = toupper(yn); // learned this with google, makes lower case into upper so both y's will be read correctly
		if (yn == 'Y')
		{
			cout << "Okay have a nice day!";
			Quit = true;
		}
	
	}
	/* 
	 I spent 30m-1hr trying to figure out how to limit the input types for both the number1,2,3 and the yn answer to either 
	 just number or just letters but I couldn't manage to figure it out. Would love to know tho ill assume we will learn in class
	 one day. 
	*/
}
