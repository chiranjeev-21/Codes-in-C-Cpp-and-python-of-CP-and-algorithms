class Solution {
public:

    bool isPrefixAndSuffix(string a, string b){
        if(b.size()<a.size()){
            return false;
        }
        int i=0;
        while(i<a.length()){
            if(a[i]==b[i]){
                i++;
            }
            else{
                return false;
            }
        }
        i=a.length()-1;
        int j=b.length()-1;
        while(i>=0){
            if(a[i]==b[j]){
                i--;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size(),cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isPrefixAndSuffix(words[i],words[j])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};