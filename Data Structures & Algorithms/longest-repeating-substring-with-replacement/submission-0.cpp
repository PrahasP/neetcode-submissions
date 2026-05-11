class Solution {
public:
    int characterReplacement(string s, int k) {
        int answer = 0;

        for(int i = 0; i < s.size(); i++){
            unordered_map<char, int> count;

            int maximum = 0;

            for(int j = i; j < s.size(); j++){
                count[s[j]]++;
                maximum = max(maximum, count[s[j]]);

                if((j-i+1) - maximum <= k){
                    answer = max(answer, j-i+1);
                }
            }
        }

        return answer;
    }
};