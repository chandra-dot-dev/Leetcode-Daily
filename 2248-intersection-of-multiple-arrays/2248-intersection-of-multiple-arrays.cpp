class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(auto num:nums){
            for(int n:num){
                mpp[n]++;
            }
        }
        vector<int> ans;
        for(auto it:mpp){
            if(it.second >=n){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};