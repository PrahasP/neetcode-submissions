class Solution {
public:
    vector<int> memo;

    int rob(vector<int>& nums) {
        // basically mark them as unexplored by default
        memo.resize(nums.size(), -1);
        return dfs(nums, 0);
    }

    int dfs(vector<int>& nums, int i){
        if ( i >= nums.size()){
            return 0;
        }

        // if it is explored, don't do the dfs, since we have an answer
        if(memo[i] != -1){
            return memo[i];
        }
        
        // Solve the DFS for unexplored paths
        memo[i] = max(dfs(nums, i+1), nums[i] + dfs(nums, i+2));
        return memo[i];
    }
};
