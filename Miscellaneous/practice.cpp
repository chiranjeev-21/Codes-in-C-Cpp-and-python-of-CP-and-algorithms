#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    queue<int>q;
    stack<int>s;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    int x=q.size()/2;
    for(int i=0;i<x;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
    q.push(s.top());
    s.pop();
    }

    for(int i=0;i<x;i++)
    {
        s.push(q.front());
        q.pop();
    }

    q.push(s.top());
    s.pop();
    
    for(int i=0;i<x;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<"Printing"<<"\n";
    for(int i=0;i<q.size();i++)
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
}*/
int main()
{
    string str;
    stack<char>s;
    cout<<"Input a string";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    cout<<"Reversed string is"<<"\n";
    for(int i=0;i<str.length();i++)
    {
        cout<<s.top();
        s.pop();
    }
}