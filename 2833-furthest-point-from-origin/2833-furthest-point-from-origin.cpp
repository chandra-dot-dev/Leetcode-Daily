class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int> mpp;
        int ans = 0;
        for(char c:moves){
            mpp[c]++;
        }
        return abs(mpp['L']-mpp['R'])+mpp['_'];
    }
};