class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        long long int r=0;
        while(t>0){
            int ld=t%10;
            r=r*10+ld;
            t=t/10;
        }
        if(x == r){
            return true;
        }
        else{
            return false;
        }
    }
};