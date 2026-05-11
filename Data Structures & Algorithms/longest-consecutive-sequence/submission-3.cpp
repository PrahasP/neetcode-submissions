class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        vector<int> numsTwo = nums;
        std::sort(numsTwo.begin(), numsTwo.end());

        int max_conseq = 1;
        int conseq = 1;

        for(int i = 0; i < numsTwo.size(); i++){
            if(i == 0){
                continue;
            }

            if (numsTwo[i] == numsTwo[i-1] + 1){
                conseq++;
            } else if (numsTwo[i] == numsTwo[i-1]){
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
