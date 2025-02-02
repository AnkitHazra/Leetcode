class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int f = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) f++;
        }
        if(nums[0]>=nums[n-1] && f==1) return true;
        if(f==0) return true;
        else return false;
    }
};