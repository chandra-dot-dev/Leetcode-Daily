class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // set<int> st;
        // vector<int> ans;
        // for(int num:nums){
        //     mpp[num]++;
        // }
        // for(int num:nums){
        //     if(mpp[num] == 2){
        //         st.insert(num);
        //     }
        // }
        // for(int num:st){
        //     ans.push_back(num);
        // }
        // return ans;
        set<int> st;
        vector<int> ans;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                ans.push_back(num);
            }else{
                st.insert(num);
            }
        }
        return ans;
    }
};