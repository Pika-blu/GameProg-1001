#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
	private:
		double length;
		double width;

	public:
		
		void setLength(double);
		void setWidth(double);

		double getLength() { return length; }
		double getWidth() { return width; }
		double getArea() { return length * width; }
		double getPerimeter() { return (length + width)*2; }



};

