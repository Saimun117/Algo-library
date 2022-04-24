vector<ll>adj[100001],vis(100001),euler;
void eulertour(ll start){
    vis[start]=1;
    euler.pb(start);
    for(auto i: adj[start]){
        if(!vis[i]){
            eulertour(i);
            euler.pb(start);
        }
    }
}
