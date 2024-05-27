class Solution {

vector<int> generaterows(int rows){
    long long ans=1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int i=1;i<rows;i++){
        ans=ans*(rows-i);
        ans=ans/i;
        ansrow.push_back(ans);

    }
    return ansrow;
}

public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=1;i<=numRows;i++){
        ans.push_back(generaterows(i));
       }
       return ans;
    }
};