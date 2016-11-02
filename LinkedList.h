#include <iostream>
using namespace std;

/*
 *  Node Struct Prototype
 */

struct Node {
  // Data members
  int value;
  struct Node* next;
};

class LinkedList {
  // data members
private:
  Node* head;
  // methods
public:
  int getSize();
  void insertAt(int value, int pos);
  void deleteAt(int pos);
  void print();
  int findAt(int pos);
  int search(int value);
  void updateAt(int newValue, int pos);

  // Constructor
  LinkedList() {
    head = NULL;
  }
};
