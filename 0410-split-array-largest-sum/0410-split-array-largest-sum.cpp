class Solution {
int func(vector<int>&arr,int maxsum){
    int n=arr.size();
    int partions=1;
    long long subarray=0;
    for(int i=0;i<n;i++){
    if(subarray+arr[i]<=maxsum){
        subarray+=arr[i];
    }
    else{
        partions++;
        subarray=arr[i];
    }
    }
    return partions;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int maxsub=func(nums,mid);
            if(maxsub>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};