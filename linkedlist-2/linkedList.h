#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

//define the list node
struct node{
  int num;
  node *next;
};

//Hi there

class linkedList
{
 public:
  linkedList();
  
  void insertAtEnd(int x);
  void print() const;
  
 private:
  node *head;
  node *tail;
  int count;

};





#endif
