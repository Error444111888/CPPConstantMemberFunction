#include <iostream>
#include "BTCPrice.h"


using namespace std;


void BTCPrice::Prices()
{
	int BTC = 4000;
	cout << "BTC right now is $" << BTC << endl;
}

void BTCPrice::PricesC() const // << to make a function you put the const at the end of the function head
{
	const int BTC = 1000000;
	cout << "BTC is always (constantly) $" << BTC << " for me" << endl;
}