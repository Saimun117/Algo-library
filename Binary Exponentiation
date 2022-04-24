ll power(ll x,ll n,ll m){
    ll result,y;
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    y=power(x,n/2,m);
    result=((y%m)*(y%m))%m;
    if(n%2==1)
        result=((result%m)*(x%m))%m;
    return result;
}
