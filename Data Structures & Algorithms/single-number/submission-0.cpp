class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]]++;

            if(seen[nums[i]] == 2){
                seen.erase(nums[i]);
            }
        }

        for(const auto& pair : seen){
            return pair.first;
        }
    }
};
