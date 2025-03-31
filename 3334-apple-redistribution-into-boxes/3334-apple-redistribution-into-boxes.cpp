class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apple=0;
        for(int i=0;i<apple.size();i++){
            total_apple+=apple[i];
        }
        int cnt=0;
        int cpct=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<capacity.size();i++){
            
            if(cpct>=total_apple){
            break;    
            }
            else 
                cpct+=capacity[i];
                cnt++;
        }
        return cnt;
    }
};