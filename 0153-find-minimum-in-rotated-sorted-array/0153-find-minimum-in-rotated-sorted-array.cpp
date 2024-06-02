class Solution {
public:
    int findMin(vector<int>& nums) {
        // int mini=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //     mini=min(mini,nums[i]);
        // }
        // return mini;

        int high=nums.size()-1;
        int low=0;
        int mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]){
               
                mini=min(nums[low],mini);
                 break;
            }
            if(nums[low]<=nums[mid]){
                low=mid+1;
                 mini=min(nums[low],mini);
            }
            else{
                high=mid-1;
                mini=min(nums[mid],mini);
            }
        }
        return mini; 
    }
};