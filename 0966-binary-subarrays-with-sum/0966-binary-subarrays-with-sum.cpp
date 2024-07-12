class Solution {
public:
    int lessequaltogoal(vector<int>&nums,int goal){
        if(goal<0) return 0;
        int l=0,r=0,n=nums.size(),cnt=0,sum=0;
        while(r<n){
            sum=sum+nums[r];
            
            while(sum>goal){
                sum=sum-nums[l];
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessequaltogoal(nums,goal)-lessequaltogoal(nums,goal-1);
    }
};