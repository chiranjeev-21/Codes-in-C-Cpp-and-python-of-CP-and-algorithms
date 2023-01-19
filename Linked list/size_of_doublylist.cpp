#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node * next;
  Node * previous;

  Node() {
    data = 0;
    next = NULL;
    previous = NULL;
  }
  Node(int d) {
    data = d;
  }
};


class DoublyLinkedList {

  public:
    Node * head;

  DoublyLinkedList() {
    head = NULL;
  }
  DoublyLinkedList(Node * n) {
    head = n;
  }
  void appendNode(Node * n) {
      if (head == NULL) {
        head = n;
        cout << "Node Appended as Head Node" << endl;
      } else {
        Node * ptr = head;
        while (ptr -> next != NULL) {
          ptr = ptr -> next;
        }
        ptr -> next = n;
        n -> previous = ptr;
        cout << "Node Appended" << endl;
      }
    }

     void printList() {
    if (head == NULL) {
      cout << "No Nodes in Doubly Linked List";
    } else {
      cout << endl << "Doubly Linked List Values : ";
      Node * temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> data << ") <--> ";
        temp = temp -> next;
      }
    }

  }

void findSize(Node *n)
{
   int count = 0;
   while (n!=NULL)
   {
       count++;
       n = n->next;
   }
   cout<<count<<"\n";
}
};



int main() {

  DoublyLinkedList obj;
  int option;
  int data1;
  do{
       Node * n = new Node();
       cout<<"Enter 0 to exit"<<"\n";
       cout<<"Enter 1 to append list"<<"\n";
       cout<<"Enter 2 to print list"<<"\n";
       cout<<"Enter 3 to find size of list"<<"\n";
       cin>>option;
       switch (option) 
       {
            case 0:
            break;

            case 1:
            cin >> data1;
            n -> data = data1;
            obj.appendNode(n);
            break;

            case 2:
            obj.printList();
            break;

            case 3:
            obj.findSize(n);
            break;
       }
  }while(option != 0);
  return 0;
}

