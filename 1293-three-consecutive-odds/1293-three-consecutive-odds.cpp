class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int arrSize=arr.size();
       for(int i=0;i<arrSize-2;i++)
    {
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
        {
            return true;
        }
    }
    return false;
    }
};