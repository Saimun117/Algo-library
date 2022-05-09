ll egcd(ll a,ll b, ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll ret=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return ret;
}
ll power(ll x,ll n,ll m){
    ll result,y;
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    y=power(x,n/2,m);
    result=(y*y)%m;
    if(n%2==1)
        result=(result*x)%m;
    return result;
}
//  multiplicative inverse with extended gcd
// x and m has to be co prime 
// gcd =1  , so x*p+m*q=1  
// as (m*q)%m =0 so x*p =1 % m 
// so p is the inverse of x 
ll moduloinverse(ll x,ll m){
    ll xx,yy;
    ll a= egcd(x,m,xx,yy);
    if(a!=1) return -1; // if there is no inverse
    return (xx%m+m)%m;
}
// multiplicative inverse with fermat's little theorem
// 1 = b^(mod-1) % mod 
// so b^-1 = b^(mod-2) %mod
// mod has to to be prime number 
ll moduloinverse(ll a){
    return power(a,mod-2,mod);
}
