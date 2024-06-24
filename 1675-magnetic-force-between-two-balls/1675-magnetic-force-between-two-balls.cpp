class Solution {
    bool ispossible(vector<int>&position,int mid,int k){
        int n=position.size();
        int cnt=1;
        int last=position[0];
        for(int i=1;i<n;i++){
            if(position[i]-last>=mid){
                cnt++;
                last=position[i];
            }
            if(cnt>=k) return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n=position.size();
        int low=1;int high=position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(position,mid,m)==true){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low-1;
    }
};