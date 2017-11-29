// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;

	do
	{
		cout << "Input first number 0-255: ";
		cin >> a;
	} while (a < 0 | a > 255);
	cout << a << endl;
	do
	{
		cout << "Input second number 0-255: ";
		cin >> b;
	} while (b < 0 | b > 255);
	cout << b << endl;
	do
	{
		cout << "Input third number 0-255: ";
		cin >> c;
	} while (c < 0 | c > 255);
	cout << c << endl;
	do
	{
		cout << "Input fourth number 0-255: ";
		cin >> d;
	} while (d < 0 | d > 255);
	cout << d << endl;
	cout << "IP: " << a << "." << b << "." << c << "." << d << endl;

	return 0;
}