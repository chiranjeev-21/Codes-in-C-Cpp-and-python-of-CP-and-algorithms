class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        int n=v.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.size()==0 || (st.top()<0 && v[i]<0) || (st.top()>0 && v[i]>0) || (st.top()<0 && v[i]>0)){
                st.push(v[i]);
            }
            else{
                while(st.size() > 0 && st.top()>0 && st.top() < abs(v[i]))
                    st.pop(); 
                if(st.size()==0 || st.top()<0){
                    st.push(v[i]);
                }else if(st.top() == abs(v[i])){
                    st.pop();
                }
            }
        }
        vector<int> ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};