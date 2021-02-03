// Lab Test 1 by Dylan Brown
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declare Variables !
	float item1 = 299.99;
	float item2 = 89.75;
	float item3 = 189.95;
	float item4 = 150.89;
	float item5 = 429.45;
	float commision = 0.09; //If changed please edit line 27.
	const int basePay = 200;

	double weeklyPay;
	double quaitySold;
	double val1, val2, val3, val4, val5;
	double total1, total2, total3, total4, total5, totalTotal;
	
	//Display Title!
	cout << "==========================\n";
	cout << "LT1 Commision Calaculator!\n";
	cout << "==========================\n";
	cout << "You make $" << basePay << " each week plus commion of 9% on the items sold.\n";
	cout << "Lets figure out what you earned this week!\n";
	//Demand answers!
	cout << "==========================\n";
	cout << "How many of Item 1. @ $" << item1 << " did you sell? :";
	cin >> val1;
	cout << "==========================\n";
	cout << "How many of Item 2. @ $" << item2 << " did you sell? :";
	cin >> val2;
	cout << "==========================\n";
	cout << "How many of Item 3. @ $" << item3 << " did you sell? :";
	cin >> val3;
	cout << "==========================\n";
	cout << "How many of Item 4. @ $" << item4 << " did you sell? :";
	cin >> val4;
	cout << "==========================\n";
	cout << "How many of Item 5. @ $" << item5 << " did you sell? :";
	cin >> val5;

	//Dont Screwup!
	if (val1 < 0 || val2 < 0 || val3 < 0 || val4 < 0 || val5 < 0)
	{
		cout << "==========================\n";
		cout << "You have inserted an invalid number. Please close the program and try again. Thank you!\n";
		cout << "==========================\n";
		return 0;
	}
	//Decimal to2!
	cout << fixed << showpoint << setprecision(2);

	//Do math!
	total1 = val1 * item1;
	total2 = val2 * item2;
	total3 = val3 * item3;
	total4 = val4 * item4;
	total5 = val5 * item5;
	totalTotal = total1 + total2 + total3 + total4 + total5;
	weeklyPay = (totalTotal * commision) + basePay;

	//Deliver outcome!
	cout << "==========================\n";
	cout << "======= Great job! =======\n";
	cout << "Your weekly total for sales is : $" << totalTotal << endl;
	cout << "Your total pay for the week is : $" << weeklyPay << endl;
	cout << "==========================\n";

	//Done
	return 0;
}