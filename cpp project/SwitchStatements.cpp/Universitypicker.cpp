// Program that determines university choice
// Program works successfully
#include <iostream>
using namespace std;
int main()
{// Declaring variables 
    int Holiday_Earnings, Average_mark;
// text output
cout <<"I can facilitate your enrollment at your preferred university if you meet my requirements." << endl;
cout << "What is your average mark?" << endl;
cout << "average mark: ";
    cin >> Average_mark;
cout << "What are your earnings for your holiday job?" << endl;
cout << "Holiday earnings: ";
    cin >> Holiday_Earnings;

// Switch statements with conditions
    switch(Average_mark)
        {
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:

                cout << "You can go to the university of your choice" << endl;
                cout << "and you're getting a car";
                break;
                
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
                if(Average_mark >= 75 && Average_mark <= 89 && Holiday_Earnings>=5000 )
                    {
                        cout << "You can go to the university of your choice" << endl;
                        cout << "and you're getting a car";
                    }
                else if (Average_mark >=75 && Average_mark <=88 && Holiday_Earnings < 5000)
                    {
                        cout << "You can go to the university of your choice" << endl;
                        cout << "but no car";
                    }
                
                break;
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 71:
            case 72:
            case 73:
            case 74:
                cout << " You can only Study at the nearest university";
                break;
            
            case 59:
                cout << "Your average is too low and you need to look at other alternatives";
                break;
            
            default:
                cout << "Your average is too low and you need to look at other alternatives";

        }


return 0;
}