class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        int c = 0;

        string::reverse_iterator it1 = a.rbegin();
        string::reverse_iterator it2 = b.rbegin();


        while(it1 != a.rend() || it2 != b.rend()) {
            int ad = (it1 != a.rend()) ? ((*it1) - '0') : 0;
            int bd = (it2 != b.rend()) ? ((*it2) - '0') : 0;

            int d = ad + bd + c;

            ret.insert(0, 1, (d & 1) + '0');
            c = (d & 2) ? 1 : 0;

            if (it1 != a.rend()) it1++;
            if (it2 != b.rend()) it2++;
        }

        if (c == 1)
            ret.insert(0, 1, '1');

        return ret;
    }
};
