class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans =0;
        unordered_map<string,int> mpp;
        for(string w:words){
            string r = w;
            reverse(r.begin(),r.end());
            if(mpp[r]>0) ans++,mpp[r]--;
            else mpp[w]++;
        }
        return ans;
    }
};