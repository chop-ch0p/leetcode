class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = 0;
        int len = nums.size();

        for (int i = 0; i < len; i++) {
            if (sum + nums[i] < nums[i]) sum = nums[i];
            else
                sum += nums[i];

            if (max < sum) max = sum;
        }

        return max;
    }
};
