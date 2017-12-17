// Lab724.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Caretaker
{
private:
	int value, minvalue, maxvalue;
public:
	Caretaker(int val, int minval, int maxval)
	{
		value = val;
		minvalue = minval;
		maxvalue = maxval;
	}
	void Add(int a)
	{
		int temp = value + a;
		if (temp > maxvalue || temp < minvalue) { throw "Value could exceed limit"; }
		else value = temp;
	}
	void Substruct(int a)
	{
		Add(-a);
	}
	int GetValue()
	{
		return value;
	}
};

int main()
{
	int a, mina, maxa;
	cout << "enter value" << endl;
	cin >> a;
	cout << "enter min value" << endl;
	cin >> mina;
	cout << "enter max value" << endl;
	cin >> maxa;

	Caretaker value = Caretaker(a, mina, maxa);

	cout << "enter value to add" << endl;
	cin >> a;

	try
	{
		value.Add(a);
		cout << value.GetValue() << endl;
	}
	catch (...)
	{
		cout << "Value could exceed limit" << endl;
	}

	cout << "enter value to substruct" << endl;
	cin >> a;

	try
	{
		value.Substruct(a);
		cout << value.GetValue() << endl;
	}
	catch (...)
	{
		cout << "Value could exceed limit" << endl;
	}

    return 0;
}

