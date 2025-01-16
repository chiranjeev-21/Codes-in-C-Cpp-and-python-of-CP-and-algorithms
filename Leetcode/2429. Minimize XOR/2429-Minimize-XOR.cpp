class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int total_bits=__builtin_popcount(num2);
        int ans=0;
        for(int i=31;i>=0;i--) {
            if(num1&(1<<i) && total_bits>0) {
                ans|=(1<<i);
                total_bits--;
            }
        }
        for(int i=0;i<32;i++) {
            if(!(ans&(1<<i)) && total_bits>0) {
                ans|=(1<<i);
                total_bits--;
            }
        }
        return ans;
    }
};
