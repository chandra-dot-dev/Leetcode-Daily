class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> forS;
        stack<char> forT;
        for(char c:s){
            if(c=='#' && !forS.empty()){
                forS.pop();
            }
            else if(c!='#'){
                forS.push(c);
            }
        }
        for(char c:t){
            if(c=='#' && !forT.empty()){
                forT.pop();
            }
            else if(c!='#'){
                forT.push(c);
            }
        }
        return forS == forT;
    }
};