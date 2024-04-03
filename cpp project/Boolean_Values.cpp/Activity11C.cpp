// Checks whether number is a prime number
#include <iostream>
using namespace std;
int main()
{
int Num1;
int Num2=2;
cout << "Enter a number: ";
cin >>Num1;

if(Num1%Num2==0)
{
    cout << Num1 << " IS not a prime number";
}
else
{
    cout << Num1 << " IS a prime number";
}
return 0;
}