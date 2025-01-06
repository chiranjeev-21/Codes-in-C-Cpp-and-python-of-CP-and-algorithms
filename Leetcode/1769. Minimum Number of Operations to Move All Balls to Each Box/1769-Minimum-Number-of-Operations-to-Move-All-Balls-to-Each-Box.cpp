class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        //BRUTE FORCE
        // vector<int>vec,ops;
        // for(int i=0;i<n;i++){
        //     if(boxes[i]=='1'){
        //         vec.push_back(i);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     int ans=0;
        //     for(int j=0;j<vec.size();j++){
        //         ans+=abs((i-vec[j]));
        //     }
        //     ops.push_back(ans);
        // }
        // APPROACH
        // here left keeps count of number of ones to the left of this index and similiarly
        // right keeps countof number of ones to the right of a particular index.

        // the left_sum, right_sum arrays contain how many operations to move all the ones
        // to the left of this index and right of this index.
        //O(N) OPTIMISED
        vector<int>left(n,0),right(n,0),left_sum(n,0),right_sum(n,0),ans;
        // left[0]=(boxes[0]=='1'?1:0);
        for(int i=1;i<n;i++){
            if(boxes[i-1]=='1'){
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=left[i-1];
            }
            left_sum[i]=left_sum[i-1]+1*(left[i]);
        }
        // right[n-1]=(boxes[n-1]=='1'?1:0);
        for(int i=n-2;i>=0;i--){
            if(boxes[i+1]=='1'){
                right[i]=right[i+1]+1;
            }
            else{
                right[i]=right[i+1];
            }
            right_sum[i]=right_sum[i+1]+1*(right[i]);
        }

        for(int i=0;i<n;i++){
            ans.push_back(left_sum[i]+right_sum[i]);
        }
        return ans;
    }
};