class Solution {
public:
    int vowelConsonantScore(string s) {
        int cnt =0;
        set<char> st = {'a','e','i','o','u'};
        int vow = 0;
        int con = 0;
        for(int i =0;i<s.size();i++){
            if(isalpha(s[i])){
                if(st.find(s[i])!=st.end()){
                    vow++;
                }else{
                    con++;
                }
            }
        }
        if(con==0){
            return 0;
        }
        return floor(vow/con);
    }
};