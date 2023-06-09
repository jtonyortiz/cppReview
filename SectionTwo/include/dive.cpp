//
//File: dive.cpp
//Description: Dive Class Implementation File
//

#include "dive.h"
#include <iostream>

//Constructor for Dive class:
Dive::Dive(float avg, float diff) {
  SetJudgeScore(avg);
  SetDifficulty(diff);
  
}//end Dive constructor

//Display Output Function
void Dive::Display() const {
  std::cout << "[Dive]: "
       << judgeScore << " , "
       << difficulty << " , "
       << CalcTotalPoints()
	    << std::endl;
}

//Function to Assign Difficulty:
void Dive::SetDifficulty(float diff) {
  difficulty = diff;
}


//Function to set judge score:
void Dive::SetJudgeScore(float score) {
  judgeScore = score;
}


//Function to calculate total points from diver:
float Dive::CalcTotalPoints() const {
  return judgeScore * difficulty;
}

