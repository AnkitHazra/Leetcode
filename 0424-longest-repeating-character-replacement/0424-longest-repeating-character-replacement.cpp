class Solution {
public:
    int characterReplacement(string s, int k) {
        int l,r,maxlen,maxf,n=s.size();
        l=r=maxlen=maxf=0;
        vector<int>hash(26,0);
        while(r<n){
            hash[s[r]-'A']++;
            if(hash[s[r]-'A']>maxf){
                maxf=hash[s[r]-'A'];
            }
            if((r-l+1)-maxf>k){
                hash[s[l]-'A']--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;

        }
        return maxlen;
    }
};