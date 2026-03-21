class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(),nums1.end());;
        unordered_set<int> st2(nums2.begin(),nums2.end());
        vector<vector<int>> ans;
        vector<int> vec1;
        for(int n:st1){
            
            if(st2.find(n) == st2.end()){
                vec1.push_back(n);
            }
        }
        ans.push_back(vec1);
        vector<int> vec2;
        for(int n:st2){
            
            if(st1.find(n) == st1.end()){
                vec2.push_back(n);
            }
        }
        ans.push_back(vec2);
        return ans;
    }
};