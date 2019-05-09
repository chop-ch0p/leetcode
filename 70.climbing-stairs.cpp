class Solution {
private:
    map<int, int> cache;
public:
    int climbStairs(int n) {
        if (n < 0) return 0;
        else if (n < 2) return 1;

        auto it = cache.find(n);

        if(it != cache.end()) return it->second;

        // n-1' floor events (+1 step) + n-2' floor events (+2 step)
        int ret = climbStairs(n-1) + climbStairs(n-2);
        cache.emplace(n, ret);

        return ret;
    }
};
