class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1)  return strs[0];
        if (strs[0][0] != strs[1][0]) return "";

        string o = strs[0];

        int len = strs.size();
        int result = o.length();

        for (int i = 1; i < len; ++i) {
            string d = strs[i];
            int l = 0;
            int r = min(result, (int)d.length());
            int m = (l + r) >> 1;

            while (l < r) {
                if (o[m] != d[m]) {
                    r = m;
                } else {
                    l = m;
                }

                if (l == m) l++;

                m = (l + r) >> 1;
            }   
            result = m;
        }
        return o.substr(0, result);
    }
};
