#pragma once
#include <vector>
#include "OrderItem.h"
#include "beverageitem.h"
class OrderItem
{
	int ItemIndex;
	int quantity;

public:
	OrderItem(int, int);
	void displayOrderItem(vector<beverageitem>&beverages);
	int getIndex();
	int getquantity();
};

