class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int size = 0;
        int l = 0;

        for(int r = 0; r < s.size(); r++) {
            if(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
                r--;
                continue;
            }
            
            seen.insert(s[r]);
            size = std::max(size, (int)seen.size());
        }

        return size;
    }
};
