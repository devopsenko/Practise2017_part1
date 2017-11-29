// Lab343.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct Date
{
	int year;
	int day;
	int month;
};

bool IsLeap(int year)
{
	return !(year % 4 != 0 | year % 100 == 0 & year % 400 != 0);
}

int MonthLength(int year, int month)
{
	int lengths[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && IsLeap(year)) lengths[1] = 29;
	return lengths[month - 1];
}

int DayOfYear(Date date)
{
	int res = 0;
	for (size_t i = 0; i < date.month - 1; i++)
	{
		res += MonthLength(date.year, i + 1);
	}
	return res + date.day;
}

int main()
{
	Date date;
	cout << "Enter year month day" << endl;
	cin >> date.year >> date.month >> date.day;
	cout << DayOfYear(date) << endl;
    return 0;
}

