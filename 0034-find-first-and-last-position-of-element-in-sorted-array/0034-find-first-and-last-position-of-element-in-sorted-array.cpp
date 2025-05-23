class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
                int j;
                for(j=i;j<n-1;j++){
                    if(nums[j]!=nums[j+1]) break;
                }
                ans.push_back(j);
                break;
            }
        }
        if(ans.empty()) return {-1,-1};
        return ans;
    }
};