class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int max_size = 0;
        int curr_size = 0;
        int j = 0;

        // iterate through

        // add seen values to a list

        // if we find a value we've seen already, we go through the back of the list until we get the value out;

        for(int i = 0; i < s.size(); i++){
            if(seen.find(s[i]) != seen.end()){
                for(j = j; j < i; j++){
                    seen.erase(s[j]);
                    if(s[j] == s[i]) break;
                }

                max_size = std::max(max_size, curr_size);
                j++;
                curr_size = i - j;
            }

            seen.insert(s[i]);
            curr_size++;
        }

        return std::max(max_size, curr_size);
    }
};
