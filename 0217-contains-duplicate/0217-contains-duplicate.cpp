class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            if(ans[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};