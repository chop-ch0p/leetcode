class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();

        if (nLen == 0) return 0;

        for (int i = 0; i < hLen; ++i) {
            if (haystack[i] != needle[0]) {
                continue;
            }
            ++i;
            int next = -1;
            int ni = 1;
            for (; ni < nLen, i < hLen; ++ni, ++i) {
                if (next == -1 && haystack[i] == needle[0])
                    next = i;
                
                if (haystack[i] != needle[ni]) break;
            }

            if (ni == nLen) return i - nLen;

            if (next > 0)
                i = next - 1;
            else
                i += ni - 1;
        }
        return -1;
    }
};
