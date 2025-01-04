class Solution {
public:

    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n =words.size();
        vector<int>vec(n,0);
        int i=0;
        for(auto word : words){
            if(isVowel(word[0])&&isVowel(word[word.size()-1])){
                vec[i]=1;
            }
            i++;
        }
        for(int i=1;i<n;i++){
            int temp=vec[i];
            vec[i]=vec[i-1]+temp;
        }
        // for(auto i :vec){
        //     cout<<i<<" ";
        // }
        vector<int>ans;
        for(auto q : queries){
            int l=q[0];
            int r=q[1];
            if(l==0){
                ans.push_back(vec[r]);
            }
            else{
                ans.push_back(vec[r]-vec[l-1]);
            }
        }
        return ans;
    }
};