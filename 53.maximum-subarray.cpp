class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = 0;
        
        for (auto i : nums) {
            if (sum + i < i) sum = i;
            else
                sum += i;

            if (max < sum) max = sum;
        }

        return max;
    }
};
