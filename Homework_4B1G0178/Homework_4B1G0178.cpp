// Homework_4B1G0178.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。

#include <iostream>
#include <vector>
#include <iomanip>
#include "beverageitem.h"
#include "Homework_4B1G0178.h"
#include "OrderItem.h"


void AddNewBeverage(std::vector<beverageitem>& beverages)
{
	beverages.push_back(beverageitem("紅茶", "大杯", 60));
	beverages.push_back(beverageitem("紅茶", "小杯", 40));
	beverages.push_back(beverageitem("綠茶", "大杯", 60));
	beverages.push_back(beverageitem("綠茶", "小杯", 40));
	beverages.push_back(beverageitem("咖啡", "大杯", 70));
	beverages.push_back(beverageitem("咖啡", "小杯", 50));
	beverages.push_back(beverageitem("可樂", "大杯", 40));
	beverages.push_back(beverageitem("可樂", "小杯", 20));
}

void DisplayBeverageMenu(vector<beverageitem>& beverages) {
	cout << setw(4) << "Number" << setw(12) << "Beverage" << setw(10) << "Size" << setw(10) << "Price" << endl;
	cout << "----------------------------------------" << endl;

	int i = 1;
	for (beverageitem item : beverages) {
		cout << setw(6) << i;
		item.DisplayItem();
		i++;
	}
	cout << "----------------------------------------" << endl;
}

void OrderBeverage(vector<OrderItem>& order, vector<beverageitem>& beverages) {
	int index;
	int qty;
	char ans = 'Y';
	do {
		cout << "請輸入要訂購的飲料編號:";
		cin >> index;
		cout << "請輸入要訂購的飲料數量:";
		cin >> qty;
		if (index < 1 || index >beverages.size()) {
			cout << "輸入的飲料編號錯誤，請重新輸入" << endl;
		}
		else if (qty < 1) {
			cout << "輸入的飲料數量錯誤，請重新輸入" << endl;
		}
		else {
			OrderItem OrderItem(index, qty);
			order.push_back(OrderItem);
			OrderItem.displayOrderItem(beverages);
			cout << "是否繼續訂餐?(輸入Y或y鍵繼續點餐)";
			cin >> ans;
		}
	} while (ans == 'Y' || ans =='y');
}

void CalculateSalePrice(vector<OrderItem>& order, vector<beverageitem>& beverages) {
	int TakeIn = 1;
	cout << "請問內用或外帶?(1:內用/2:外帶)";
	cin >> TakeIn;
	string messageTakeIn = (TakeIn == 1) ? "內用" : "外帶";

	int totalprice = 0;
	int saleprice = 0;
	string messageprice = "";
	cout << "----------------------------------" << endl;
	cout << "你所點的飲料如下:" << endl;
	cout << "----------------------------------" << endl;
	for (OrderItem OrderItem : order) {
		OrderItem.displayOrderItem(beverages);
		beverageitem beverageitem = beverages[OrderItem.getIndex() - 1];
		totalprice += beverageitem.getprice() * OrderItem.getquantity();
	}
	if (totalprice >= 500) {
		saleprice = totalprice * 0.8;
		messageprice = "訂購500元以上者打8折";
	}
	else if (totalprice >= 300) {
		saleprice = totalprice * 0.85;
		messageprice = "訂購300元以上者打85折";
	}
	else if (totalprice >= 200) {
		saleprice = totalprice * 0.9;
		messageprice = "訂購200元以上者打9折";
	}
	else {
		saleprice = totalprice;
		messageprice = "未滿200元以上者無折扣";
	}
	cout << "----------------------------" << endl;
	cout << "訂購方式:" << messageTakeIn << endl;
	cout << "總計:" << totalprice << endl;
	cout << messageprice << endl;
	cout << "售價(有打折過後的金額):" << saleprice << endl;
	cout << "----------------------------" << endl;
}

int main()
{
	vector<beverageitem> beverages;
	vector<OrderItem> order;
		
	AddNewBeverage(beverages);
	DisplayBeverageMenu(beverages);
	OrderBeverage(order, beverages);
	CalculateSalePrice(order, beverages);
}

