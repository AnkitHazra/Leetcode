class Solution {
public:
    bool search(vector<int>& nums, int target) {
    //  int n=nums.size();
    //  int low=0;int high=n-1;
    //  int k=target;
    //  while(low<=high){
    //     int mid=(low+high)/2;
    //     if(nums[mid]==k) return true;
    //     if(nums[low]==nums[mid] && nums[mid]==nums[high]){
    //         low++;
    //         high--;
    //         continue;
    //     }

    //     if(nums[low]<=nums[mid]){
    //         if(nums[low]<=k && k<nums[mid]){
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     else{
    //         if(nums[mid]<=k && k<=nums[high]){
    //             low=mid+1;
    //         }
    //         else{
    //             high=mid-1;
    //         }
    //     }
    //  }
    //  return false;   
    



    for(int i=0;i<nums.size();i++){
        if(nums[i]==target) return true;
    }
    return false;
    }
};