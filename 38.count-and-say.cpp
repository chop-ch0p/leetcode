class Solution {
public:
    string countAndSay(int n) {
        
        if (n == 1) return "1";
        n--;
        string cur("1");


        for (int i = 0; i < n; ++i) {
            const char* c = cur.c_str();
            stringstream next;
            
            int len = cur.length();

            char prev = cur[0];
            int count = 0;
            for ( int j = 0; j < len; ++j) {
                while(j < len && prev == c[j]) {
                    count++;
                    j++;
                }
                next << count << prev;
                prev = c[j];
                count = 0;
                --j;
            }
            next >> cur;
        }

        return cur;
    }
};
