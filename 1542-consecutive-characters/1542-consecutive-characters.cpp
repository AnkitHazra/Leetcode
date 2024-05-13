class Solution {
public:
    int maxPower(string s) {
      int maxi=1;
      int t=1;
      for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            t++;
        }
        else{
            maxi=max(t,maxi);
            t=1;
        }
      }
      maxi=max(t,maxi);
      return maxi;  
    }
};