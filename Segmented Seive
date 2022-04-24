bool ara[maxn];
vector<ll>prime;
void seive(){
    for(int i=3;i*i<maxn;i+=2){
        if(!ara[i]){
            for(int j=i*i;j<maxn;j+=i*2) ara[j]=1;
        }
    }
    //prime[0]=2;
    prime.push_back(2);
    for(int i=3,j=1;i<maxn;i+=2)
    if(!ara[i]) prime.push_back(i);//prime[j++]=i;
}
ll segmented_seive(ll x,ll y){
    bool mark[y-x+1];
    for(ll i=0;i<y-x+1;i++) mark[i]=0;
    for(ll i=0;prime[i]*prime[i]<y;i++){
        ll start=prime[i]*prime[i];
        if(start<x){
        start=(x-1)/prime[i]+1;
        start*=prime[i];
        }
        for(ll j=start;j<=y;j+=prime[i]){
            mark[j-x]=1;
        }
    }
    ll ret=0;
    if(x==1) mark[0]=1;
    for(ll i=0;i<y-x+1;i++) if(!mark[i]) ret++;
    return ret;
}
