class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> differences;

        for(int i = 0; i < nums.size(); i++){
            if(differences.find(target - nums[i]) != differences.end()){
                return {differences[target - nums[i]], i};
            }
            differences[nums[i]] = i;
        }

        return {};
    }
};
