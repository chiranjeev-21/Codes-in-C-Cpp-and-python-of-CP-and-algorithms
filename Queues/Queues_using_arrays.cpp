#include <bits/stdc++.h>
using namespace std;
  
class Queue {
    public:
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
 
    }
  
    ~Queue() { delete[] queue; }
  
    void queueEnqueue(int data)
    {
        if (capacity == rear) {
            cout<<"\nQueue is Full\n";
            return;
        }
  
        else {
            queue[rear] = data;
            rear++;
        }
        return;
    }
    void queueDequeue()
    {
        if (front == rear) {
            cout<<"\nQueue is Empty\n";
            return;
        }
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
  
            rear--;
        }
        return;
    }
  
    void queueDisplay()
    {
        int i;
        if (front == rear) {
            cout<<"\nQueue is Empty\n";
            return;
        }
  
        for (i = front; i < rear; i++) {
            cout<<" <-- "<<queue[i];
        }
        return;
    }
  
    void queueTop()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        cout<<"\nTop Element is: "<<queue[front];
        return;
    }
};
  
int main()
{
    int n;
    cout<<"Enter the capacity of queue";
    cin>>n;
    Queue q(n);
    int a, option;

  do {
    cout << "1. Enqueue()" << endl;
    cout << "2. display()" << endl;
    cout << "3. dequeue()" << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
      cin >> a;
      q.queueEnqueue(a);
      break;

    case 2: 
      cout << "Display Function Called  " << endl;
      q.queueDisplay();
      break;

      case 3:
      cout<<"Dequeue operation called"<< endl;
      q.queueDequeue();
      break;
    }
  } while (option != 0);

  return 0;
}
  
   /* q.queueDisplay();
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
  
  
    q.queueDisplay();
  
  
    q.queueEnqueue(60);
  
    q.queueDisplay();
  
    q.queueDequeue();
    q.queueDequeue();


    q.queueDisplay();
  

    q.queueFront();
  
    return 0;
}*/



