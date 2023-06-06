#pragma once
#include <iostream>
#include <string>
using namespace std;

class beverageitem
{
	string beveragename;
	string beveragesize;
	int beverageprice;

public:
	beverageitem(const string&, const string&, int);
	void DisplayItem();
	string getname();
	string getsize();
	int getprice();
};

