class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;

        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i]) != 0){
                nums.erase(nums.begin() + i);
                i--;
                continue;
            }

            seen.insert(nums[i]);
        }

        return nums.size();
    }
};