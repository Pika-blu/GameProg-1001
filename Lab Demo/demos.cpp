#include <iostream>
#include <iomanip> // for random #
#include <cstdlib>
#include <cmath> 
#include <ctime> // for time
#include <string> //obvi
#include <fstream> //for files
#include <vector> //obvi
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
	
			
		double result = 0.666667 * 6.0;
		cout << "result =" << result << endl;
		//abs() = Absolute
		if (abs(result - 4 < 0.001))
		{
			cout << "result ='s 4" << endl;

		}
		else
		{
			cout << "not 4";
		}
		const int
			minAScore = 80,
			minBScore = 70,
			minCScore = 60,
			minDScore = 50,
			minScore = 0,
			maxScore = 100;


		int testScore;
		char grade;
		bool goodScore;

		cout << "Enter your numaric grade" << endl;
		cin >> testScore;
		//Check input is valid
		if (testScore >= minScore && testScore <= maxScore)
		{
			if (testScore >= minAScore)
				grade = 'A';
			else if (testScore >= minBScore)
				grade = 'B';
			else if (testScore >= minCScore)
				grade = 'C';
			else if (testScore >= minDScore)
				grade = 'D';
			else if (testScore >= 0)
			{
				grade = 'F';
			}

			cout << grade;

		}
		else
			cout << "invalid score\n";


		// constant for member rates
		const double adultRate = 120.0, childRate = 60.0, seniorRate = 100.0;
		int choices;
		int months;
		double charges;

		do
		{
			// display menu
			cout << "===Health Culb Membership Menu===\n\n";
			cout << "1. Standard membership.\n";
			cout << "2. Child membership.\n";
			cout << "3. Senor Membership.\n";
			cout << "4. Quit the program.\n\n";

			cout << "Enter your choice: ";
			cin >> choices;

			cout << fixed << showpoint << setprecision(2);
			while ((choices < 1) || (choices > 4))
			{
				cout << " Please enter 1,2,3 or 4\n";
				cin >> choices;
			}
			//Valid iput territory
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

		} while (choices != 4);


		int numDays;
		double dailySales,
			totalSales = 0.0,
			averageSales;

		cout << " For how many days do your have sale figures?\n";
		cin >> numDays;

		//initalization ; condition l update
		for (int days = 1; days <= numDays; days++)
		{
			cout << " Enter the sales for day " << days << ": ";
			cin >> dailySales;
			totalSales += dailySales;
		}

		averageSales = totalSales / numDays;
		cout << fixed << showpoint << setprecision(2);
		cout << "\nTotal Sales: $" << totalSales << endl;
		cout << "\nAverage  Sales : $" << averageSales << endl;

		outputFile.open("demofile.txt");
		cout << "Enter the names of 3 friends \n Enter name \n";
		cin >> name1;
		cin >> name2;
		cin >> name3;

		outputFile << name1 << endl;
		outputFile << name2 << endl;
		outputFile << name3 << endl;



		cout << " Now writing data to the file \n\n";
		//Write to the file 
		outputFile << "Lyra\n Youre a babe";
		outputFile << "Epic file moments";
		outputFile.close();

		cout << "Done";


		inputFile.open("demofile.txt");

		cout << "Reading data from file\n";
		inputFile >> name;
		cout << name << endl;

		inputFile >> name;
		cout << name << endl;

		inputFile >> name;
		cout << name << endl;

		inputFile >> name;
		cout << name << endl;

		ofstream outputFile;
		ifstream inputFile;
		int numDays;
		double sales;
		// open output file

		cout << "For homw many days do you have sales?\n";
		cin >> numDays;
		outputFile.open("Sales.txt");
		for (int count = 1; count <= numDays; count++)
		{
			cout << "Enter sales for day\n";
			cin >> sales;
			outputFile << sales << endl;


		}

		outputFile.close();

		ifstream inputFile;
		int numDays = 0;
		double sales, // sales amount for the day
			totalSales = 0.0;
		string filename;

		cout << "Enter the filename: ";
		cin >> filename;

		inputFile.open(filename.c_str());
		filename += ".txt";
		if (inputFile)
		{

			//reached the end of file
			while (inputFile >> sales)
			{
				//Process our info from the file
				totalSales += sales;
				numDays++;
			}

			inputFile.close();

			cout << "total sales\n" << totalSales << "over " << numDays << " days\n";
		}
		else
			cout << "Error cant open files";

		//basic array and for loop
		const int NUM_EMPLOYEES = 6;
		int hours[NUM_EMPLOYEES];
		int i; //counter

		cout << "Enter hours worked by " << NUM_EMPLOYEES << " employees\n";

		for (i = 0; i < NUM_EMPLOYEES; i++)
		{
			cin >> hours[i];
		}

		cout << "the hours you have entered are: ";

		for (i = 0; i < NUM_EMPLOYEES; i++)
		{
			cout << "  " << hours[i];
		}



		//Basic array reading a file 
		const int NUM_EMPLOYEES = 6;
		int hours[NUM_EMPLOYEES];
		int i = 0;//counter
		
		ifstream datafile;

		datafile.open("work.txt");
		if (!datafile)
		{
			cout << "error opening file";
		}
		else
		{
			while (i < NUM_EMPLOYEES && datafile >> hours[i])
			{
				i++;



			}
			datafile.close();

			cout << "Enter hours worked by " << NUM_EMPLOYEES << " employees\n";
			for (int count = 0; count < i; count++)
			{
				cout << "Employee " << count + 1 << " : ";
				cout << hours[count] << endl;
			}
		}

		//reading a string (which is an array) and checking for vowels
		char ch;
		int vowel = 0;
		string sentence;

		cout << "Enter any sentance and I will tell you how many vowerl are in it.\n";

		getline(cin, sentence);

		for (int i = 0; i < sentence.length(); i++)
		{
			ch = toupper(sentence[i]);
			switch (ch)
			{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
				vowel++;
			}

		}


		cout << "The vowel count is :" << vowel << endl;

		const int NUM_EMPS = 5;
		int i;
		int hours[NUM_EMPS];
		double payrate[NUM_EMPS];
		double grosspay;
		int c;

		cout << "enter # of emps \n";
		for (i = 0; i < NUM_EMPS; i++)
		{
			cout << "ENter hours worked by emp #: " << (i + 1) << ":";
			cin >> hours[i];
			cout << " Hourly pay rate for emps #: " << (i + 1) << ":";
			cin >> payrate[i];
		}
		cout << "\nHere is the gross pay for each employee:\n";
		cout << fixed << showpoint << setprecision(2);

		for (c = 0; c < NUM_EMPS; c++)
		{
			grosspay = hours[c] * payrate[c];
			cout << " Employee #" << (c + 1) << ": $" << grosspay << endl;
		}

		//vectors

		vector<int> values;

		values.push_back(20);
		values.push_back(200);
		values.push_back(420);

		cout << " The size of values is" << values.size() << endl;
		for (i = 0; i < values.size(); i++)
		{
			cout << "  " << values[i];
		}


	return 0;
}
