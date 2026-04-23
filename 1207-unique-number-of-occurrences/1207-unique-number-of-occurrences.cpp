class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int num:arr){
            mpp[num]++;
        }
        set<int> st;
        for(auto it:mpp){
            if(st.find(it.second)!=st.end()){
                return false;
            }
            st.insert(it.second);
        }
        
        return true;
    }
};