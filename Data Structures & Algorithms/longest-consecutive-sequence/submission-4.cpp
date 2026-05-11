class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        std::sort(nums.begin(), nums.end());

        int max_conseq = 1;
        int conseq = 1;

        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                continue;
            }

            if (nums[i] == nums[i-1] + 1){
                conseq++;
            } else if (nums[i] == nums[i-1]){
                continue;
            } else {
                max_conseq = std::max(conseq, max_conseq);
                conseq = 1;
            }
        }
        
        max_conseq = std::max(conseq, max_conseq);

        return max_conseq;
    }
};
