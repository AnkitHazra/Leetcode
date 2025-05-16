class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto it:prerequisites){
            int course=it[0];
            int preq=it[1];
            adj[preq].push_back(course);
        }
        int n=numCourses;
        vector<int> inDegree(n, 0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                inDegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(inDegree[i]==0) q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0) q.push(it);
            }
        }
        return topo.size()<n?false:true;
    }
};