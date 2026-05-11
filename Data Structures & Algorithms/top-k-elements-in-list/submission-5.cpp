class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        vector<vector<int>> buckets(nums.size() + 1);

        // get the counts
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]]++;
        }

        vector<int> result;

        // order them from least to greatest
        for(auto &[num, cnt] : seen){
            buckets[cnt].push_back(num);
        }

        // build up the result with the Top K elements
        for(int i = nums.size(); i >= 1; i--){
            for(int j = 0; j < buckets[i].size(); j++){
                result.push_back(buckets[i][j]);
                if(result.size() == k) return result;
            }
        }

        return result;
    }
};
