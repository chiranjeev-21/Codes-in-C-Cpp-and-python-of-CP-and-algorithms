class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1=0,xor2=0;
        for(auto i : nums1){
            xor1^=i;
        }
        for(auto i : nums2){
            xor2^=i;
        }
        int result = 0;
        if (nums1.size()%2!=0) {
            result ^= xor2;
        }
        if (nums2.size()%2!=0) {
            result ^= xor1;
        }
        return result;
        // 2 10 2 2 2 5 2 0
        // 1 10 1 2 1 5 1 0
        // 3 10 3 2 3 5 3 0
        return 0;
    }
};