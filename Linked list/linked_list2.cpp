#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkedList {
    public:
    Node* head;
    
    void print()
    {
        Node* temp = head;
        while (temp != NULL) {

            cout << temp->data << " ";
            temp = temp->next;
        }
        temp->next=head;
        cout<<temp->next;
    }
  
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
  
    cout << "Given linked list\n";
    ll.print();
}




