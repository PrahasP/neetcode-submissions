class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int r = 0;
        int l = 0;
        int max = 0;

        while (r < s.size()){
            if(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
            } else {
                max = std::max(max, r-l + 1);
                seen.insert(s[r]);
                r++;
            }
        }

        return max;
    }
};
