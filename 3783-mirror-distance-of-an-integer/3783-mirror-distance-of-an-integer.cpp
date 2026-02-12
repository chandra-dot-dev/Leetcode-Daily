class Solution {
public:
    int reverse(int n){
        int rev  =0;
        while(n>0){
            int temp = n%10;
            rev = rev*10+temp;
            n/=10;
        }
        return rev;
    }
public:
    int mirrorDistance(int n) {
        int res = abs(n-reverse(n));
        return res;
    }
};
