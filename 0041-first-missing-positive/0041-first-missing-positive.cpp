class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st(nums.begin(),nums.end());
        for(int i =1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return nums[nums.size()-1]+1;
    }
};