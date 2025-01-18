class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        //                                  ----------
        //               -----
        //   ---------
        // ----- 
        // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(result[j][1]>=intervals[i][0]) result[j][1]=max(result[j][1],intervals[i][1]);
            else
            {
                j++;
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};