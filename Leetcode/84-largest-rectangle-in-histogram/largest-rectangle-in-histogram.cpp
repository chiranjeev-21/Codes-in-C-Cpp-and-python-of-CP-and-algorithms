class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), ans = 0;
        stack<int>s;
        heights.push_back(-1);
        // heights.insert(heights.begin(),-1);
        for (int i = 0; i <= n; i ++){
            while (s.size() && heights[i] < heights[s.top()]){
                int cur = s.top(); s.pop();
                if (s.empty())
                    ans = max(ans, heights[cur] * i);
                else
                    ans = max(ans, heights[cur] * (i - s.top() - 1));
            }
            s.push(i);
        }
        return ans;
    }
};