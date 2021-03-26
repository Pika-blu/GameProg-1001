#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	cout << "This program will calulate the area of a rectangle.\n";
	cout << "Input Length  :";
	cin >> boxLength;
	cout << "Input Width   :";
	cin >> boxWidth;

	box.setLength(boxLength);
    box.setWidth(boxWidth);
	
	cout << "The length of the box is    :" << box.getLength() << endl;
	cout << "The width of the box is     :" << box.getWidth() << endl;
	cout << "The area of the box is      :" << box.getArea() << endl;
	cout << "The perimeter of the box is :" << box.getPerimeter() << endl;

	return 0; 
}