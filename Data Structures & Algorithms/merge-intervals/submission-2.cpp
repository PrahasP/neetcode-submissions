class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // your code goes here
        if(intervals.empty()) return {};

        std::sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);

        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][0] <= mergedIntervals.back()[1]){
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            } else {
                mergedIntervals.push_back({intervals[i][0], intervals[i][1]});
            }
        }

        return mergedIntervals;
    }
};
