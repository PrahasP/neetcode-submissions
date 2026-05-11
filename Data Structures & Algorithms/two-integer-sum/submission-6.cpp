class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> differences;

        for(int i = 0; i < nums.size(); i++){
            differences[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(differences.find(target - nums[i]) != differences.end() && differences[target - nums[i]] != i){
                return {i, differences[target - nums[i]]};
            }
        }

        return {};
    }
};
