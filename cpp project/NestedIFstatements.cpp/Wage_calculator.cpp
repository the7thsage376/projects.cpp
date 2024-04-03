// Program that calculates wage of waitron given ;starting and finishing time.
#include <iostream>
using namespace std;
int main()
{
// wage rates
 const float Afternoon_Rate=32.50;
 const float Evening_Rate= 44;
 // shift hours
 int start;
 int end; 
 // input
 cout << "Wage calculation" << endl;
 cout << "==================" << endl;
 cout <<"Starting time:  " ;
 cin >> start;
 cout << "Finishing time:  ";
 cin >> end;
 // Nested If statements with calculations. 
        if(end <= 6)
            {
                cout << "The payment is R" <<(end-start) * Afternoon_Rate; 
            }
        if(start < 6 && end >6)
            {
                cout << "The payment is R" <<(6-start) * Afternoon_Rate + (end - 6) * Evening_Rate;
            }
        if(start >= 6)
        {
            cout  << "The payment is R" << (end - start) * Evening_Rate;
        }
// work on math logic for IF statements




return 0;
}
