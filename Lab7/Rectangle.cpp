#include "Rectangle.h"

void Rectangle::setLength(double len)
{
	if (len >= 0.0)
	{
	length = len;
	}
	else
	{
	 cout << "Invalid Length. Using a default value of 1.0\n";
	}
}

void Rectangle::setWidth(double wid)
{
	if (wid >= 0.0)
	{
	width = wid;
	}
	else
	{
		cout << "Invalid width. Using a default value of 1.0\n";
	}
}
