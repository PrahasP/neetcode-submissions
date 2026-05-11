class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currentSum = 0;
        int sums = 0;
        unordered_map<int, int> sumMap;
        sumMap[0] = 1;

        for(int num : nums) {
            currentSum += num;
            sums += sumMap[currentSum - k];
            sumMap[currentSum]++;
        }

        return sums;
    }
};