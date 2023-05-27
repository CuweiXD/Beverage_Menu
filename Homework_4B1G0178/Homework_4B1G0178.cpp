// Homework_4B1G0178.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。

#include <iostream>
#include <vector>
#include <iomanip>
#include "beverageitem.h"
#include "Homework_4B1G0178.h"

void AddNewBeverage(std::vector<beverageitem>& beverages)
{
	beverages.push_back(beverageitem("Black Tea", "Grande", 40));
	beverages.push_back(beverageitem("Black Tea", "Tall", 30));
	beverages.push_back(beverageitem("Green Tea", "Grande", 40));
	beverages.push_back(beverageitem("Green Tea", "Tall", 30));
	beverages.push_back(beverageitem("Milk Tea", "Grande", 70));
	beverages.push_back(beverageitem("Milk Tea", "Tall", 50));
	beverages.push_back(beverageitem("Americano", "Grande", 75));
	beverages.push_back(beverageitem("Americano", "Tall", 50));
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

int main()
{
	vector<beverageitem> beverages;
		
	AddNewBeverage(beverages);
	DisplayBeverageMenu(beverages);
}

