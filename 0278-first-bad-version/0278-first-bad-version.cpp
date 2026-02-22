// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int left = 0;
        long long int right = n;
        long long int minBadVersion;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(isBadVersion(mid)==1){
                minBadVersion = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return minBadVersion;
    }
};