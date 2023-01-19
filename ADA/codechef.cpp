#include <bits/stdc++.h>
using namespace std;
stack<int> s1,s2;
queue<int> Q;

void print_queue(queue<int> q)
{
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
}
void print_stack(stack<int> s)
{
    if (s.empty())
        return;
    int x = s.top();
 
    s.pop();

    cout << x << " ";
 
    print_stack(s);
 
    s.push(x);
}
void insert_at_bottom(char x)
{
 
    if(s2.size() == 0)
    s2.push(x);
 
    else
    {
        char a = s2.top();
        s2.pop();
        insert_at_bottom(x);
        s2.push(a);
    }
}
void reverse()
{
    if(s2.size()>0)
    {         
        char x = s2.top();
        s2.pop();
        reverse();
        insert_at_bottom(x);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ele,dirty=-1;

    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        if(s1.empty() || x<s1.top())
        {
            s1.push(x);
            if(!Q.empty())
            {
                print_queue(Q);
                cout<<endl;
            }
            if(!s1.empty())
            {
                print_stack(s1);
                cout<<endl;
            }
            if(!s2.empty())
            {
                print_stack(s2);
                cout<<endl;
            }
        }
        else if(s2.empty() || x>s2.top())
        {
            s2.push(x);
            if(!Q.empty())
            {
                print_queue(Q);
                cout<<endl;
            }
            if(!s1.empty())
            {
                print_stack(s1);
                cout<<endl;
            }
            if(!s2.empty())
            {
                print_stack(s2);
                cout<<endl;
            }
        }
        else
        {
            if(abs(x-s1.top()) < abs(x-s2.top()))
            {
                ele=s1.top();
                s1.pop();
                Q.push(ele);
                dirty=0;
            }
            else
            {
                ele=s2.top();
                s2.pop();
                Q.push(ele);
                dirty=1;
            }
            while(true)
            {
                if(dirty==0)
                {
                    if(s1.empty() || x<s1.top())
                    {
                        s1.push(x);
                        if(!Q.empty())
                        {
                            print_queue(Q);
                            cout<<endl;
                        }
                        if(!s1.empty())
                        {
                            print_stack(s1);
                            cout<<endl;
                        }
                        if(!s2.empty())
                        {
                            print_stack(s2);
                            cout<<endl;
                        }
                        break;
                    }
                    else
                    {
                        ele=s1.top();
                        s1.pop();
                        Q.push(ele);
                    }
                }
                else
                {
                    if(s2.empty() || x>s2.top())
                    {
                        s2.push(x);
                        if(!Q.empty())
                        {
                            print_queue(Q);
                            cout<<endl;
                        }
                        if(!s1.empty())
                        {
                            print_stack(s1);
                            cout<<endl;
                        }
                        if(!s2.empty())
                        {
                            print_stack(s2);
                            cout<<endl;
                        }
                        break;
                    }
                    else
                    {
                        ele=s2.top();
                        s2.pop();
                        Q.push(ele);
                    }
                }
            }
            int size=Q.size()-1;
            while(size!=0)
            {
                int temp=Q.front();
                Q.pop();
                Q.push(temp);
                size--;
            }
            if(dirty==0)
            {
                while (!Q.empty())
                {
                    s1.push(Q.front());
                    Q.pop();
                }
            }
            else
            {
                while (!Q.empty())
                {
                    s2.push(Q.front());
                    Q.pop();
                }
            }
        }
    }
    reverse();
    while(!s1.empty() && !s2.empty())
    {
        int min=s1.top();
        if(s2.top() < min)
        {
            min=s2.top();
            s2.pop();
            Q.push(min);
            if(!Q.empty())
            {
                print_queue(Q);
                cout<<endl;
            }
            if(!s1.empty())
            {
                print_stack(s1);
                cout<<endl;
            }
            if(!s2.empty())
            {
                print_stack(s2);
                cout<<endl;
            }
        }
        else
        {
            s1.pop();
            Q.push(min);
            if(!Q.empty())
            {
                print_queue(Q);
                cout<<endl;
            }
            if(!s1.empty())
            {
                print_stack(s1);
                cout<<endl;
            }
            if(!s2.empty())
            {
                print_stack(s2);
                cout<<endl;
            }
        }
    }
    while(!s1.empty())
    {
        Q.push(s1.top());
        s1.pop();
        if(!Q.empty())
        {
            print_queue(Q);
            cout<<endl;
        }
        if(!s1.empty())
        {
            print_stack(s1);
            cout<<endl;
        }
        if(!s2.empty())
        {
            print_stack(s2);
            cout<<endl;
        }
    }
    while(!s2.empty())
    {
        Q.push(s2.top());
        s2.pop();
        if(!Q.empty())
        {
            print_queue(Q);
            cout<<endl;
        }
        if(!s1.empty())
        {
            print_stack(s1);
            cout<<endl;
        }
        if(!s2.empty())
        {
            print_stack(s2);
            cout<<endl;
        }
    }
}