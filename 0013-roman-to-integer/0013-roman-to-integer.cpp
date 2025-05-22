class Solution {
public:
    int romanToInt(string s) {

        int n = s.size();
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I' && s[i + 1] == 'V') {
                result += 4;
                i ++;
                continue;
            }
            if (s[i] == 'I' && s[i + 1] == 'X') {
                result += 9;
                i ++;
                continue;
            }
            if (s[i] == 'X' && s[i + 1] == 'L') {
                result += 40;
                i ++;
                continue;
            }
            if (s[i] == 'X' && s[i + 1] == 'C') {
                result += 90;
                i ++;
                continue;
            }
            if (s[i] == 'C' && s[i + 1] == 'D') {
                result += 400;
                i ++;
                continue;
            }
            if (s[i] == 'C' && s[i + 1] == 'M') {
                result += 900;
                i ++;
                continue;
            }
            if (s[i] == 'I')
                result += 1;
            else if (s[i] == 'V')
                result += 5;
            else if (s[i] == 'X')
                result += 10;
            else if (s[i] == 'L')
                result += 50;
            else if (s[i] == 'C')
                result += 100;
            else if (s[i] == 'D')
                result += 500;
            else if (s[i] == 'M')
                result += 1000;
        }
        return result;
    }
};