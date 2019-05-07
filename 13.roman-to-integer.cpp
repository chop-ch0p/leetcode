typedef pair<char, char> Roman;

class Solution {
private:
    map<Roman, int> table;

public:
    Solution() {
        table.emplace(Roman('I', 'V'), 4);
        table.emplace(Roman('I', 'X'), 9);
        table.emplace(Roman('X', 'L'), 40);
        table.emplace(Roman('X', 'C'), 90);
        table.emplace(Roman('C', 'D'), 400);
        table.emplace(Roman('C', 'M'), 900);
        table.emplace(Roman('I', 'A'), 1);
        table.emplace(Roman('V', 'A'), 5);
        table.emplace(Roman('X', 'A'), 10);
        table.emplace(Roman('L', 'A'), 50);
        table.emplace(Roman('C', 'A'), 100);
        table.emplace(Roman('D', 'A'), 500);
        table.emplace(Roman('M', 'A'), 1000);
        
    }
    int romanToInt(string s) {
        int result = 0;
        int len = s.length();

        for (int i = 0; i < len; ++i) {
            char c = s.at(i);
            char n = (i+1 < len) ? s.at(i+1) : '0';
            map<Roman, int>::iterator it = table.find(Roman(c, n));

            if (it != table.end()) {
                result += it->second;
                ++i; 
                continue;
            } 

            it = table.find(Roman(c, 'A'));
            result += it->second;
        }

        return result;
    }
};
