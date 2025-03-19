class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, set<int>> mp;
        for (auto& seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }
        int maxGroups = (n-mp.size())*2;
        for (auto& row : mp) {
            set<int>& reserved = row.second;
            bool left = !reserved.count(2) && !reserved.count(3) && !reserved.count(4) && !reserved.count(5);
            bool middle = !reserved.count(4) && !reserved.count(5) && !reserved.count(6) && !reserved.count(7);
            bool right = !reserved.count(6) && !reserved.count(7) && !reserved.count(8) && !reserved.count(9);
            if (left) maxGroups++;
            if (right) maxGroups++;
            if (!left && !right && middle) maxGroups++; // Consider middle only if left/right are not possible
        }

        return maxGroups;
    }
};