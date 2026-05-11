class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int area = min(l, r) * heights.size() - 1;

        while (l < r){
            int currentArea = min(heights[l], heights[r]) * (r - l);

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
