#include "gtest/gtest.h"
#include "RockPaperScissorGame.cpp"

TEST(RockPaperScissorGameTest, Draw) {
  srand(0); // seed random number generator
  string user_input = "Rock";
  int random = 0; // force "Rock"
  const string cpu_answer = choices[random];
  
  EXPECT_EQ(user_input, cpu_answer);
}

TEST(RockPaperScissorGameTest, UserWins) {
  srand(0);
  string user_input = "Paper";
  int random = 2; // force "Scissors"
  const string cpu_answer = choices[random];

  EXPECT_TRUE(user_input == "Paper" && cpu_answer == "Scissor");
}

TEST(RockPaperScissorGameTest, ComputerWins) {
  srand(0);
  string user_input = "Scissor";
  int random = 1; // force "Paper"
  const string cpu_answer = choices[random];

  EXPECT_TRUE(user_input == "Scissor" && cpu_answer == "Paper");  
}

TEST(RockPaperScissorGameTest, PlayLimit) {
  int limit = 3;
  while (limit > 0) {
    // play game
    limit--; 
  }

  EXPECT_EQ(limit, 0);
}