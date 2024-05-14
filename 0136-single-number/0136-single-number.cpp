class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            count = 0; // Reset count for each new number
            for(int j = 0; j < nums.size(); j++) {
                if(num == nums[j]) {
                    count++;
                }
            }
            if(count == 1) {
                return num;
            }
        }
        // If no unique number is found, return a default value or handle the case appropriately
        return -1; // For example, returning -1 to indicate no unique number found
    }  
};
