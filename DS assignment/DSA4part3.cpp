#include<iostream>
using namespace std;

int main()
{
    int i,j,a[100][100],b[100][1000],c[100][100];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Matrix after multiplication of the 2 matrices is :"<<"\n";
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;    
                for(k=0;k<3;k++)    
                {    
                    c[i][j]+=a[i][k]*b[k][j];    
                }    
        }    
    }     
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;

}