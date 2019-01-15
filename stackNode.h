#ifndef STACKNODE_H
#define STACKNODE_H
 
#include <iostream>
#include "stack.h"
using namespace std;

#The stack implementation functions as a single linked list, where each stackNode holds an integer value and a pointer
#to the next stackNode. 
 
class stack;


class stackNode{
 public:
  stackNode();
 
 private:
  int value;
  stackNode *next;
  friend class stack;
};
 
#endif
