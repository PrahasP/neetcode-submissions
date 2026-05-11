class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = toupper(c);
        }
        
        int left = 0;
        int right = s.size() - 1;

        while (left < right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }

            if(!isalnum(s[right])){
                right--;
                continue;
            }

            if(s[left] == s[right]){
                left++;
                right--;
            } else {
                return false;
            }
        }

        return true;
    }
};
