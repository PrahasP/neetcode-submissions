class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Difference
        // Index

        unordered_map<int, int> differences;

        for(int i = 0; i < nums.size(); i++){
            differences[nums[i]] = i;
        }

        // ATP we've stored every diff.
        // Now to find the one we need

        for(int j = 0; j < nums.size(); j++){
            if(differences.find(target - nums[j]) != differences.end()){
                if(differences[target - nums[j]] != j){
                    return {j, differences[target - nums[j]]};
                }
            }
        }

        return {};
    }
};
