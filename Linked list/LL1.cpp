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
    }
  
    void insert(int data)
    {
        if(head==NULL){
            head=new Node(data);
            return ;
        }
        Node* temp = new Node(data);
        temp->data = data;
        temp->next = NULL;
      
            Node* ptr = head;
            while(ptr->next !=NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;

    }
};
int main()
{
    LinkedList ll;
    ll.insert(6);
    ll.insert(4);
    ll.insert(45);
    ll.insert(79);
  
    cout << "Given linked list\n";
    ll.print();
}
