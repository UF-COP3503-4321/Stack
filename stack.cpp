#include <iostream>
#include "stack.h"

void Stack::push(int value) {
  list.insertAt(value, topIndex);
}

int Stack::pop() {
  int result = list.findAt(topIndex);
  list.deleteAt(topIndex);
  return result;
}

int Stack::top() {
  int result = list.findAt(topIndex);
  return result;
}

int Stack::size() {
  return list.getSize();
}

bool Stack::isEmpty() {
  if (list.getSize() == 0) {
    return true;
  } else {
    return false;
  }
}

void Stack::print() {
  // list.print();  Technically okay
  Stack printStack = Stack();
  while (!isEmpty()) {
    cout << top() << " ";
    printStack.push(pop());
  }
  while (!printStack.isEmpty()) {
    push(printStack.pop());
  }
  cout << endl;
}
