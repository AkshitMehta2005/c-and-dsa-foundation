vector<int> bfsOfGraph(int V, vector<int> adj[]) {
queue<int>q;
q.push(0);
vis[V] = {0};
vector<int>bfs;
while(!q.empty()){
  int node = q.front;
  q.pop();
  bfs.push(node);
  for(int it: adj[node]){
   if(!vis[it]){
    vis[it] = 1;
    q.push(it);
   }
  }
}
}