class Solution {
public:
    int lessequaltogoal(vector<int>&nums,int goal){
        if(goal<0) return 0;
        int l=0,r=0,n=nums.size(),cnt=0,sum=0;
        while(r<n){
            sum=sum+(nums[r]%2);
            
            while(sum>goal){
                sum=sum-(nums[l]%2);
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return lessequaltogoal(nums,k)-lessequaltogoal(nums,k-1);
    }
};