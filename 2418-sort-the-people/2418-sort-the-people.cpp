class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair<int,string>> values;
        for(int i =0;i<names.size();i++){
            values.push_back({heights[i],names[i]});
        }
        sort(values.begin(),values.end());
        for(int i = heights.size()-1;i>=0;i--){
            ans.push_back(values[i].second);
        }
        return ans;
    }
};