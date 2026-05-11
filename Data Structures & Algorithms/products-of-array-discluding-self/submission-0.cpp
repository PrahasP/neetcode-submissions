class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sizer = nums.size();
        vector<int> answer(sizer, 1);

        // go through set each element to the running product;
        for(int i = 1; i < sizer; i++){
            answer[i] = answer[i-1] * nums[i-1];
        }

        // then we find the postfix and multiply it

        // 1, 2, 4, 6 
        
        // prefix: 1, 1, 2, 8

        // postfix [reverse]: 1, 6, 24, 48
        // = 48, 24, 6, 1

        // 48, 24, 6, 1
        // 1,   1, 2, 8

        // = 48. 24, 12, 8

        int post = 1;

        for(int i = sizer - 1; i >= 0; i--){
            answer[i] *= post;
            post *= nums[i];
        }

        return answer;
    }
};
