#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

//define the list node
struct node{
  int num;
  node *next;
};

class linkedList
{
 public:
  linkedList();
  
  void insertAtEnd(int x);
  void insertAtFront(int x);
  bool search(int x) const;
  void print() const;
  
 private:
  node *head;
  node *tail;
  int count;

};





#endif
