class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int carry = 0;
        int i = n - 1;
        
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                num[i] = k % 10;
                i--;
            } else {
                num.insert(num.begin(), k % 10);
            }
            k /= 10;
        }
        
        return num;
    }
};
