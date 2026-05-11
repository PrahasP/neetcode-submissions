class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Have our starting value
        int result = nums[0];
        int current = 0; // running sum

        // For each index of the array, we need to check the sub-array sum
        for(int i = 0; i < nums.size(); i++){
            if(current < 0){
                current = 0;
            }
            current += nums[i];
            result = max(result, current); // result stores the max, so we check if the current sub-array is >= result
        }

        return result; // result should hold the best sub array
    }
};
