#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	ItemIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<beverageitem>&beverages)
{
	beverageitem beverageitem = beverages[ItemIndex - 1];
	cout << "你所點的飲料為:" << beverageitem.getname() << beverageitem.getsize() << " " << quantity << "杯，每杯" << beverageitem.getprice() << "元，小計" << beverageitem.getprice() * quantity << "元" << endl;
}

int OrderItem::getIndex()
{
	return ItemIndex;
}

int OrderItem::getquantity()
{
	return quantity;
}


