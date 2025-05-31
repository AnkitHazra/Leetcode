class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans;
        if (n == 0) return ans;
        vector<vector<char>> arr(10);
        arr[2] = {'a', 'b', 'c'};
        arr[3] = {'d', 'e', 'f'};
        arr[4] = {'g', 'h', 'i'};
        arr[5] = {'j', 'k', 'l'};
        arr[6] = {'m', 'n', 'o'};
        arr[7] = {'p', 'q', 'r', 's'};
        arr[8] = {'t', 'u', 'v'};
        arr[9] = {'w', 'x', 'y', 'z'};
        int x = digits[0] - '0';
        for (auto it : arr[x]) {
            ans.push_back(string(1, it));
        }
        if (n == 1) return ans;

        int y = digits[1] - '0';
        vector<string> newans;
        for (auto it : ans) {
            for (auto at : arr[y]) {
                newans.push_back(it + at);
            }
        }
        if (n == 2) return newans;
        int z = digits[2] - '0';
        vector<string> newans1;
        for (auto it : newans) {
            for (auto at : arr[z]) {
                newans1.push_back(it + at);
            }
        }
        if (n == 3) return newans1;
        int w = digits[3] - '0';
        vector<string> newans2;
        for (auto it : newans1) {
            for (auto at : arr[w]) {
                newans2.push_back(it + at);
            }
        }
        return newans2;
    }
};