class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int maxVol = -1;
        while(left<right){
            int width = right-left;
            int currHei = min(height[left],height[right]);
            maxVol = max(width*currHei,maxVol);
            if(height[right]>height[left]){
                left++;
            }else{
                right--;
            }
        }
        return maxVol;
    }
};