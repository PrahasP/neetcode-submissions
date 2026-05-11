class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> numsTwo;

        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i]) != 0){
                continue;
            }
            seen.insert(nums[i]);
            numsTwo.push_back(nums[i]);
        }

        nums = numsTwo;

        return numsTwo.size();
    }
};