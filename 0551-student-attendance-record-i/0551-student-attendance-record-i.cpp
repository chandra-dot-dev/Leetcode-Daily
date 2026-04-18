class Solution {
public:
    bool checkRecord(string s) {
        int ab = 0;
        int lt = 0;
        for(auto it:s){
            
            if(it == 'A'){
                ab++;
            }
            if(it=='L'){
                lt++;
            }else{
                lt=0;
            }
            if(ab>=2 || lt>=3){
                return false;
            }
        }
        return true;
    }
};