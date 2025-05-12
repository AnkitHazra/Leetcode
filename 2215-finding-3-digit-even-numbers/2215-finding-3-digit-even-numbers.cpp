class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                if(j==i) continue;
                for(int k=0;k<n;k++){
                    if(k==i || k==j) continue;
                    int digit=digits[i]*100+digits[j]*10+digits[k];
                    if(digit%2==0) ans.insert(digit);
                }
            }
        }
        vector<int>res(ans.begin(),ans.end());
        sort(res.begin(),res.end());
        return res;
    }
};