class Solution {
public:
void rev(vector<int>& arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
start++;
end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rev(nums,0,n-k-1);
        rev(nums,n-k,n-1);
        rev(nums,0,n-1);

    }
};