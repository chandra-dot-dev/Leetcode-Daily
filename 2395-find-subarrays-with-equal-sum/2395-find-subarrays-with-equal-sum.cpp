class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for(int i =1;i<n;i++){
           int sum = nums[i-1]+nums[i];
           if(st.find(sum)!=st.end()){
            return true;
           }else{
            st.insert(sum);
           }
        }
        return false;
        
    }
};