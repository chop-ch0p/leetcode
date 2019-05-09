class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;

        for(auto it = digits.rbegin(); it != digits.rend(); it++) {
            (*it) += c;

            c = 0;

            if (*it > 9) {
                c = 1;
                (*it) %= 10;
            } else 
                break;
        }

        if (c)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};
