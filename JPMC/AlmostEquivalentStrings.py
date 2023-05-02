ans = []
s = ['aabaab','aaaaabb']
t = ['bbabbc','abb']
for i in range(len(s)):
    if len(s[i])!=len(t[i]):
        ans.append("NO")
    elif len(s[i]) == len(t[i]):
        temp = list(set(t[i]))
        for j in range(len(temp)):
            if abs(s.count(temp[j]) - t.count(temp[j])) <= 3:
                # ans.append("YES")
                pass
            else:
                ans.append("NO")
        ans.append("YES")
             
        
print(ans)

vector<string> checkAlmostEquivalent(vector<string>s, vector<string>t) {
    
        # int a1[26]={0};
        # int a2[26]={0};
        # for(char x : word1){
        #     a1[x -'a']++;
        # }
        # for(char x: word2){
        #     a2[x - 'a']++;
        # }
        # for(int i=0;i<26;i++){
        #     if(abs(a1[i]-a2[i])>3)
        #     return false;
        # }
        # return true;
}

