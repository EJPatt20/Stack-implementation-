#include "stack.h"
 
using namespace std;
 
stack::stack(){
  count = 0;
  head = new stackNode();
}
 
stack::~stack(){
  empty();
}
 
void stack::push(int x){
  stackNode* node = new stackNode();  
  node->value = x;
  node ->next = head;
  head = node;
  count ++;
}
 
void stack:: pop(){
  if(count > 0){
    stackNode* temp = head;
    head = head ->next;
    delete(temp);
    count --;
  }
}
 
int stack::size(){
  return count;
}
 
int stack::top(){
  int returnVal = head -> value;
  return returnVal;
}
 
void stack::empty(){
  if( count == 1){
    pop();
  }
  else{
    for(int i = 0; i < count; i++){
      pop();
}
  }
}
