class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        int total = 9;
        int uniques = 9;
        int avail = 9;
        for(int i =1;i<n;i++){
            uniques*= avail;
            total+=uniques;
            


            avail--;
            
           
        }
        return total+1;
    }
};