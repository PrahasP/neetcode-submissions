class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen_counts;
        vector<vector<int>> buckets(nums.size() + 1);

        for(int i = 0; i < nums.size(); i++){
            seen_counts[nums[i]]++;
        }

        vector<int> answer;

        for(auto &[num, cnt] : seen_counts){
            buckets[cnt].push_back(num);
        }

        for(int i = nums.size(); i >= 1; i--){
            for(int j = 0; j < buckets[i].size(); j++){
                answer.push_back(buckets[i][j]);

                if(answer.size() == k) return answer;
            }
        }

        return answer;
    }
};
