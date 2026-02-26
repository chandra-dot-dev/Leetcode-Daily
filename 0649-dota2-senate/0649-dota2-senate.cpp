class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad;
        queue<int> dir;
        int n = senate.size();
        for(int i =0;i<n;i++){
            if(senate[i]=='R'){
                rad.push(i);
            }else{
                dir.push(i);
            }
        }
        while(!rad.empty() && !dir.empty()){
            int rIndex=rad.front();
            int dIndex=dir.front();
            rad.pop();
            dir.pop();
            if(rIndex<dIndex){
                rad.push(rIndex+n);
            }else{
                dir.push(rIndex+n);
            }

        }
        return rad.empty()?"Dire":"Radiant";
    }
};