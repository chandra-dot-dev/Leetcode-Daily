class Solution {
private:
    int nextNum(int n){
        int sum =0;
        while(n>0){
            int last = n%10;
            sum += last*last;
            n/=10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        set<int> st;
        while(n!=1){
            if(st.count(n)){
                return false;
            }
            st.insert(n);
            n = nextNum(n);
            
        }

        return true;
    }
};