bool mark[maxn];
ll phi[maxn];
void seivephi()
{
    for(int i=1; i<maxn; i++) phi[i]=i;
    mark[1]=1;
    for(int i=2; i<maxn; i++)
    {
        if(!mark[i])
        {
            for(int j=i; j<maxn; j+=i)
            {
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
        //cout<<phi[i]<<el;
    }
}
// here maxn is the size of the array
