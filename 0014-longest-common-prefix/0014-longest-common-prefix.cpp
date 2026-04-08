class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int n =min(first.size(),last.size());
        int i =0;
        while(i<n){
            if(first[i]!=last[i]){
                return res;
            }
            else if(first[i]==last[i]){
                res+=first[i];
            }
            i++;
        }

        return res;

    }
};