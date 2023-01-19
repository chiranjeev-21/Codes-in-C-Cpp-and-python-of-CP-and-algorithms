#include <iostream>
using namespace std;

class node{
    public:
int data;
node* next;
};
bool isCircular(node *head)
{
  node *slow,*fast;
  slow=head;
  fast=head->next;
  if(head==NULL)
  return true;
  while(true)
  {
    if(fast==NULL||fast->next==NULL)
    {
    return false;
    }
    else if(slow==fast||fast->next==slow)
    {
    return true;
    }
    else
    {
    slow=slow->next;
    fast=fast->next->next;
    }
  }
 }

node *makeNode(int data){
    node *temp=new node;
    temp->data=data;
    temp->next=NULL;
}
int main() {
	node* head=makeNode(1);
	head->next=makeNode(2);
	head->next->next=makeNode(3);
    head->next->next->next=makeNode(4);
    head->next->next->next->next=head;
	if(isCircular(head))
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	return 0;
}
