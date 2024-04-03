// Program that calculates the amount payable for water consumption 
// Subtract 20 units and calculate the price from the remaining units.
#include <iostream>
using namespace std;
int main()
{
    float fixed_rate0=10.0;
    float fixed_rate1=15;
    float fixed_rate2=20.0;
    int units;
    int Add_units=(units -20);
    // Unit conditions
    // calculations for unit price are all wrong
    
    cout << "Enter units: ";
    cin >> units;

    if ( units <=20)
    {
        cout << "Amount payable:R0.00"<<endl ;
    }
     if( units <=40)
    {
        cout <<"Amount payable:R" << Add_units * fixed_rate0 << endl;
    }
     if(units>40 && units <100)
    {
        cout << "Amount payable:R" << Add_units * fixed_rate1 << endl;

    }
    if(units>100)
    {
        cout << "Amount payable:R" <<Add_units * fixed_rate2 << endl;
    }
    return 0;
}