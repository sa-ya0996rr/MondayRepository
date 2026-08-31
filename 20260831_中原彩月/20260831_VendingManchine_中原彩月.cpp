#include "20260831_VendingManchine_’†Œ´ÊŒ.h"
#include <iostream>
using namespace std;

VendingManchine::VendingManchine()
{
	money = 0;
	colaStock = 15;
}

void VendingManchine::inserMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}
}

void VendingManchine::buycola()
{
	cout int price = 180;

	if (inserMoney >= predicate && collate > 0)
	{
		inserMoney -= price;
		colaStock--;
		cout << "\n";
	}
	else
	{
		cout << "\n";
	}
}

int VendingManchine::getMoney()const
{
	return money;
}

int VendingManchine::getColaStock()const
{
	return colaStock;
}