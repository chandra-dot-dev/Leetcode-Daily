class Solution {
    void reversee(vector<int>& nums, int left, int right) {
        while (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++, right--;
        }
    }

public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> nums;
        int h = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < m; j++) {
                nums.push_back(grid[i][j]);
            }
        }
        int n = nums.size();
        k = k % n;

        reversee(nums, 0, n - 1);
        reversee(nums, 0, k - 1);
        reversee(nums, k, n - 1);
        vector<vector<int>> ans(h, vector<int>(m));
        int l = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = nums[l++];
            }
        }
        return ans;
    }
};