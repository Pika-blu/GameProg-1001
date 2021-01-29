// Lab 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// Playing with Sizeof
	cout << "the size of a char : " << sizeof(char) << " bit\n";
	cout << "the size of a bool : " << sizeof(bool) << " bit\n";
	cout << "the size of a short integer: " << sizeof(short) << " bytes\n";
	cout << "the size of a int integer: " << sizeof(int) << " bytes\n";
	cout << "the size of a long integer: " << sizeof(long) << " bytes\n";
	cout << "the size of a float : " << sizeof(float) << " bytes\n";
	cout << "the size of a double integer: " << sizeof(double) << " bytes\n";
	cout << "the size of a long long integer: " << sizeof(long long) << " bytes\n";
	cout << "the size of a string : " << sizeof(string) << " bytes\n\n";
	//What is the meaning of life?
	int num0 = sizeof(string) + sizeof(string);
	cout << sizeof(string) << " plus " << sizeof(string) << " = " << num0 << endl;
	int num1 = num0 - sizeof(char);
	cout << num0 << " minus " << sizeof(char) << " = " << num1 << endl;
	int num2 = sizeof(float) + sizeof(long);
	int num3 = num1 / num2;
	cout << num1 << " divided by " << num2 << " = " << num3 << endl;
	cout << "With a remainder of:" << (int)num1 % num2 << endl;
	int num4 = (int)num1 % num2 * num3;
	cout << num3 << " multiplied by " << (int)num1 % num2 << " = " << num4 << endl;
	/*
	P.s. I understand this wasn't the easiest way to go about it but
	I thought it be fun to make simple math more complex and not use
	numbers (sorry Im lame and have too much time).
	*/
	
	
	return 0;

}