class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size()<=2) return nums.size();
       int i=0;
       for(int k=0;k<nums.size();k++){
        if(i==0||i==1||nums[i-2]!=nums[k]){
            nums[i]=nums[k];
            i++;
        }
       } 
       return i;
    }
};