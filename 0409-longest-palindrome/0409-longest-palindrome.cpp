class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        int oddcount=0;
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
            if(freq[ch]%2==1)
                oddcount++;
            else
                oddcount--;
        }
        if(oddcount>1){
            return s.length()-oddcount+1;
        }
        return s.length();
    }
};