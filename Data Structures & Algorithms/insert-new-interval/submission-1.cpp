class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.empty()) return {newInterval};

        auto it = std::lower_bound(intervals.begin(), intervals.end(), newInterval);
        intervals.insert(it, newInterval);
        // Then do a standard merge intervals
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
