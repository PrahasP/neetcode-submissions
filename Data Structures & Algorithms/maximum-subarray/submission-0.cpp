class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        for(int i = 0; i < nums.size(); i++){
            int current = 0;
            for(int j = i; j < nums.size(); j++){
                current += nums[j];
                result = max(result, current);
            }
        }

        return result;
    }
};
