class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int res =INT_MIN;
        int left =0;
        int right = colors.size()-1;
        for(int i =0;i<colors.size();i++){
            for(int j = i+1;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    res = max(abs(i-j),res);
                }
            }
        }
        return res;
    }
};