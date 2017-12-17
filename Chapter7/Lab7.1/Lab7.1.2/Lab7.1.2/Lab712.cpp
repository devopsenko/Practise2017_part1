// Lab712.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	try
	{
		if (b == 0) throw exception();
		c = a / b;
		cout << c << endl;
	}
	catch (const exception &e)
	{
		cout << "Your input is not valid, you can't divide by zero" << endl;
	}
    return 0;
}

