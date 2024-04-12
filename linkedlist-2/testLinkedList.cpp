#include "linkedList.h"
#include <iostream>
using namespace std;

int main()
{
  linkedList myList;
  linkedList myList2;
  
  myList.insertAtEnd(3);
  myList.insertAtEnd(5);
  myList.insertAtEnd(7);
  myList.insertAtEnd(9);

  myList.print();

  myList2.insertAtFront(2);
  myList2.insertAtEnd(3);
  myList2.insertAtEnd(5);
  myList2.insertAtEnd(7);
  myList2.insertAtEnd(9);
  myList2.insertAtFront(1);

  myList2.print();
  
}
