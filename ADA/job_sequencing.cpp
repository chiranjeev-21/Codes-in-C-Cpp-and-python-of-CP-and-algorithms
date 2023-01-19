#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vec;
    vector<int>final_vector;
    int n;
    cout<<"Enter the number of jobs"<<"\n";
    cin>>n;
    cout<<"Enter the job deadlines"<<"\n";
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the job profits"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for (int i=0; i<n; i++)
    {
    vec.push_back(make_pair(a[i],b[i]));
    }

    // for (int i=0; i<n; i++)
    // {
    //     cout << vec[i].first << " "<< vec[i].second << endl;
    // }
    sort(vec.begin(), vec.end());
    for (int i=0; i<n; i++)
    {
        cout << vec[i].first << " "<< vec[i].second << endl;
    }

    int max=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i].first > max)
        {
            max = vec[i].first;
        }
    }
       
    cout<<max<<"\n";

    for(int i=0;i<n;i++)
    {
        if(vec[i].first == max)
        {
            final_vector.push_back(vec[i].first);
        } 
    }
    int maxx = max -1;
    int count =0,dup;
    for(int i=maxx;i>0;i--)
    {
        if(vec[i].first <= maxx && count==0)
        {
            final_vector.push_back(vec[i].first);
        }
        if(vec[i].first <= maxx && count==1)
        {
            dup = final_vector.back();
            if(dup<vec[i].first)
            {
                final_vector.pop_back();
                final_vector.push_back(vec[i].first);
            }
        }  
        maxx--;
        count++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<final_vector[i]<<"\n";
    }


    return 0;
}
