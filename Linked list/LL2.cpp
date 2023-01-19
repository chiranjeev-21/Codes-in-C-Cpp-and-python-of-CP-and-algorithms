#include<iostream>

using namespace std;

class Node {
  public:
  int data;
  Node * next;

  Node() {
    data = 0;
    next = NULL;
  }
  Node(int d) {
    data = d;
  }
};

class linkedlist {
  public:
    Node * head;

  linkedlist() {
    head = NULL;
  }
  linkedlist(Node * n) {
    head = n;
  }
  void insert(Node * n) {
      if (head == NULL) {
        head = n;
        cout << "Node Added" << endl;
      } else {
        Node * ptr = head;
        while (ptr -> next != NULL) {
          ptr = ptr -> next;
        }
        ptr -> next = n;
        cout << "Node Added" << endl;
      }
    }

  void push(Node * n) {
      n -> next = head;
      head = n;
      cout << "Node Added" << endl;
    }

    void print()
    {
        Node* temp = head;
        while (temp != NULL) {

            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {

  linkedlist ll;
  int option;
  int data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. insert" << endl;
    cout << "2. push" << endl;
    cout << "3. print"<< endl;

    cin >> option;
    Node * n1 = new Node();
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Insert Node at the end of the list \nEnter data of the Node to be added" << endl;
      cin >> data1;
      n1 -> data = data1;
      ll.insert(n1);
      break;

    case 2:
      cout << "Insert Node at the beginning of the list \nEnter data of the Node to be added" << endl;
      cin >> data1;
      n1 -> data = data1;
      ll.push(n1);
      break;

    case 3:
    ll.print();
    cout<<endl;

     case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      ll.deleteNodeByKey(k1);

    }

  } while (option != 0);

  return 0;
}
