#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Stack newStack = Stack();

  newStack.push(1);
  newStack.push(2);
  newStack.push(3);
  newStack.push(4);
  newStack.push(5);
  newStack.push(6);

  newStack.print();

  newStack.pop();
  newStack.pop();

  newStack.push(8);
  cout << newStack.top() << endl;  // should be an 8
  cout << newStack.size() << endl; // should be 5

  newStack.print();
  return 0;
}
