#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int x)
{
  //create a new list node
  node *temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  //insert the node at the end
  if (head == nullptr) //list is empty
    {
      head = temp;
      tail = temp;
    }
  else  //list is not empty
    {
      tail -> next = temp;
      tail = tail -> next;
    }
  count++;
}

void linkedList::insertAtFront(int x)
{
  node *temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  if (head == nullptr) //List is empty
  {
    head = temp;
    tail = temp;
  } else {
    temp -> next = head;
    head = temp;
  }
  count++;
}

bool linkedList::search(int x) const
{
  node *current = head;

  while(current != nullptr)
  {
    if(current->num == x){
      return true;
    } else {
      current = current->next;
    }
  }

  return false;
}

void linkedList::print() const
{
  node *temp = head;
  while(temp != nullptr)
    {
      cout << temp -> num;

      temp = temp -> next;
      if (temp!= nullptr)
	cout << " -> ";
    }
  cout << endl;

}




