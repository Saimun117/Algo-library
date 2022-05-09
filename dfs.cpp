vector<ll>adj[100001],vis(100001);
void dfs(ll start){
    vis[start]=1;
    for(int i=0;i<adj[start].size();i++){
        if(!vis[adj[start][i]])
        dfs(adj[start][i]);
    }
}
