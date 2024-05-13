class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        for(auto i:nums1) {
            if(mpp[i]==0) {
                mpp[i]++;
            }
        }
        vector<int> result;
        for(auto i:nums2) {
            if(mpp[i]==1) {
                result.push_back(i);
                mpp[i]--;
            }
        } 
        return result; 
    }
};