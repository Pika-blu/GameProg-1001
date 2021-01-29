#include <iostream>, <stings>, <iomanip>, <cstdlib>, <cmath>, <ctime>
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
		getline(cin, name);
		cout << " Enter the city you live in: ";
		getline(cin, city);

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

	return 0;
}
