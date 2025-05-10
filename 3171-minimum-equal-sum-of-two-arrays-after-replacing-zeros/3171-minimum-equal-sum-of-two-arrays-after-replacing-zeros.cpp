class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0,sum2=0;
        long long z1=0,z2=0;
        for(int i:nums1){
            sum1+=i;
            if(i==0){
                z1++;
                sum1++;
            }
        }
        for(int i:nums2){
            sum2+=i;
            if(i==0){
                z2++;
                sum2++;
            }
        }
        if((!z1 && sum1<sum2)||(!z2 && sum2<sum1)) return -1;
        return max(sum1,sum2);
    }
};