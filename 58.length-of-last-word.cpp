class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int result = 0;

        for (auto i : s) {
            if (i == ' ') {
                if (count > 0)
                    result = count;
                count = 0;
            } else
                count++;
        }

        if (count > 0)
            return count;

        return result;
    }
};
