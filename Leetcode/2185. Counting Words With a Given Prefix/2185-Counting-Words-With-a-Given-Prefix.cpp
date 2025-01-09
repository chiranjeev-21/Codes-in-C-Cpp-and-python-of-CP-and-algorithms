class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0,n=words.size();
        for(auto word : words){
            if(word.length()<pref.length()){
                continue;
            }
            else if(word.length()==pref.length() && word==pref){
                cnt++;
            }
            else{
                int i=0;
                bool flag=true;
                while(i<pref.length()){
                    if(word[i]==pref[i]){
                        i++;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};