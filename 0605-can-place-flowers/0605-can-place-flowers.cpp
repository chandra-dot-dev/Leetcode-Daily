class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int left,right;
        int m=flowerbed.size();
        for(int i =0;i<m;i++){
            if(n==0){
                return true;
            }
            int curr= flowerbed[i];
            if(i==0){
                left =0;
            }else{
                left =flowerbed[i-1];
            }
            if(i==m-1){
                right =0;
            }else{
                right = flowerbed[i+1];
            }
           
            
            if(curr ==0 && left==0 && right==0){
                n--;
                flowerbed[i]=1;
            }
            
        }
        return n==0;
    }
};