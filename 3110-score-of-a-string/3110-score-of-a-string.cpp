class Solution {
public:
    int scoreOfString(string s) {
        int score =0;
        for(int i =0;i<s.size()-1;i++){
            int ch1 = s[i];
            int ch2 = s[i+1];
            score += abs(ch1-ch2);

        }
        return score;

    }
};