const ll inf = 1e18;
ll lis(vector<ll> &a) {
    ll n = a.size();
    vector<ll> d(n+1, inf), p(n+1, -1), index(n+1, -1);
    d[0] = -inf;
    for (int i = 0; i < n; i++) {
        int id = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[id-1] < a[i] and d[id] > a[i]) {
            d[id] = a[i];
            index[id] = i;
            p[i] = index[id-1];
        }
    }
    ll ret = -1;
    for (int i = n; i >= 1; i--) {
        if (d[i] != inf) {
            ret = i;
            break;
        }
    }
    ll now = index[ret];
    vector<ll> sequence;
    while (now != -1) {
        sequence.push_back(a[now]);
        now = p[now];
    }
    for (int i = ret - 1; i >= 0; i--) {
        cout << sequence[i] << ' ';
    }
    cout << endl;
    return ret;
}
// reference : cp-algorithms
