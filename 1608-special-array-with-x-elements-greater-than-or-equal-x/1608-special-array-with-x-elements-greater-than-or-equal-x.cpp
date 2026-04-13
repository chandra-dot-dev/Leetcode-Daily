class Solution {
private:
    int check(vector<int>& nums,int idx){
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>=idx){
                cnt++;
            }
        }
        return cnt;
    }
public:
    int specialArray(vector<int>& nums) {
        int cnt =0;
        for(int i =0;i<=nums.size();i++){
            if(check(nums,i)==i){
                return i;
            }
        }
        return  -1;

    }
};