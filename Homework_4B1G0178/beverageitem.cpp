#include "beverageitem.h"
#include <iomanip>
beverageitem::beverageitem(const string& name, const string& size, int price)
{
	beveragename = name;
	beveragesize = size;
	beverageprice = price;
}

void beverageitem::DisplayItem()
{
	cout << setw(12) << beveragename << setw(10) << beveragesize << setw(10) << beverageprice << endl;
}
