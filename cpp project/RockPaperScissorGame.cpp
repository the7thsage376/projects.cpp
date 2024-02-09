/**
 * Rock paper scissors game that prompts user for input, generates random computer choice,
 * compares user and computer choices, and displays result.
 * - Initializes random number generator with srand()
 * - Prompts user input and stores in user_input
 * - Prints user input
 * - Generates random int 0-2 and uses to index choices array for computer choice
 * - Prints computer choice
 * - Compares user and computer choices to determine winner
 * - Implements play limit using if statement
 */
// A rock/paper/scissor game where the user is asked to make choices based on both computer
// and user choices and the results are displayed showing both computer and user choices
#include <iostream>
#include <random>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
/**
 * Main function that implements a rock paper scissors game.
 * Initializes random number generator, prompts for user input,
 * generates computer choice, compares choices, and displays result.
 * Implements play limit of 3 rounds with a counter.
 */
int main()
{
  srand(time(NULL));
  // In summary, srand(time(NULL)) ensures that each run of your program starts with a different seed
  // leading to different sequences of random numbers. 🎲

  std::string choices[] = {"Rock", "Paper", "Scissor"};
  string user_input;
  cout << "Rock, Paper or Scissors: ";
  cin >> user_input;
  cout << "your choice is: " << user_input << endl;

  // using the cin object to take in user input and compare the input with the string array

  const int limit = 3;

  // writing the code for how the computer is going to guess a random choice
  // between rock paper scissors
  // Comparing the random choice with user input to get result of first game
  // calling a random element from choices array into another variable

  int random = rand() % 3;
  const string cpu_answer = choices[random];
  cout << "computer's choice: " << cpu_answer;

  // using If...Else statements to limit the number of times the game can be played
  // using the if statement to compare user input with computer choice
  // using a while or for loop to keep playing the game until the limit is reached
  // counting the number of times the game is played and comparing it to the limit
  // counting the number of times the user wins against the computer
  // user must win 2 or 3 times to win the game
  while (limit == 3)
  {
    if (user_input == cpu_answer)
    {
      cout << "Draw!" << endl;
    }
    else if (user_input == choices[0] && cpu_answer == choices[2])
    {
      cout << " Rock wins!" << endl;
    }
    else if (user_input == choices[1] && cpu_answer == choices[0])
    {
      cout << " Paper wins!" << endl;
    }
    else if (user_input == choices[2] && cpu_answer == choices[1])
    {
      cout << " Scissor wins!" << endl;
    }
  }

  return 0;
}
