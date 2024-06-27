class Solution {
public:
    bool bs(vector<int>Arr,int t){
        int low=0;
        int high=Arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(Arr[mid]==t) return true;
            else if(t>Arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[i][0]<=target && matrix[i][m-1]>=target){
                return bs(matrix[i],target);
            }
        }
        return false;
    }
};