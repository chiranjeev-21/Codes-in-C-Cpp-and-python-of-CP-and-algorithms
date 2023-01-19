#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
}*head;

node* newNode(int data)
{
    node* ptr= new node;
    ptr->data = data;
 
    ptr->next = nullptr;
 
    return node;
}
int main()
{
    int item;
    struct node *ptr = new node;
    if(ptr==null)
    {
        return -1;
    }
    else  
        {  
            ptr->data = item;  
            ptr->next = ptr;   
        } 
    ptr = head;
    while (ptr!=NULL)  
            {  
                cout<<ptr -> data; 
                ptr = ptr -> next;  
            }  
    
}