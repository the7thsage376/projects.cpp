//program that gives the user 10 chances to guess a number between 1 and 100
// Ask copilot when wifi comes back.
#include <iostream>
using namespace std;
int main()
{
    const int SECRET= 23;
    int number;
    bool found=true;
    int chances = 0;
    cout << "Guess a number between 1 and 100: ";
    cin >> number;
    // Ask the user to guess number 10 times
    // End program when correct number is guessed
    while(int number < 10 ,number ++)
    {
         cout << "Guess a number between 1 and 100: ";
         cin >> number;
        // work on incrementing values to other variables
        if(number >100)
            {
                cout << "Invalid number. Enter a number " << endl;
                cout << "between 10 and 100";
            }
             
        if (number==SECRET && chances !=10)
            {
                cout << "Well done! You got the number in " << chances << " guesses";
                break;
            }
    //program must display message and break after 10 chances
        if (chances==10)
            {
                cout << "Tough luck! Your 10 chances are over.";
                break;
            }
           
    }
    number+=chances;
    return 0;

}