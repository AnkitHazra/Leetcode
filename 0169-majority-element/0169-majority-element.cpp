class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        n=n/2;
        for(auto x:mpp){
            if(x.second>n){
                return x.first;
            }
        }
        return 0;
    }
};