//
//File: mainStack.cpp
//Description: Driver file for Stack class
//
//

#include "stack.h"
#include <iostream>
using namespace std;

int main(void) {

  Stack s1;

  cout << "Inserting 10" << endl;
  
  s1.Push(10);

  cout << "Inserting 15" << endl;
  
  s1.Push(15);

  cout << "Inserting 20" << endl;
  
  s1.Push(20);

  cout << "Is stack empty ?" << endl;
  if(s1.Empty() == 0){
    cout << "False" << endl;
  }else{
    cout << "True" << endl;
  }

  cout << "Popping value: " << s1.Pop() << endl;

  cout << "Popping value: " << s1.Pop() << endl;

  cout << "Popping value: " << s1.Pop() << endl;

  cout << "Is stack empty now? " << endl;
  if(s1.Empty() == 0){
    cout << "False" << endl;
  }else{
    cout << "True" << endl;
  }

  
  return 0;
}
