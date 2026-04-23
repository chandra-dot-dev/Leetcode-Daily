class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mpp;
        char ans = 'a';
        for(char c:s){
            mpp[c]++;
            if(mpp[c]==2){
                return c;
            }
        }
        return ans;
    }
};