#include<bits/stdc++.h>
using namespace std;

class Queue
{

};


int main()
{
    stack<int>s1;
    stack<int>s2;
    int a;
    cout<<"Enter the number of elements to push into the queue"<<"\n";
    cin>>a;
    do{
        int n;
        cout<<"Enter the number to push into queue"<<"\n";
        cin>>n;
        s1.push(n);
        a--;
    }while(a!=0);

    for(int i=a-1;i=0;i--)
    {
        s2.push(s1.);
    }


    do {
    cout << "2. display()" << endl;
    cout << "3. dequeue()" << endl;
    int option;
    cin >> option;

    switch (option) {
    case 0:
      break;

    case 2: 
      cout << "Display Function Called  " << endl;
      for(int i=0;i<a;i++)
      {
          cout<<s1[i];
      }
      break;

      case 3:
      cout<<"Dequeue operation called"<< endl;
      s2.pop();
      break;
    }
  } while (option != 0);
}