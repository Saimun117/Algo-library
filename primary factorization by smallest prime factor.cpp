ll spf[maxn];
void smallestprimefactor(){
// it stores smallest prime factor of all number less than maxn
    for(ll i=1;i<maxn;i++) spf[i]=i;
    for(ll i=2;i<maxn;i+=2) spf[i]=2;
    for(int i=3;i*i<maxn;i+=2){
        if(spf[i]==i){
            for(int j=i*i;j<maxn;j+=i*2){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
int main()
{
    fast_io;
    vector<ll> factor;
    smallestprimefactor();
    // example of 
    //prime factorization of x
    while(x>1){
  	x/=spf[x];
    }
    return 0;
}
