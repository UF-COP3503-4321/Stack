#include "LinkedList.h"

class Stack {
  // Data members
private:
  LinkedList list;
  int topIndex;
  // methods
public:
  void push(int value); // insert item at top of Stack
  int pop(); // Return and remove the top item in Stack
  int top(); // Return the top item WITHOUT removing it
  int size(); // Return the size of the Stack
  void print();  // Print out the Stack
  bool isEmpty(); // Return true if the stack is empty
  // Constructor
  Stack() {
    list = LinkedList();
    topIndex = 0;
  }
};
