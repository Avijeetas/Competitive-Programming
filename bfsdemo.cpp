map<int,int>visited;
void bfs(int start, map<int,vector<int>>graph) {
  queue<int>q;
  q.push(start);
  visited[start]=0;
  while(!q.empty())
  {
      int u=q.front(),i;
      q.pop();
      int l=graph[u].size();
      for(i=0;i<l;i++)
      {
          int v=graph[u][i];
          if(!visited.count(v))
          {
              visited[v]=visited[u]+1;
              q.push(v);
          }
      }
  }
}
