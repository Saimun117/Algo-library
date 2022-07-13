typedef long long ll;
template< typename T >
struct fenwick
{
    ll n;
    vector<T> bit;
    fenwick(ll x, T init) {
        n = x;
        bit.assign(n+1, init);
    }
    void update(int indx, T val) {
        for ( ; indx <= n; indx += indx & -indx) {
            bit[indx] += val;
        }
        return ;
    }
    T query(int x) {
        T sum = 0;
        for ( ; x > 0; x -= x & -x) {
            sum += bit[x];
        }
        return sum;
    }
};
// initialization
//fenwick<ll> tree1(10, 0);
