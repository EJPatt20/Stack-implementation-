#include "stackNode.h"
 
using namespace std;
 
 # Constructer used to initialize class varaibles
 
stackNode::stackNode(){
  value = *new int;
  next = NULL;
}
