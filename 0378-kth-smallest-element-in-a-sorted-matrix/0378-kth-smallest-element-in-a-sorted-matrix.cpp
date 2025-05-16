class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       vector<int>m;
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            m.push_back(matrix[i][j]);
        }
       } 
       sort(m.begin(),m.end());
       return m[k-1];
    }
};