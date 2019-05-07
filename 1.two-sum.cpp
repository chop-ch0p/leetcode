class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> result;

        int size = nums.size();

        for (int i = 0; i < size; ++i) {
            int num = nums[i];
            auto hashEntry = hash.find(num);

             if (hashEntry != hash.end()) {
                result.push_back(hashEntry->second);
                result.push_back(i);
                return result;
            }

            hash.emplace(target-num, i);
        }

        return result;
    }
};
