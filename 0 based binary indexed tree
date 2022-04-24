#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int bit[100001];
void update(int indx,int val){
    for( ;indx<n;indx=indx|(indx+1)){ // for 0 based array
        bit[indx]+=val;
    }
    return ;
}

int query(int x){
    int sum=0;
    for( ;x>=0;x=(x&(x+1))-1){
        sum+=bit[x];
    }
    return sum;
}
int main()
{
    int a,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a;
        update(i,a);
    }
    ll l,r;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        l--;r--;
        //becareful to handle the case with 0 
        cout<<query(r)-query(l-1)<<endl;
    }
    return 0;
}
//  reffernce : hackerrearth
