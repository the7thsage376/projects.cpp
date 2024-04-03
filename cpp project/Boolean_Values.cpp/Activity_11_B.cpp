#include <iostream>
using namespace std;
int main()
{  
  //Program that checks if the first_num number is a factor of the second_num.
      int first_num;
      int second_num;
      cout << "Enter two integers: ";
      cin >> first_num >> second_num;
      // if the remainder is zero then it is a factor.
      // else it is not a factor

        if (first_num!=0 && first_num == 0)
        {
         cout << first_num << " is a factor of "<< second_num;
        }
        else 
        {
          cout << first_num << " is NOT a factor of "<< second_num;
        }
      
      return 0;

}