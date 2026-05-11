class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> seen;
        int size = 0;
        int l = 0;

        for(int r = 0; r < s.size(); r++){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            size = max(size, r - l + 1);
        }

        return size;
    }
};
