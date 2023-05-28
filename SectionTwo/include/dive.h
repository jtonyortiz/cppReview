//
//File: dive.h
//Description: Header file for Dive Class 
//

class Dive {
public:
  Dive (float avg, float diff);

  float CalcTotalPoints() const;

  void Display() const;

  void SetDifficulty(float diff);

  void SetJudgeScore(float score);

 private:
  float judgeScore;
  float difficulty;
  
};
