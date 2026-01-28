class Solution {
public:
    int maxDepth(string s) {
        // int depth =0;
        // int maxDepth = 0;
        // for(char c:s){
        //     if(c=='('){
        //         depth++;
        //         maxDepth = max(depth,maxDepth);
        //     }else if(c==')'){
        //         depth--;
        //     }
        // }
        // return maxDepth;
        stack<char> st;
        int depth =0;
        for(char c:s){
            if(c=='('){
                
                st.push(c);
            }else if(c==')'){
                int x = st.size();
                depth = max(depth,x);
                st.pop();
            }
        }
        return depth;
    }
};