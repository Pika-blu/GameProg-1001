#include <iostream>
#include <iomanip>

using namespace std;

void celcius(float);

int main()
{
	float value = 0;
	int count = 101;
	
	cout << "Welcome to the weather converter, insert a tempature in fahrenheit, and that will be converted to celsius.\n";
	cin >> value;
	celcius(value); //Runs function with user input variable

	cout << "Thank you for using our weather converter.\n";
	cout << "For you convience we will now display a table of -20 too 100 Fahrenheit converted to Celsius.\n";
	cout << "Press Enter for table\n";
	cin.get();
	cin.get();
	
	for (int i = -20; i < count; i++) //Runs function from -20 to 100
	{
		value = i;
		celcius(value);
	}
	cout << "Finish!\nThis range represents the temperatures in Toronto from the coldest to the hottest ever recorded days\n";
	
	return 0;
}

void celcius(float num) //Function that converts Fahrenheit to Celcius
{
		cout << fixed << showpoint << setprecision(1);
		float temp = (num - 32) * 5 / 9;
		cout << num << " : Fahrenheit in Celcius is :" << temp << endl;
}

