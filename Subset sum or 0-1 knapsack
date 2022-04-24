        ll n,capacity,value[n+1];
        for(int i=1;i<=n;i++) cin>>value[i];
        int weights[n+1];
        int dp[capacity+1];
        for(int j=0;j<=capacity;j++){
            dp[j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=capacity;j>=0;j--){
                if(weights[i]<=j){
                    ll x=value[i]+dp[j-weights[i]];
                    if(x>dp[j]){
                        dp[j]=value[i]+dp[j-weights[i]];
                    }
                }
            }
        }
        ll ans=dp[capacity];
