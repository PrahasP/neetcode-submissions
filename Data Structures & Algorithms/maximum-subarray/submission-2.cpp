class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Have our starting value
        int result = nums[0];

        // For each index of the array, we need to check the sub-array sum
        for(int i = 0; i < nums.size(); i++){
            int current = 0; // running sum
            for(int j = i; j < nums.size(); j++){
                current += nums[j];
                result = max(result, current); // result stores the max, so we check if the current sub-array is >= result
            }
        }

        return result; // result should hold the best sub array
    }
};
