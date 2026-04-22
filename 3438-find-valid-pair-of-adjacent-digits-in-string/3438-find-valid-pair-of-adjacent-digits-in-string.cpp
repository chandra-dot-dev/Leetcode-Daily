class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int> mpp;
        for(char c:s){
            mpp[c]++;
        }
        string ans="";
        for(int i =1;i<s.size();i++){
            if(mpp[s[i-1]] == s[i-1]-'0' && mpp[s[i]] == s[i]-'0' && s[i-1]!=s[i]){
                ans+=s[i-1];
                ans+=s[i];
                return ans;
            }
        }
        return "";
    }
};