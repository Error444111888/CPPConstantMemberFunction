#include <iostream>
#include "BTCPrice.h"


using namespace std;


int main()
{
	BTCPrice BTCpObj;
	BTCpObj.Prices();

	const BTCPrice BTCpObjC; // << cnst comes in the begining
	BTCpObjC.PricesC();

	cin.get();
}