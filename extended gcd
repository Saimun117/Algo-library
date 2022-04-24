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
int main()
{
    fast_io;
    ll t=1,caseno=0;
    //cin>>t;
    while(t--)
    {
        ll a,b,x,y;
        cin>>a>>b;
        cout<<egcd(a,b,x,y)<<el;
        cout<<x<<" "<<y<<el;
    }
    return 0;
}
