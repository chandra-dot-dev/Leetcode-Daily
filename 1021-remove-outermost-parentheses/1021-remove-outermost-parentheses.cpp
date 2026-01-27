class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int res=0;
        for(char c :s){
            if(c == ')') res--;
            if(res){
                ans+=c;
            }
            if(c=='(') res++;
        }
        return ans;
    }
};