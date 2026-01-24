class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int left =0,right = nums.size()-1;
        sort(nums.begin(),nums.end());
        int maxi =0;
        while(left<=right){
            int sum = nums[left++]+nums[right--];
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};