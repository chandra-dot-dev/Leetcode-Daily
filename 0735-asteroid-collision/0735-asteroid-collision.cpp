class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int as:asteroids){
            bool destroid=false;
            while(!st.empty() && as<0 && st.back()>0){
                if(st.back()<abs(as)){
                    st.pop_back();
                    continue;
                }else if(st.back()==abs(as)){
                    st.pop_back();
                    destroid = true;
                    break;
                }else{
                    destroid = true;
                    break;
                }
            }
            if(!destroid){
                st.push_back(as);
            }
        }
        return st;
    }
};