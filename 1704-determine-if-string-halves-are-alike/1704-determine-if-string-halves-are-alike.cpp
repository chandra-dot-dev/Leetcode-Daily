class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        n/=2;
        vector<char> vol{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};  
        int cnt1 =0;
        int cnt2 = 0;
        for(int i =0;i<n;i++){
            if(find(vol.begin(),vol.end(),s[i])!=vol.end()){
                cnt1++;
            }
        }
        for(int i =n;i<s.size();i++){
            if(find(vol.begin(),vol.end(),s[i])!=vol.end()){
                cnt2++;
            }
        }
        return cnt1==cnt2;
    }
};