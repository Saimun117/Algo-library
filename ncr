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
ll fact[1001];
void factorial(){
    fact[0]=1;
    for(int i=1;i<=1000;i++){
        fact[i]=(i*fact[i-1])%mod;
    }
}
ll ncr(ll n,ll r){
    if(n<r) return 0;
    //cout<<fact[n]<<el;
    ll ret=(fact[n]*power(fact[n-r],mod-2,mod))%mod ;
    ret=(ret*power(fact[r],mod-2,mod))%mod;
    return ret;
}
