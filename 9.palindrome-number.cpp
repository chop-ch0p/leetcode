class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)  return 0;

        long long nx = 0;
        long long  tx = x;

        while(tx) {
            nx *= 10;
            nx += tx % 10;
            tx /=10;
        }

        return (nx == x);
    }
};
