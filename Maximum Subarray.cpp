class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = nums.size();
        int sum = 0;
        int res = nums[0];
        for (int i = 0; i < count; i++) {
            sum += nums[i];
            sum = (sum >= nums[i]) ? sum :nums[i];
            res = (res >= sum) ? res : sum;
        }
        return res;
    }
};