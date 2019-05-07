class Solution {
public:
    int reverse(int x) {
        bool neg = !!(x < 0);
        long long llx = x;
        long long result = 0;

        if (neg)
            llx *= -1;

        while (llx) {
            result *= 10;
            result += llx % 10;
            llx /= 10;
        }
        
        if (result > 0x7FFFFFFF)
            return 0;
        
        if (neg)
            result *= -1;

        return result;
    }
};
