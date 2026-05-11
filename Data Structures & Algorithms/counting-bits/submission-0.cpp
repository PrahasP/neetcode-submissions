class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n+1, 0);

        for(int i = 0; i <= n; i++){
            int num = i;
            while(num != 0){
                answer[i]++;
                num &= (num - 1);
            }
        }

        return answer;
    }
};
