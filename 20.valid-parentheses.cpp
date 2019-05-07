class Solution {
private:
    bool check(stack<char>& st, char c) {
        if (st.empty()) return false;
        switch(c) {
            case ')':
                if (st.top() == '(') {
                    st.pop();
                    return true;
                }
                return false;
            case ']':
                if (st.top() == '[') {
                    st.pop();
                    return true;
                }
                return false;
            case '}':
                if (st.top() == '{') {
                    st.pop();
                    return true;
                }
                return false;
        }

        return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto c : s) {
            switch(c) {
                case '(':
                case '[':
                case '{':
                    st.push(c);
                    break;
                case ')':
                case ']':
                case '}':
                    if (check(st, c) == false)                   
                        return false;
                    break;


            }
        }
        return st.empty();
    }
};
