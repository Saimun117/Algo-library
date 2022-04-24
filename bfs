vector<ll>adj[200001];
ll vis[200001];
void bfs(int s)
{
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        ll x,y;
        x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            if(vis[adj[x][i]]==0)
            {
                y=adj[x][i];
                vis[y]=1;
                q.push(y);
            }
        }
    }
}
