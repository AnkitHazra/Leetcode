class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        int i=a.length()-1;                            
        int j=b.length()-1; 
        while(i>=0 || j>=0 || carry ){
            int total=carry;
            if(i>=0) total+=a[i--]-'0';
            if(j>=0) total+=b[j--]-'0';
            ans+=(total%2)+'0';
            carry=total/2;
        } 
        reverse(ans.begin(),ans.end());
        return ans;                          
    }
};