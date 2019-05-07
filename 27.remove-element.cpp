class Solution {
private:
    int findNextTarget(vector<int>& nums, int start, int target) {
        int end = nums.size();

        for (int i = start; i < end; ++i) {
            if (nums[i] == target)
                return i;
        }

        return -1;
    }
public:
    int removeElement(vector<int>& nums, int val) {
        int target = findNextTarget(nums, 0, val);
        if (target == -1) return nums.size();
        int len = nums.size();

        for(int i = target+1; i < len; ++i) {
            if (nums[i] != val) {
                swap(nums[i], nums[target]);
                target = findNextTarget(nums, target + 1, val);
            }
        }
        return target;
    }
};
