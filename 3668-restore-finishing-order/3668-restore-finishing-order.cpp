class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> friendSet(friends.begin(),friends.end());
        for(int i:order){
            if(friendSet.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};