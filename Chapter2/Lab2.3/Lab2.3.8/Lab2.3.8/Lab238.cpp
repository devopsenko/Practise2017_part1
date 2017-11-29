// Lab238.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long res = 1;

	for (size_t i = 1; i <= n; i++)
	{
		res *= i;
	}

	cout << res << endl;

    return 0;
}

