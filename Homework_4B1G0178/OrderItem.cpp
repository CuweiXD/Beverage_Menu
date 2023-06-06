#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	ItemIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<beverageitem>&beverages)
{
	beverageitem beverageitem = beverages[ItemIndex - 1];
	cout << "�A���I�����Ƭ�:" << beverageitem.getname() << beverageitem.getsize() << " " << quantity << "�M�A�C�M" << beverageitem.getprice() << "���A�p�p" << beverageitem.getprice() * quantity << "��" << endl;
}

int OrderItem::getIndex()
{
	return ItemIndex;
}

int OrderItem::getquantity()
{
	return quantity;
}


