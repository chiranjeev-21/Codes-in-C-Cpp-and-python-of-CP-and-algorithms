#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;


void print_queue(queue<int> q)
{
    if(q.empty())
    {
        return;
    }
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout<<"\n";
}


void print_stack(stack<int> s)
{
    if (s.empty())
        return;
    while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout<<"\n";
}


int main(){
        IOS;
        stack<int> s1,s2,s3;
        queue<int> q;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s1.empty()==1 ||a[i]<s1.top())
            {
                s1.push(a[i]);
                print_queue(q);
                print_stack(s1);
                print_stack(s2);
                continue;
            }
            else if(s2.empty()==1 || a[i]>s2.top())
            {
                s2.push(a[i]);
                print_queue(q);
                print_stack(s1);
                print_stack(s2);
                continue;
            }
            else
            {
                int first,second;
                first=abs(a[i]-s1.top());
                second=abs(a[i]-s2.top());
                
                if (abs(s1.top() - a[i]) < abs(s2.top() - a[i]))
            {
                while (1)
                {
                    if (s1.empty() == 1 || a[i] < s1.top())
                    {
                        s1.push(a[i]);
                        print_queue(q);
                        print_stack(s1);
                        print_stack(s2);
                        break;
                    }
                    else
                    {
                        q.push(s1.top());
                        s1.pop();
                    }
                }
                while (q.size() != 0)
                {
                    for (int i = 0; i < q.size() - 1; i++)
                    {
                        int temp = q.front();
                        q.pop();
                        q.push(temp);
                    }
                    s1.push(q.front());
                    q.pop();
                }
            }
             else
            {
                while (true)
                {
                    if (s2.empty() == 1 || a[i] > s2.top())
                    {
                        s2.push(a[i]);
                        print_queue(q);
                        print_stack(s1);
                        print_stack(s2);
                        break;
                    }
                    else
                    {
                        q.push(s2.top());
                        s2.pop();
                    }
                }
                while (q.size() != 0)
                {
                    for (int i = 0; i < q.size() - 1; i++)
                    {
                        int temp = q.front();
                        q.pop();
                        q.push(temp);
                    }
                    s2.push(q.front());
                    q.pop();
                }
            }
        }
    }
             while(s2.size()!= 0)
            {         
                int x = s2.top();
                s3.push(x);
                s2.pop();
            }
    while(!s1.empty() && !s3.empty())
    {
        int top_ele=s1.top();
        if(s3.top() < top_ele)
        {
            top_ele=s3.top();
            s3.pop();
            q.push(top_ele);
            print_queue(q);
            print_stack(s1);
            print_stack(s3);
        }
        else
        {
            s1.pop();
            q.push(top_ele);
            print_queue(q);
            print_stack(s1);
            print_stack(s3);
        }
    }
    while(!s1.empty())
    {
        q.push(s1.top());
        s1.pop();
        print_queue(q);
        print_stack(s1);
        print_stack(s3);
    }
    while(!s3.empty())
    {
        q.push(s3.top());
        s3.pop();
        print_queue(q);
        print_stack(s1);
        print_stack(s3);
    }
    return 0;
}