class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,-1);
        int l=0; int n=s.size();
        int r=0; 
        int len=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
             
            len=max(len,r-l+1);
            hash[s[r]]=r;
            r++;
        }
        return len;
    }
};