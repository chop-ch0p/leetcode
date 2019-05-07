class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        
        if (len == 0) return 0;

        int prev = nums[len-1] + 1;        
        int j = 0;

        for (int i = 0; i < len; ++i) {
            if (prev != nums[i]) {
                nums[j] = nums[i];
                prev = nums[i];
                j++;
            }
        }

        return j;
    }
};
