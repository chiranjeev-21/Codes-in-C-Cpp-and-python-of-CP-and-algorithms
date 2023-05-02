#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i;
    int countw = 0,countb = 0;
    int countw1 = 0,countb1 = 0;
    i = 0;
    char f = s[0];
    while(i<s.length())
    {
        while(f == 'w')
        {
            countw++;
            if(s[i+1]!='w')
            {
                f = 'b';
            }
            i++;
          
        }
        while(f == 'b')
        {
            countb++;
            if(s[i+1]!='b')
            {
                f = 'w';
            }
            i++;
            
        }
        if(countw>2)
        {
            countw1 = countw1 + (countw-2);
            countw = 0;
        }
        if(countb>2)
        {
            countb1 = countb1 + (countb-2);
            countb = 0;
            
        }
        countw =0;
        countb=0;
    }
  
    if(countb1>=countw1)
    {
        cout<<"Bob";
    }
    else
    {
        cout<<"Wendy";
    }
    return 0;
}
