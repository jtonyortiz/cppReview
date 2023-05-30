//
//File: stack.h 
//Description: Header file for stack.h
//
//

class Stack {
 public:
  Stack(); //public constructor

  //Empty() - returns an int value of 1
  //If the stack is empty, 0 if not
  int Empty() const;

  //Full() - return 1 if the stack is full,
  //and 0 if not
  int Full() const;

  //Push() - Push a new value onto the stack
  void Push(int item);

  //Pop() - Pop a value from the stack;
  int Pop();
  
  
 private:
  enum Size {StackSize = 40};
  int top;
  int data[Size::StackSize];


  
};//end Class Stack
