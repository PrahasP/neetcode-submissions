class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> t_holder;

        for(char c : t){
            t_holder[c]++;
        }

        pair<int, int> answer = {-1, -1};
        int answer_length = INT_MAX;

        for(int i = 0; i < s.size(); i++){
            unordered_map<char, int> s_holder;

            for(int j = i; j < s.size(); j++){
                s_holder[s[j]]++;

                bool flag = true;
                for (auto c : t_holder){
                    if(s_holder[c.first] < c.second){
                        flag = false;
                        break;
                    }
                }

                if (flag && (j - i + 1) < answer_length){
                    answer_length = j - i + 1;
                    answer = {i , j};
                }
            }
        }

        if(answer_length == INT_MAX) return "";

        return s.substr(answer.first, answer_length); 
    }
};
