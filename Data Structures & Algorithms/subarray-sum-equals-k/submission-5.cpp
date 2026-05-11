class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int answer = 0;
        unordered_map<int, int> counts;
        counts[0] = 1;

        for(int r = 0; r < nums.size(); r++){
            sum += nums[r]; // running sum
            answer += counts[sum-k]; // if we don't have a count for it yet, we don't need it;
            counts[sum]++; // 
        }

        return answer;
    }
};