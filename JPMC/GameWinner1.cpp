#include<bits/stdc++.h>
using namespace std;


string findWinner(string &s) {
        int wendy_moves = 0, bob_moves = 0;
        int n = s.length(),i=0;
        while(i < n){
            int j = i, c = 0;
            while(j < n && s.charAt(i) == s.charAt(j)){
                c++;
                j++;
            }
            if(c > 2){
                if(s.charAt(i) == 'w') wendy_moves += c-2;
                else bob_moves += c-2;
            }
            i = j;
        }
        if(bob_moves >= wendy_moves) return "bob";
        else return "wendy";
    }

int main(){
    cout<<findWinner("wwwbbbbwww");
}