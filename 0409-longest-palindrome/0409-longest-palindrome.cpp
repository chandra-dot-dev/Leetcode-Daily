class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        bool hasOdd = false;
        int res=0;
        for(char c:s){
            freq[c]++;
        }
        for(auto it:freq){
            int cnt = it.second;
            if(cnt%2==0){
                res+=cnt;
            }else{
                res+=cnt-1;
                hasOdd = true;
            }
        }
        if(hasOdd){
            res+=1;
        }
        return res;
    }
};