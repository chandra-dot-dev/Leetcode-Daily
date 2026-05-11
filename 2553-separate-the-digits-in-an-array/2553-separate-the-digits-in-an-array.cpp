class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            int temp = nums[i];
            vector<int> digits;
            while(temp>0){
                int last = temp%10;
                digits.push_back(last);
                temp/=10; 
            }
            reverse(digits.begin(),digits.end());
            for(int d:digits){
                ans.push_back(d);
            }
        }
        return ans;
    }
};