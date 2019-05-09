class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) return 1;

        int l = 0;
        int r = x;
        int m = (l + r) >> 1;

        long long p;

        while (l < r) {
            p = (long long)m * m;

            if (p == x) return m;
            if (p < x) l = m;
            else r = m;

            m = (l + r) >> 1;

            if (l == m) return m;
        }

        return 0;
    }
};
