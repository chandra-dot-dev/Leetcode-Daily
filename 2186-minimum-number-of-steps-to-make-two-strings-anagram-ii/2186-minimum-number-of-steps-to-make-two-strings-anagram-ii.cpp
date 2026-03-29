class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> sF(26,0);
        vector<int> tF(26,0);
        for(char ch:s){
            sF[ch-'a']++;
        }
        for(char ch:t){
            tF[ch-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(sF[i] != tF[i]){
                ans+= abs(sF[i]-tF[i]);
            }
        }
        return ans;

    }
};