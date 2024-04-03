//Determines whether the sum of any two numbers is equal to the third number
// Works well 😊
#include <iostream>
using namespace std;
int main()
{// numbers
    int num1,num2,num3;
    cout <<"Enter three numbers" <<endl;
    cout << "Number1: ";
    cin >> num1;
    cout << endl;
    cout << "Number2: ";
    cin >> num2;
    cout << endl;
    cout << "Number3: ";
    cin >> num3;

// Nested If statements
// double check cody suggestions
    if(num1+num2 == num3 )
    {
        cout << num1 + num2 << " = " <<num3;
    }   
        else if (num2 + num3 == num3)
        {
        cout << num2 + num3 << " = " << num3;
        }
        else if (num1 + num3 == num3)
        {
            cout << num1 + num3 << " = " << num3;
        }
    else
    {
        cout << "No two numbers sum to the third number";
    }
        
        


return 0;
}