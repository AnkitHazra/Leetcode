class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        for(int i=0;i<k;i++){
            int min_index=0;
            int mini=nums[0];
               for(int j=1;j<n;j++){
                if(nums[j]<mini){
                    mini=nums[j];
                    min_index=j;
                }
               }
               nums[min_index]=nums[min_index]*multiplier;
        }
        return nums;
    }
};