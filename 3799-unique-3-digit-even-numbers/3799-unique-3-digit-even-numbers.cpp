class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int i: digits) freq[i]++;
        int cnt = 0;
        for (int i = 100; i < 1000; i=i+2) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            vector<int> tempfreq = freq;
            if (--tempfreq[a] < 0)
                continue;
            if (--tempfreq[b] < 0)
                continue;
            if (--tempfreq[c] < 0)
                continue;
            cnt++;
        }
        return cnt;
    }
};
