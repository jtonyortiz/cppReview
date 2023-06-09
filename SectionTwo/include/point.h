//
//File: point.h
//Compile: cmake build
//


#include <iostream>
using namespace std;

class Point{
public:
  //Constructors:
  Point(){
    x = 0;
    y = 0;
  }

  Point(int xv, int yv){
    SetX(xv); //set x-coordinate
    SetY(yv); //set y-coordinate
  }

  //Copy Constructor:
  Point(const Point &point2){
    cerr << "Point class copy constructor called" << endl;
    x = point2.x;
    y = point2.y;
    
  }
  
  //Returns the value of x:
  int GetX(){
    return x;
  }

  //Returns the value of y:
  int GetY(){
    return y;
  }

  //Sets the value of x:
  void SetX(int xval){
    x = xval;
  }

  //Sets the value of y:
  void SetY(int yval){
    y = yval;
  }

  //Destructor:
  ~Point(){
    cout << "Point class destructor Called" << endl;
  }
  
private:
  int x; //x-coordinate:
  int y; //y-coordinate:
}; //end POINT class
  
