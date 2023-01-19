#include<bits/stdc++.h>
using namespace std;

void replace_space(char *str){
    int index=str.find(" ");
    int count=0;
    while(index != (-1)){
        count++;
        str.find(" ",index+1);
    }
    for(int  i = 0 ; i < (str.length+(count*2)) ; i++){
        if(str[i]==" "){
            str[i] = str[i+3];
            
        }
    }
}

