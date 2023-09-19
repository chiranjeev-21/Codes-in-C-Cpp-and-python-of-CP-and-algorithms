class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(s1.length()>s2.length()){
            return false;
        }
        int low=0,high=n-1;
        vector<int>vec1(26,0),vec2(26,0);
        for(int i=0;i<n;i++){
            vec1[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            vec2[s2[i]-'a']++;
        }
        while(high<m-1){
            if(vec1==vec2){
                return true;
            }
            else{
                vec2[s2[low]-'a']--;
                vec2[s2[high+1]-'a']++;
                low++;
                high++;
            }
        }
        if(vec1==vec2){
            return true;
        }
        return false;
    }
};