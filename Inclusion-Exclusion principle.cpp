    // given n prime numbers p1 to to pn. find out total number from 1 to m
    // that  if (x % pi == 0) where x = 1 to m and i = 1 to n
    ll n, m;
    cin >> n >> m;
    ll p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    ll limit = 1ll << n;
    ll ans = 0;
    for (ll i = 1; i < limit; i++) {
        ll bits = 0, temp = 1;
        for (int j = 0; j < n; j++) {
            ll x = 1LL << j;
            if ((x & i)) {
                bits++;
                temp *= p[j];
            }
        }
        if (bits % 2) {
            ans += m / temp;
        }
        else ans -= m / temp;
    }
    cout << ans << endl;
