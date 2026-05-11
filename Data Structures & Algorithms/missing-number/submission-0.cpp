class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // total numbers
        int answer = nums.size();

        // keep going through the numbers and addthe place and i
        // Basically the same as checking if i is the same as the place
        for(int i = 0; i < nums.size(); i++){
            answer += i - nums[i];
        }

        // this is the leftover
        return answer;
    }
};
