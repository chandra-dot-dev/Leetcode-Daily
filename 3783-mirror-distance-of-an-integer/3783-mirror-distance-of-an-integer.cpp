class Solution {
private:
    int reverse(int n){
        int num =0;
        while(n>0){
            int last =  n%10;
            num = num* 10+last;
            n/=10; 
        }
        return num;
    }
public:
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};