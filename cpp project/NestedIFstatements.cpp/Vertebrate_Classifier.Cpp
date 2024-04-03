// Program that classifies vertebrate into 5 categories
#include <iostream>
using namespace std;
int main()
{
// Question variables
char question_1;
char question_2;
char question_3;
char question_4;
char question_5;
//Display message and questions
cout <<"What type of vertebrae is it?" << endl;
cout <<"Is the animal warm blooded? [y/n]";
cin >> question_1;
cout << "Does it ever breathe through gills in its life? [y/n]";
cin >> question_2;
cout << "Does it suckle its young? [y/n]";
cin >> question_3;
cout << "Is its body light? [y/n]";
cin >> question_4;
cout << "Does it need to be in large bodies of water? [y/n]";
cin >> question_5;
// If statements of category of Vertebrate

    if (question_1=='y'  && question_3 =='y')
        {
            cout << "It's a  Mammal";
        }
     else if (question_3=='y' && question_4=='y')
        {
            cout << "It's a bird";
        }
     else if (question_1=='y' && question_2 =='y')
        {
            cout << "It's an Amphibian";
        }
     else if (question_2=='y' && question_5=='y')
        {
            cout << "It's a Fish";
        }
     else if (question_1=='n' && question_2=='n')
        {
            cout << "It's a reptile";
        }



return 0;
}  
//To be continued...
// Got it on the first try!