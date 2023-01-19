// #include <bits/stdc++.h>
// using namespace std;
// stack<int> s1,s2,s3;
// queue<int> Q;

// void print_queue(queue<int> q)
// {
//   while (!q.empty())
//   {
//     cout << q.front() << " ";
//     q.pop();
//   }
// }
// void print_stack(stack<int> s)
// {
//     if (s.empty())
//         return;
//     int x = s.top();
 
//     s.pop();

//     cout << x << " ";
 
//     print_stack(s);
 
//     s.push(x);
// }
// // void insert_at_bottom(char x)
// // {
 
// //     if(s2.size() == 0)
// //     s2.push(x);
 
// //     else
// //     {
// //         char a = s2.top();
// //         s2.pop();
// //         insert_at_bottom(x);
// //         s2.push(a);
// //     }
// // }
// // void reverse()
// // {
// //     if(s2.size()>0)
// //     {         
// //         char x = s2.top();
// //         s2.pop();
// //         reverse();
// //         insert_at_bottom(x);
// //     }
// // }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int ele,dirty=-1;

//     for(int i=0;i<n;i++)
//     {
//         int x=arr[i];
//         if(s1.empty() || x<s1.top())
//         {
//             s1.push(x);
//             if(!Q.empty())
//             {
//                 print_queue(Q);
//                 cout<<endl;
//             }
//             if(!s1.empty())
//             {
//                 print_stack(s1);
//                 cout<<endl;
//             }
//             if(!s2.empty())
//             {
//                 print_stack(s2);
//                 cout<<endl;
//             }
//         }
//         else if(s2.empty() || x>s2.top())
//         {
//             s2.push(x);
//             if(!Q.empty())
//             {
//                 print_queue(Q);
//                 cout<<endl;
//             }
//             if(!s1.empty())
//             {
//                 print_stack(s1);
//                 cout<<endl;
//             }
//             if(!s2.empty())
//             {
//                 print_stack(s2);
//                 cout<<endl;
//             }
//         }
//         else
//         {
//             if(abs(x-s1.top()) < abs(x-s2.top()))
//             {
//                 ele=s1.top();
//                 s1.pop();
//                 Q.push(ele);
//                 dirty=0;
//             }
//             else
//             {
//                 ele=s2.top();
//                 s2.pop();
//                 Q.push(ele);
//                 dirty=1;
//             }
//             while(true)
//             {
//                 if(dirty==0)
//                 {
//                     if(s1.empty() || x<s1.top())
//                     {
//                         s1.push(x);
//                         if(!Q.empty())
//                         {
//                             print_queue(Q);
//                             cout<<endl;
//                         }
//                         if(!s1.empty())
//                         {
//                             print_stack(s1);
//                             cout<<endl;
//                         }
//                         if(!s2.empty())
//                         {
//                             print_stack(s2);
//                             cout<<endl;
//                         }
//                         break;
//                     }
//                     else
//                     {
//                         ele=s1.top();
//                         s1.pop();
//                         Q.push(ele);
//                     }
//                 }
//                 else
//                 {
//                     if(s2.empty() || x>s2.top())
//                     {
//                         s2.push(x);
//                         if(!Q.empty())
//                         {
//                             print_queue(Q);
//                             cout<<endl;
//                         }
//                         if(!s1.empty())
//                         {
//                             print_stack(s1);
//                             cout<<endl;
//                         }
//                         if(!s2.empty())
//                         {
//                             print_stack(s2);
//                             cout<<endl;
//                         }
//                         break;
//                     }
//                     else
//                     {
//                         ele=s2.top();
//                         s2.pop();
//                         Q.push(ele);
//                     }
//                 }
//             }
//             int size=Q.size()-1;
//             while(size!=0)
//             {
//                 int temp=Q.front();
//                 Q.pop();
//                 Q.push(temp);
//                 size--;
//             }
//             if(dirty==0)
//             {
//                 while (!Q.empty())
//                 {
//                     s1.push(Q.front());
//                     Q.pop();
//                 }
//             }
//             else
//             {
//                 while (!Q.empty())
//                 {
//                     s2.push(Q.front());
//                     Q.pop();
//                 }
//             }
//         }
//     }
//     while(s2.size()!=0)
//     {         
//         int element = s2.top();
//         s3.push(element);
//         s2.pop();
//     }
//     while(!s1.empty() && !s3.empty())
//     {
//         int min=s1.top();
//         if(s3.top() < min)
//         {
//             min=s3.top();
//             s3.pop();
//             Q.push(min);
//             if(!Q.empty())
//             {
//                 print_queue(Q);
//                 cout<<endl;
//             }
//             if(!s1.empty())
//             {
//                 print_stack(s1);
//                 cout<<endl;
//             }
//             if(!s3.empty())
//             {
//                 print_stack(s2);
//                 cout<<endl;
//             }
//         }
//         else
//         {
//             s1.pop();
//             Q.push(min);
//             if(!Q.empty())
//             {
//                 print_queue(Q);
//                 cout<<endl;
//             }
//             if(!s1.empty())
//             {
//                 print_stack(s1);
//                 cout<<endl;
//             }
//             if(!s3.empty())
//             {
//                 print_stack(s2);
//                 cout<<endl;
//             }
//         }
//     }
//     // if(!s1.empty())
//     // {
//     //     Q.push(s1.top());
//     //     s1.pop();
//     //     if(!Q.empty())
//     //     {
//     //         print_queue(Q);
//     //         cout<<endl;
//     //     }
//     //     if(!s1.empty())
//     //     {
//     //         print_stack(s1);
//     //         cout<<endl;
//     //     }
//     //     if(!s3.empty())
//     //     {
//     //         print_stack(s2);
//     //         cout<<endl;
//     //     }
//     // }
//     // if(!s3.empty())
//     // {
//     //     Q.push(s3.top());
//     //     s3.pop();
//     //     if(!Q.empty())
//     //     {
//     //         print_queue(Q);
//     //         cout<<endl;
//     //     }
//     //     if(!s1.empty())
//     //     {
//     //         print_stack(s1);
//     //         cout<<endl;
//     //     }
//     //     if(!s3.empty())
//     //     {
//     //         print_stack(s2);
//     //         cout<<endl;
//     //     }
//     // }
//     while(!s1.empty())
//     {
//         Q.push(s1.top());
//         s1.pop();
//         if(!Q.empty())
//         {
//             print_queue(Q);
//             cout<<endl;
//         }
//         if(!s1.empty())
//         {
//             print_stack(s1);
//             cout<<endl;
//         }
//         if(!s2.empty())
//         {
//             print_stack(s2);
//             cout<<endl;
//         }
//     }
//     while(!s2.empty())
//     {
//         Q.push(s2.top());
//         s2.pop();
//         if(!Q.empty())
//         {
//             print_queue(Q);
//             cout<<endl;
//         }
//         if(!s1.empty())
//         {
//             print_stack(s1);
//             cout<<endl;
//         }
//         if(!s2.empty())
//         {
//             print_stack(s2);
//             cout<<endl;
//         }
//     }
// }
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
                cout<<"\n";
                print_stack(s1);
                cout<<"\n";
                print_stack(s2);
                cout<<"\n";
                continue;
            }
            else if(s2.empty()==1 || a[i]>s2.top())
            {
                s2.push(a[i]);
                print_queue(q);
                cout<<"\n";
                print_stack(s1);
                cout<<"\n";
                print_stack(s2);
                cout<<"\n";
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
                        cout<<"\n";
                        print_stack(s1);
                        cout<<"\n";
                        print_stack(s2);
                        cout<<"\n";
                        
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
                while (1)
                {
                    if (s2.empty() == 1 || a[i] > s2.top())
                    {
                        s2.push(a[i]);
                        print_queue(q);
                        cout<<"\n";
                        print_stack(s1);
                        cout<<"\n";
                        print_stack(s2);
                        cout<<"\n";
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
            cout<<"\n";
            print_stack(s1);
            cout<<"\n";
            print_stack(s3);
            cout<<"\n";
        }
        else
        {
            s1.pop();
            q.push(top_ele);
            print_queue(q);
            cout<<"\n";
            print_stack(s1);
            cout<<"\n";
            print_stack(s3);
            cout<<"\n";
        }
    }
    while(!s1.empty())
    {
        q.push(s1.top());
        s1.pop();
        if(q.empty())
        {
            continue;
        }
        if(s1.empty())
        {
            continue;
        }
        if(s3.empty())
        {
            continue;
        }
        print_queue(q);
        cout<<"\n";
        print_stack(s1);
        cout<<"\n";
        print_stack(s3);
        cout<<"\n";
        if(s3.empty())
        {
            continue;
        }
    }
    while(!s3.empty())
    {
        q.push(s3.top());
        s3.pop();
        if(q.empty())
        {
            continue;
        }
        if(s1.empty())
        {
            continue;
        }
        if(s3.empty())
        {
            continue;
        }
        print_queue(q);
        cout<<"\n";
        print_stack(s1);
        cout<<"\n";
        print_stack(s3);
        cout<<"\n";
    }
    return 0;
}