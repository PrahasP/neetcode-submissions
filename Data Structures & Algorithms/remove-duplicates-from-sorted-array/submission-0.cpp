class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // start at second index
        int l = 1; // basically goes through and acts as our unique element tracker.

        // iterate through
        for(int r = 1; r < nums.size(); r++){
            // if the number is unique
            if(nums[r] != nums[r-1]){
                // we overwrite the earliest non-unique value with it
                nums[l++] = nums[r];
            }
        }

        // at this point, l is all of the unique elements, since that's the only way we increment it
        return l;
    }
};