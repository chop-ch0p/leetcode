class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int result = 0;
        const char* chr = s.c_str();
        int len = s.length();

        for (int i = 0 ; i < len; ++i) {
            if (chr[i] == ' ') {
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
