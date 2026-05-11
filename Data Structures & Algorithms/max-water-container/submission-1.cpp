class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;

        int area = min(heights[l], heights[r]) * (r - l);

        while(l < r) {
            int currentArea = min(heights[r], heights[l]) * (r - l);

            area = max(area, currentArea);

            if(heights[l] < heights[r]){
                l++;
            } else {
                r--;
            }
        }

        return area;
    }
};
