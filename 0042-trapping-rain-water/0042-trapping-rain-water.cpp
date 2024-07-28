class Solution {
public:
    int trap(vector<int>& arr) {
        int lmax=0;int rmax=0;int total=0; 
        int l=0,r=arr.size()-1;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=lmax){
                    lmax=arr[l];
                }
                else{
                    total+=lmax-arr[l];
                }
                l++;
            }
            else{
                if(rmax<=arr[r]){
                    rmax=arr[r];
                }
                else{
                  total+=rmax-arr[r];  
                }
                r--;
            }
        }
        return total;
    }
};