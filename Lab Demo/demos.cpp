#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath> 
#include <ctime>
#include <string>
using namespace std;

int main()
{
	string equals;
	equals.assign(80, '=');

	cout << equals << endl;
	unsigned seed = time(0);
	srand(seed);

	int max = 4;
	int num;
	num = rand() % max + 3;
		cout << num;

		float length, width, area;
		cout << "Program calculates area of a rectangle. \n";

		// Ask for input from user
		cout << "What is the lenght of the rectangle (as an interger).\n";
		cin >> length;
		cout << "What is the width of the rectangle (as an integer).\n";
		cin >> width;

		area = length * width;
		cout << "The area of the rectangle is " << area << endl;

		// Fraction
		double numerator, denominator;

		cout << "Enter the numerator:";
		cin >> numerator;
		cout << "Enter denominator :";
		cin >> denominator;

		cout << "The decimal value is" << (numerator / denominator) << endl;

		//Cast data types
		int books, months;
		double booksPerMonth;
		cout << "How many books do you play to read? \n";
		cin >> books;
		cout << " How many months will it take to read them?\n";
		cin >> months;
		booksPerMonth = static_cast<double>(books) / months;
		cout << "That is " << booksPerMonth << " books per month. \n";

		//cast int to char

		int number = 65;
		cout << number << endl;
		cout << static_cast<char>(number) << endl;

		//CONSTANT VALUE

		const double PI = 3.14159;
		double area2, radius;
		cout << " What is the radius of the circle? ";
		cin >> radius;
		area2 = PI * pow(radius, 2);
		cout << "Area is: " << area2 << endl;


		int num1 = 2879, num2 = 5, num3 = 837,
			num4 = 34, num5 = 7, num6 = 1923,
			num7 = 390, num8 = 3456, num9 = 12;

		// display the first row of numbers
		cout << left << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
		cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
		cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;

		double number1 = 132.364, number2 = 26.91;
		double quotient = number1 / number2;
		cout << quotient << endl;
		cout << fixed << setprecision(5) << quotient << endl;
		cout << fixed << setprecision(4) << quotient << endl;
		cout << fixed << setprecision(3) << quotient << endl;
		cout << fixed << setprecision(2) << quotient << endl;
		cout << fixed << setprecision(1) << quotient << endl;

		double xyz = 6.1223;
		cout << xyz << endl;
		cout << showpoint << xyz << endl;
		cout << setprecision(2) << xyz << endl;
		cout << fixed << "$" << xyz << endl;

		string name, city;

		cout << "Please enter your name: ";
		getinline(cin, name);
		cout << " Enter the city you live in: ";
		getinline(cin, city);

		cout << " Hello, " << name << endl;
		cout << " You live in, " << city << endl;



		char ch;
		cout << " Type a character and press enter: ";
		cin.get(ch); // cin >> ch  works the same
		cout << "You entered: " << ch << endl;


		const int SIZE = 1;
		char word[SIZE]; // memory size = 5


		cout << " Please enter a sentance name";
		cin.getline(word, SIZE);
		cout << " you entered, " << word << endl;

		// generater # without seeding

		cout << rand() << "  ";
		cout << rand() << "  ";
		cout << rand() << endl;

		// generate # w/ seeding
		unsigned seed;
		seed = time(0); // time(0) --> gets current time
		srand(seed);

		cout << rand() << "  ";
		cout << rand() << "  ";
		cout << rand() << endl;
         
		//week4 lecture notes

		int score1, score2, score3;
		double average;

		cout << " enter 3 test scores";
		cin >> score1 >> score2 >> score3;
		average = (score1 + score2 + score3) / 3.0;
		cout << fixed << showpoint << setprecision(1);
		cout << "your average is " << average;

		// if the avg = 100, congradulate the user
		if (average == 100)
		{
			cout << "Congrats";
		}

		const int AScore = 80,
			BScore = 70,
			CScore = 60,
			Dscore = 50,
			minscore = 0,
			maxscore = 100;

		int testscore;
		cout << "cunt what ya score?\n";
		cin >> testscore;
		// check valid
		if (testscore >= minscore && testscore <= maxscore)
		{
			if (testscore >= AScore)
				cout << " you go A";

		}
		else
			cout << "ya fucked up";

		// constant for member rates
		const double adultRate = 120.0, childRate = 60.0, seniorRate = 100.0;
		int choices;
		int months;
		double charges;

		// display menu
		cout << "===Health Culb Membership Menu===\n\n";
		cout << "1. Standard membership.\n";
		cout << "2. Child membership.\n";
		cout << "3. Senor Membership.\n";
		cout << "4. Quit the program.\n\n";

		cout << "Enter your choice: ";
		cin >> choices;

		cout << fixed << showpoint << setprecision(2);
		if (choices >= 1 && choices <= 3)
		{
			cout << "how many months?\n";
			cin >> months;
			switch (choices)
			{
			case 1:
				charges = months * adultRate;
				break;
			case 2:
				charges = months * childRate;
				break;
			case 3:
				charges = months * seniorRate;
				break;
			case 4:
				cout << "Goodbye";


			}
			cout << "The charges total are : $" << charges << endl;


		}
		else if (choices != 4)
		{
			cout << "\nThe valid choices are 1 throught 4.\n"
				<< "Run the program again and select one of those.\n";
		}
		else








	return 0;
}
