class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for(int i = 0; i < intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            int prevEnd = merged.back()[1];

            if(start <= prevEnd){
                merged.back()[1] = max(prevEnd, end);
            } else {
                merged.push_back({start, end});
            }
        }

        return merged;
    }
};
