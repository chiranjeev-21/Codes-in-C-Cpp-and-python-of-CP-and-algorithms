class Solution {
public:
    void heapify(int i, int n, vector<int> &nums){
        int l = 2*i+1, r = 2*i+2, g = i;
        if(l < n && nums[g] < nums[l]) g = l;
        if(r < n && nums[g] < nums[r]) g = r;
        if(i != g){
            swap(nums[i], nums[g]);
            heapify(g,n,nums);
        }
    }
    void buildHeap(vector<int> &nums, int n){
        for(int i = n/2; i >= 0; --i){
            heapify(i,n,nums);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        buildHeap(nums,n);
        while(n--){
            swap(nums[n],nums[0]);
            heapify(0,n,nums);
        }
        return nums;
    }
};