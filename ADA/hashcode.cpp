#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    vector<string> vec,vect;
    vector<int> vec1,vec2;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        string s;
        int x;
        cin>>s;
        vec.push_back(s);
        cin>>x;
        for(int j=0;j<a;j++)
        {
            string s1;
            int e;
            cin>>s1;
            vect.push_back(s1);
            cin>>e;
            vec2.push_back(e);
        }
    }
    // for(int i=0;i<a;i++)
    // {
    //     cout<<vec[i];
    // }
return 0;
}