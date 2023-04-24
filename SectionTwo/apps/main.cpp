//File: main.cpp
//Compile: cmake
//


#include "point.h"

int main(){
  Point p(100, 350);

  cout << "Obtain X-Coordinate: " << endl;
  cout << p.GetX() << endl;
  cout << "Obtain Y-Coordinate: " << endl;
  cout << p.GetY() << endl;

  return 0;
}
