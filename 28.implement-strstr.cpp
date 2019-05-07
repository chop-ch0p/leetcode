class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();

        if (nLen == 0) return 0;

        const char* hstr = haystack.c_str();
        const char* nstr = needle.c_str();

        for (int i = 0; i < hLen - nLen + 1; ++i) {
            if (hstr[i] == nstr[0]) {
                if (memcmp(hstr + i, nstr, nLen) == 0) return i;
            }
            
        }
        return -1;
    }
};
