#include <bits/stdc++.h>
#define ll long long
using namespace std;
template< typename T >
struct fenwick
{
    ll n;
    vector<T> bit;
    fenwick(ll x, T init) {
        n = x;
        bit.assign(n, init);
    }
    void update(int indx,T val){
    for( ;indx<n;indx=indx|(indx+1)){ // for 0 based array
        bit[indx]+=val;
    }
    return ;
}

T query(int x){
    T sum=0;
    for( ;x>=0;x=(x&(x+1))-1){
        sum+=bit[x];
    }
    return sum;
}
};
//fenwick<ll> tree1(10, 0);
int main()
{
    int a,q;
    cin>>n>>q;
    fenwick<ll> tree1(n,0);
    for(int i=0;i<n;i++){
        cin>>a;
        tree1.update(i,a);
    }
    ll l,r;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        l--;r--;
        //becareful to handle the case with 0 
        cout<<tree1.query(r)-tree1.query(l-1)<<endl;
    }
    return 0;
}
//  reffernce : hackerrearth and cp-algorithms
