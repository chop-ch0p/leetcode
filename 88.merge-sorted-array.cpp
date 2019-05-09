class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int target = m + n - 1;
        int i1 = m - 1;
        int i2 = n - 1;

        while (i1 > -1 && i2 > -1) {
            if (nums1[i1] > nums2[i2]) {
                nums1[target] = nums1[i1];
                i1--;
            } else {
                nums1[target] = nums2[i2];
                i2--;
            }
            target--;
        }

        while(i1 > -1) {
            nums1[target] = nums1[i1];
            i1--; target--;
        }

        while(i2 > -1) {
            nums1[target] = nums2[i2];
            i2--; target--;
        }
    }
};
