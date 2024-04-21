class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            int ld=x%10;
            if((rev > INT_MAX/10) || (rev < INT_MIN/10)){
                return 0;
            }
            x=x/10;
            rev= rev*10+ld;
        }
        return rev;
    }
};