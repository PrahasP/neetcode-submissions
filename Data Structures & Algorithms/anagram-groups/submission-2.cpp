class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> holder;

        for(int i = 0; i < strs.size(); i++){
            string current = strs[i];
            std::sort(strs[i].begin(), strs[i].end());
            holder[strs[i]].push_back(current);
        }

        vector<vector<string>> result;

        for(auto element : holder) {
            result.push_back(element.second);
        }

        return result;
    }
};
