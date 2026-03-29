class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> sM(26,0);
        vector<int> tM(26,0);
        
        for(char ch:s){
            sM[ch-'a']++;
        }
        for(char ch:t){
            tM[ch-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(sM[i]>tM[i]){
                ans+=abs(sM[i]-tM[i]);
            }
        }
        return ans;

    }
};