class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int left_one = -1;
        int n = seats.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(seats[i] == 1){
                if(left_one == -1){
                    cnt = max(cnt,i);
                }
                else{
                    cnt = max(cnt,(i-left_one)/2);
                }
                left_one = i;
            }
        }
        cnt = max(cnt,(n-1)-left_one);
        return cnt;
    }
};