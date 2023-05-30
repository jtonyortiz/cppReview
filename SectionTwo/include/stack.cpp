//
//File: stack.cpp
//Description: Implementation file for stack.cpp
//
//

#include "stack.h"
#include <iostream>

//Constructor:
Stack::Stack() {
  top = -1;
}

//Implementation of Empty()
int Stack::Empty() const {
  if(top == -1) {
    return 1;
  }

  return 0;
}


//Implementation of Full()
int Stack::Full() const {
  if(top == 39){
    return 1;
  }

  return 0;
}

//Implemetation of Push()
void Stack::Push(int item) {
  if(Full() == 0){
    top++;
    data[top] = item;
  }

  if(Full() == 1){
    std::cout << "Stack is full, cannot add more values. " << std::endl;
  }
}

//Implementation of Pop()
int Stack::Pop() {

  //Check if stack is empty:
  if(Empty() == 0){
    int value = data[top];
    top--;
    return value;
  }

  return 0;
 
}
