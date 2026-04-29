//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       queue<int>q;
       q.push(0);
       vector<int>bfs;
       int vis[V] = {0};
       vis[0] = 1;
       while(!q.empty()){
           int node = q.front();
           q.pop();
           bfs.push_back(node);
           
           // queue mai dal do adjecent node ko
           for(int it : adj[node]){
               if(!vis[it]){
                   vis[it] = 1;
                 q.push(it);   
               }
              
           }
       }
       return bfs;
    }
};