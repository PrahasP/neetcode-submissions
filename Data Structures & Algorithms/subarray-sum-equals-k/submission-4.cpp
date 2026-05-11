class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int result = 0;
        unordered_map<int, int> counts;
        counts[0] = 1;

        for(int r = 0; r < nums.size(); r++){
            sum += nums[r]; // Build the sum
            result += counts[sum - k]; // Keep adding the complements
            counts[sum]++; // keep tracking running sums
        }

        return result;
    }
};