class Solution {
private:
    int atMost(vector<int>& nums,int bound){
        int count  =0;
        int curr = 0;
        for(int x:nums){
            if(x<=bound){
                curr++;
                count+=curr;
            }else{
                curr =0;
            }
        }
        return count;
    }
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return atMost(nums,right)- atMost(nums,left-1);
    }
};