#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	//Declaring Variables
	float hourlyRate;
	float hoursWorked;
	float overtimeHours;
	float weeklyTotal;
	float regularPay;
	float overtimePay;
	
	// Variables that are constants but could be edited for the users needs and can vary company to company.
	const float overtimeRate = 1.5;
	const int subOvertimeHour = 40;
	
	//User input
	cout << "Please enter how many hours you worked this week :";
	cin >> hoursWorked;
	cout << "\n Please enter your hourly rate : $";
	cin >> hourlyRate;
	cout << endl;

	// So numbers are placed like money is to the second decimal 
	cout << fixed << showpoint << setprecision(2);
	
	//Overtime $$$
	if (hoursWorked > 40)
	{
		overtimeHours = hoursWorked - subOvertimeHour;
		regularPay = (hoursWorked - overtimeHours) * hourlyRate;
		overtimePay = (hourlyRate * overtimeRate) * overtimeHours;
		weeklyTotal = overtimePay +  regularPay ;
		cout << "Your regular pay is : $" << regularPay << endl;
		cout << "Your overtime pay is : $" << overtimePay << endl;
		cout << "Your weekly total is : $" << weeklyTotal << endl;
	}
	// Regular wage
	else if (hoursWorked <= 40 && hoursWorked >= 0)
	{
		weeklyTotal = hourlyRate * hoursWorked;
		cout << "Your weekly total is : $" << weeklyTotal << endl;
	}
	// no negative hours worked
	else
	{
		cout << "You have entered an invalid hours worked. Please try again.";
	}

	return 0;
}