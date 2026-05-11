class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};

        vector<vector<int>> result;
        std::sort(intervals.begin(), intervals.end());

        result.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++){
            // Overlap if current start is less than last back
            if(intervals[i][0] <= result.back()[1]){
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};
