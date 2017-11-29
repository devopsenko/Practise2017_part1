// Lab211.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;

	cout << (year % 4 != 0 | year % 100 == 0 & year % 400 != 0 ? "common" : "leap") << endl;

    return 0;
}

