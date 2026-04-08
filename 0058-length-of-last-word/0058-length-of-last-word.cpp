class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int n =1;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]==' '){
                n++;
            }else{
                break;
            }

        }
        for(int i =s.size()-n;i>=0;i--){
            if(s[i]!=' '){
                cnt++;
            }else{
                break;
            }
        }
        return cnt;
    }
};