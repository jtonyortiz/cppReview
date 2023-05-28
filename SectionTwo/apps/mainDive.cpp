//
//File: mainDive.cpp
//Description: Driver class for Dive program
//

#include "dive.h"
#include <iostream>

int main(void) {

  //Create three Dive objects.
  Dive D1(8.5, 3.0);
  Dive D2(9.0, 2.5);
  Dive D3(8.0, 3.3);

  //Display the dives:
  D1.Display();
  D2.Display();
  D3.Display();

  D2.SetDifficulty(3.5);

  //Display the dives again:
  std::cout << "Changing Dive #2" << std::endl;
  D1.Display();
  D2.Display();
  D3.Display();
  
  
  return 0;
}
