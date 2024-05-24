class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int ans=numBottles;
       while (numBottles>=numExchange){
        int bottles=numBottles/numExchange;
        int rem=numBottles%numExchange;
         ans=ans+bottles;
         numBottles=bottles+rem;
       }
       return ans;
    }
};