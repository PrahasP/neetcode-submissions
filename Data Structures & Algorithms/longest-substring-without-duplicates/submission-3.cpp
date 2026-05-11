class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;

        int left = 0;
        int right = 0;
        int current_max = 0;
        int maximum = 1;
        unordered_set<char> curr_seen;
        
        for(right = 0; right < s.size(); right++){
            if((curr_seen.count(s[right]) == 0)){
                curr_seen.insert(s[right]);
                current_max++;
            } else {
                while(curr_seen.count(s[right]) != 0){
                    curr_seen.erase(s[left]);
                    left++;
                }
                curr_seen.insert(s[right]);
                current_max = right - left + 1;
            }
            
            maximum = std::max(current_max, maximum);
        }

        return maximum;
    }
};
