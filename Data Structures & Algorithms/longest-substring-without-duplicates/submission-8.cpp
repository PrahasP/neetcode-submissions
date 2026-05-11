class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;

        int res = 1;
        for(int i = 0; i < s.size(); i++){
            unordered_set<char> seen;
            int j = i;
            for(j = i; j < s.size(); j++){
                if(seen.find(s[j]) != seen.end()){
                    res = max(res, j - i);
                    break;                 
                }
                seen.insert(s[j]);
            }

            res = max(res, j - i);
        }

        return res;
    }
};
