class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newNums;

        for(int i = 0; i < nums.size(); i++){
            newNums.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size(); i++){
            newNums.push_back(nums[i]);
        }

        return newNums;
    }
};