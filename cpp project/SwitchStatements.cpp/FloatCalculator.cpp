// Program that performs basic math operations on numbers
// Works perfectly
#include <iostream>
using namespace std;
int main()
{// double check cody suggestions
    float num1,num2;
    char operand;
// Prompt user for input
cout << "Enter two numbers" << endl;
cout << "Number 1: " ;
cin >> num1;
cout << endl;
cout << "Number 2: ";
cin >> num2;
// Ask user what operand to use
cout << "Enter operand for numbers(multiplication(m), division(d), addition(a), subtraction(s)): ";
cin >> operand;
    switch(operand) 
    {
        case 'm':
            cout << num1 * num2 << endl;
            break;

        case 'd':
            cout << num1 / num2 << endl;
                if (num2==0)
                {
                    cout <<"Division by 0 is not allowed!";
                }
            break;

        case 'a':
            cout << num1 + num2 << endl;
            break;

        case 's':
            cout << num1 - num2 << endl;
            break;

        default:
        cout << "Invalid input";

    }
    return 0;
}