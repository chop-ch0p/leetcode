class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) return 0;
        int len = nums.size();
        if (nums[len - 1] < target) return len;

        int l = 0;
        int r = len;
        int m = (l + r) >> 1;

        while ( l < r ) {
            if (nums[m] < target)
                l = m;
            else
                r = m;

            if ( l == m) l++;

            m = (l + r) >> 1;
        }

        return m;
    }
};
