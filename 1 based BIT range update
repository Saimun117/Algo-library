//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define maxn 100001
#define el "\n"
#define pi acos(-1.0)
using namespace std;
#define lcm(a,b) (a/__gcd(a,b))*b
int  b1[maxn], b2[maxn],n;

void update(int *bit,int indx,int val){
    for( ;indx<=n;indx+=indx&-indx){
        bit[indx]+=val;
    }
    return ;
}
void range_update(int l,int r,int x){
    update(b1,l,x);
    update(b1,r+1,-x);
    update(b2,l,x*(l-1));
    update(b2,r+1,-x*r);
}
int query(int *bit,int x){
    int sum=0;
    for( ;x>0;x-=x&-x){
        sum+=bit[x];
    }
    return sum;
}
int sum(int idx){
    return query(b1, idx)*idx -  query(b2, idx);
}
int main()
{
    return 0;
}
//  reffernce : hackerrearth
