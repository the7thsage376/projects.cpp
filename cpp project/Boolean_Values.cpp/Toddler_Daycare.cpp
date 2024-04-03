// program that assesses whether toddler criteria
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int toddler_age, parent_age ,income;
    string parent_status;
    cout << "Enter the followiing information: " << endl;
    cout << "Age of parent: " << endl;
        cin >> parent_age;
    cout << "Age of toddler: " << endl;
        cin >> toddler_age;
    cout << "Annual income: " << endl;
        cin >> income;
    cout << "Relationship status: " << endl;
        cin >> parent_status;
    // Boolean variable that contains all conditions
    int Eligibile= toddler_age > 2 && toddler_age <6 && income < 60000 && parent_age <=30 && parent_status=="single";
    if(Eligibile)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Non-Eligible";
    }
    return 0;
}