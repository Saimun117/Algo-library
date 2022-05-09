vector<ll> parent(100005);

ll find(ll x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find(parent[x]);
}
void Union(ll a, ll b) {
    parent[find(a)] = find(b);
}
