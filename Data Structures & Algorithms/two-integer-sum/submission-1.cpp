class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complement;

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if(complement.find(diff) != complement.end()){
                return {complement[diff], i};
            }

            complement.insert({nums[i], i});
        }

        return {};
    }
};
