// Lab752.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> rods;

void Action(string user)
{
	int from, to;
	from = user[0] - 49;
	to = user[1] - 49;
	try
	{
		if (user.size() > 2 || from > 2 || to > 2)
			// 
			throw 1;

		if ((rods[from]).size() == 0)
			//
			throw 2;

		int disk = rods[from][rods[from].size() - 1];
		rods[from].pop_back();

		if (rods[to].size() > 0 && rods[to][rods[to].size() - 1] < disk)
			//
			throw 3;

		rods[to].push_back(disk);
	}
	catch (...)
	{
		throw;
	}
}

int main()
{	
	rods.push_back(vector<int>());
	rods.push_back(vector<int>());
	rods.push_back(vector<int>());
	rods[0].push_back(3);
	rods[0].push_back(2);
	rods[0].push_back(1);

	string user;
	cout << "tower 1: 3, 2, 1"<< endl;
	cout << "tower 2: empty" << endl;
	cout << "tower 3: empty" << endl;
	while (rods[2].size() < 3)
	{
		cin >> user;
		try
		{
			Action(user);
		}
		catch (int s)
		{
			if (s ==1)
				cout << "one or both towers are not in the 1–3 range" << endl;
			if (s == 2)
				cout << "there are no disks at the source rod" << endl;
			if (s == 3)
				cout << "disk moved is of an incorrect size (bigger than the one in the target rod)" << endl;
		}
	}
	
	cout << "tower 1: empty" << endl;
	cout << "tower 2: empty" << endl;
	cout << "tower 3: 3, 2, 1" << endl;
    return 0;
}

