#include <iostream>
using namespace std;
int main()
{
    int x;
    int y=90;
    cout << "Input: ";
    cin >> x;
    if(x > 0)
        {
            x=x-1;
            cout << x;
        }
    else if(x < 0)
        {
            x=x+1;
            cout << x;
        }
    else
        {
            x=y;
            cout << x;
        }

        return 0;
}