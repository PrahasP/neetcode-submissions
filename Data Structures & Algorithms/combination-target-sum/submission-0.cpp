class Solution {
public:
    vector<vector<int>> answer;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // so we can stop if it's too big
        dfs({}, 0, 0, nums, target); // backtrack
        return answer;
    }

    void dfs(vector<int> current, int i, int total, vector<int>& nums, int target) {
        if (total == target) {
            answer.push_back(current);
            return;
        }

        for(int j = i; j < nums.size(); j++) {
            if (total + nums[j] > target){
                return; // if we're too big, we terminate
            }

            // Choose #, explore deeper, then undo so that it doesn't grow forever
            current.push_back(nums[j]);
            dfs(current, j, total + nums[j], nums, target);
            current.pop_back();
        }
    }
};
