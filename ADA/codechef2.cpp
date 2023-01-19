#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;


stack <int> s3;


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


void reverse(stack<int> s2)
{
    if(s2.size()>0)
    {         
        char x = s2.top();
        s3.push(x);
        s2.pop();
    }
}


int main(){
    IOS;

        stack<int> s1,s2;
        queue<int> q;
        
        int n,st_top=0,different_bit=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s1.empty()||a[i]<s1.top())
            {
                s1.push(a[i]);
            }
            else if(s2.empty() || a[i]>s2.top())
            {
                s2.push(a[i]);
            }
            else
            {
                int first,second;
                first=abs(a[i]-s1.top());
                second=abs(a[i]-s2.top());
                
                if(first < second)
                {
                    st_top=s1.top();
                    s1.pop();
                    q.push(st_top);
                    different_bit=1000;
                }
                else
                {
                    st_top=s2.top();
                    s2.pop();
                    q.push(st_top);
                    different_bit=1001;
                }
                while(!q.empty())
                {
                    q.pop();
                    int ssize = q.size();
                    if(different_bit==1000)
                    {
                        int front_element=q.front();
                        q.pop();
                        s1.push(front_element);
                        if(q.size()==1)
                        {
                            int front_second_element=q.front();
                            q.pop();
                            s1.push(front_second_element);
                            int plaza=s1.top();
                            s1.pop();
                            q.push(s1.top());
                        }
                    }
                    if(different_bit=1001)
                    {
                        int frontal_element=q.front();
                        q.pop();
                        s1.push(frontal_element);
                        if(q.size()==1)
                        {
                            int frontal_second_element=q.front();
                            q.pop();
                            s1.push(frontal_second_element);
                            int plasa=s1.top();
                        }
                    }
                }
             reverse(s2);
             s2=s3;
             while(!s1.empty() && !s2.empty())
             {
             int smaller = s1.top();
             int smaller_second = s2.top();
             int smallest = min(smaller,smaller_second);
             q.push(smallest);
             } 
                
            }
        }
        
        print_queue(q);

    
    return 0;
}
