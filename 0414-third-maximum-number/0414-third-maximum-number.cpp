class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len=nums.size();
        vector<int> unique;
        int max=INT_MIN;
        if(len==1) return nums[0];
        sort(nums.begin(),nums.end());
        int k=0;
        if(len>2)
        {
            for(int i=0;i<len;i++)
            {
               
                if(i==0 || nums[i]!=unique[k-1])
                {
                    unique.push_back(nums[i]);
                    k++;
                }
            }
            if(unique.size()>2)
            return unique[k-3];
        }
       
         return nums[len-1];
    }
   
};
