class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size();
        int cnt = 0;
        int num;
        if(ruleKey == "type"){
            num =0;
        }else if(ruleKey == "color"){
            num =1;
        }else{
            num=2;
        }
        for(int i =0;i<n;i++){
            if(items[i][num]==ruleValue){
                cnt++;
            }
        }
        return cnt;
    }
};