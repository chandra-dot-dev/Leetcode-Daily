class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDistance = nums.size();  
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                int distance = abs(i - start);
                if (distance < minDistance) {
                    minDistance = distance;
                }
            }
        }
        
        return minDistance;
    }
};