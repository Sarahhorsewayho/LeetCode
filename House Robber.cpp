class Solution {
public:
    int rob(vector<int>& nums) {
        int cnt = nums.size();
        const int N = cnt;
        int W[N+1];
        if (cnt == 0) return 0;
        else if (cnt == 1) return nums[0];
        else if (cnt == 2) return (nums[0] >= nums[1]) ? nums[0] : nums[1];
        else {
            W[0] = nums[0];
            W[1] = (nums[0] >= nums[1]) ? nums[0] : nums[1];
            for (int i = 2; i < cnt; i++) {
                W[i] = (W[i-2] + nums[i] >= W[i-1]) ? W[i-2] + nums[i] : W[i-1];
            }
        }
        return W[cnt-1];
    }
};