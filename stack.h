#ifndef STACK_H
#define STACK_H
 
#include <iostream>
#include "stackNode.h"
 
using namespace std;
 
class stackNode;
 
class stack{
 public:
  stack();            # Constructor
  ~stack();           # Destructor
  void push(int x);   # method to push an element on the top of the stack
  int top();          # returns the value on the top of the stack
  void pop();         # removes the top element on the stack 
  void empty();       # removes all elements within the stack
  int size();         # returns the number of items in the stack
 
 private:
  stackNode *head;    # Initialize the top node of the stack
  int count;          
  friend class stackNode;
};
 
#endif
