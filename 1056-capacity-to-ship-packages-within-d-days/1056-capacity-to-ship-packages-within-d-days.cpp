class Solution {
    int noofdays(vector<int>&arr,int cap){
        int d=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum>cap){
                d++;
                sum=arr[i];
            }
        }
    return d;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++){
            high=high+weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(noofdays(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};