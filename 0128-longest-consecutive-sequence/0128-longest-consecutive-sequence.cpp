class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int cnt=0;
        int largest=1;
        int lastsmaller=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastsmaller){
                cnt++;
                lastsmaller=nums[i];
        }
            else if (lastsmaller!=nums[i]){
                cnt=1;
                lastsmaller=nums[i];
                }
            largest=max(largest,cnt);

}
        return largest;
        }

};