class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        std::sort(nums.begin(), nums.end());
        vector<vector<int>> answer;

        for(int i = 0; i < nums.size() - 2; i++){
            left = i + 1;
            right = nums.size() - 1;

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            vector<int> curr_triple;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    vector<int> valid_triple = {nums[i] , nums[left] , nums[right]};
                    answer.push_back(valid_triple);
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left - 1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[right + 1]){
                        right--;
                    }
                } else if (sum > 0){
                    right --;
                } else {
                    left++;
                }
            }
        }

        return answer;
    }
};
