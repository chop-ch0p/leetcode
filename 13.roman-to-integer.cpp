typedef pair<char, char> Roman;

class Solution {
private:
    map<Roman, int> table;

public:
    
    int romanToInt(string s) {
        int result = 0;
        int len = s.length();

        for (int i = 0; i < len; ++i) {
            char c = s[i];
            char n = s[i+1];
            
            switch(c) {
                case 'I':
                    if (n == 'V') { result += 4; ++i; }
                    else if ( n == 'X') { result += 9; ++i; }
                    else { result++; }
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    if (n == 'L') { result += 40; ++i; }
                    else if ( n == 'C') { result += 90; ++i; }
                    else { result += 10; }
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    if (n == 'D') { result += 400; ++i; }
                    else if ( n == 'M') { result += 900; ++i; }
                    else { result += 100; }
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
            }
        }

        return result;
    }
};
