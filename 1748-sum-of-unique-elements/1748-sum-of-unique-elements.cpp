class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num:nums){
            mpp[num]++;
        }
        int ans =0;
        for(auto it:mpp){
            if(it.second==1){
                ans+=it.first;
            }
        }
        return ans;
    }
};