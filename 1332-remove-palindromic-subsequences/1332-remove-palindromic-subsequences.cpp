class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.empty()){
            return 0;
        }
        string res = s;
        reverse(s.begin(),s.end());
        if(s==res){
            return 1;
        }
        return 2;
    }
};