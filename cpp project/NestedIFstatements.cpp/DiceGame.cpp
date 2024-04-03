//Dice game that asks user for two number and rolls dice
#include <iostream>
using namespace std;
int main()
{
    // Dice dialogue
    int num1, num2;
    cout << "Let's roll the dice!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // If statement conditions
    if (num1 + num2 == 7 || num1 + num2 == 11)
    {
        cout << "You win!" << endl;
    }
    else if (num1 + num2 == 2)
    {
        cout << "Snake eyes!" << endl;
    }
    else if (num1 + num2 == 12)
    {
        cout << "Good shot!";
    }
    else
    {
        cout << "Try again!";
    }

    return 0;
}
