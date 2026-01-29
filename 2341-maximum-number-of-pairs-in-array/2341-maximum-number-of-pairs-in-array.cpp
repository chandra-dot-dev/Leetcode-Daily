class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int pairs= 0;
        int leftOver = 0;
        for(auto it:freq){
            pairs += it.second/2;
            leftOver+=it.second%2;
        }
        return {pairs,leftOver};

    }
};