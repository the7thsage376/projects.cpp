//Water consumption
#include <iostream>
using namespace std;
int main( )
{
const float RATE_0 = 10;
const float RATE_1 = RATE_0 * 1.5; // this is permissible
const float RATE_2 = RATE_0 * 2.0; // this is permissible 
float units, amount;
cout << "Please enter number of units consumed: ";
cin >> units;
if (units <= 20)
amount = 0;
if ((units > 20) && (units <= 40))
amount = (units - 20) * RATE_0;
if ((units > 40) && (units <= 100))
amount = (20 * RATE_0) + (units - 40) * RATE_1;
if (units > 100)
amount = (20 * RATE_0) + (60 * RATE_1) + (units - 100) * RATE_2;
cout << "Amount due is R" << amount << endl;
return 0;
}
