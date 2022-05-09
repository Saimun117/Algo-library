vector<ll>prime;
ll ara[100001];
void seive(){
    for(int i=3;i*i<100001;i+=2){
        if(!ara[i]){
            for(int j=i*i;j<100001;j+=i*2) ara[j]=1;
        }
    }
    //prime[0]=2;
    prime.push_back(2);
    for(int i=3,j=1;i<100001;i+=2)
        if(!ara[i]) prime.push_back(i);
        //prime[j++]=i;
}
