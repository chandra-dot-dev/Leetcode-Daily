class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i =0;
        while(i<nums.size()){
            if(nums[i]>0 && nums[i]<nums.size()){
                if(nums[i] != nums[nums[i]-1]){
                    swap(nums[i],nums[nums[i]-1]);
                }else{
                    i++;
                }
            }else{
                    i++;
                }
        }
        for(int k=0;k<nums.size();k++){
            if(nums[k]!=k+1){
                return k+1;
            }
        }
        return nums.size()+1;
    }
};