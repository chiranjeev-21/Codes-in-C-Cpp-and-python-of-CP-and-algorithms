class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n=words1.size(),m=words2.size();
        vector<vector<int>>hsh1(26,vector<int>(n,0));
        vector<vector<int>>hsh2(26,vector<int>(m,0));

        for(int i=0;i<n;i++){
            string temp=words1[i];
            for(int j=0;j<temp.length();j++){
                hsh1[temp[j]-'a'][i]++;
            }
        }
        // for(int i=0;i<26;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<hsh1[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n\n";
        for(int i=0;i<m;i++){
            string temp=words2[i];
            for(int j=0;j<temp.length();j++){
                hsh2[temp[j]-'a'][i]++;
            }
        }
        // for(int i=0;i<26;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<hsh2[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n\n";

        vector<int>freq(26,0);
        for(int i=0;i<26;i++){
            for(int j=0;j<m;j++){
                freq[i]=max(freq[i],hsh2[i][j]);
            }
        }
        vector<string>ans;
        unordered_set<string>st;
        // for(int i=0;i<m;i++){
        //     string subset=words2[i];
        //     for(int j=0;j<n;j++){
        //         string big_string=words1[j];
        //         bool flag=true;
        //         for(int k=0;k<26;k++){
        //             if(hsh2[k][i]==0){
        //                 continue;
        //             }
        //             if(hsh2[k][i]!=0 && hsh2[k][i]<=hsh1[k][j]){
        //                 continue;
        //             }
        //             else{
        //                 flag=false;
        //                 break;
        //             }
        //         }
        //         if(flag){
        //             st.insert(big_string);
        //         }
        //     }
        // }
        for(int i=0;i<n;i++){
            string big_string=words1[i];
            bool isUniversal=true;
            for(int j=0;j<26;j++){
                if(freq[j]>hsh1[j][i]){
                    isUniversal=false;
                    break;
                }
            }
            if(isUniversal){
                ans.push_back(big_string);
            }
        }
        return ans;
    }
};