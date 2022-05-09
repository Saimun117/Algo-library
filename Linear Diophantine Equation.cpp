// reference https://cp-algorithms.com/algebra/linear-diophantine-equation.html
//for numofsolutions https://stackoverflow.com/questions/58104306/finding-the-number-of-solutions-and-the-solutions-in-a-given-interval-of-a-linea
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
// finding a solution
bool findasolution(ll a,ll b,ll c,ll &x, ll &y,ll &g){
    g=egcd(abs(a),abs(b),x,y);
    if(c%g) return false;
    x=x*c/g;
    y=y*c/g;
    if(a<0) x*=-1;
    if(b<0) y*=-1;
    return true;
}
// general solution for all case
//xx=x+k*b/g
//yy=y-k*a/g
// number of solution in a given interval
// have to handle in main function a=0,b=0 also when a=0  or b=0 to avoid rte
ll num_of_solutions(ll a,ll b,ll c, ll minx,ll maxx,ll miny, ll maxy){
    ll x,y,g= egcd(abs(a),abs(b),x,y);
    if(c%g!=0) return 0;
    x=x*c/g;
    y=y*c/g;
    if(a<0) x*=-1;
    if(b<0) y*=-1;
    //cout<<x<<" "<<y<<el;
    ll lk1,lk2,rk1,rk2;
    double xx,yy;
    xx=1.0*(minx-x)*g/b;
    yy=1.0*(maxx-x)*g/b;
    if(b<0) swap(xx,yy);
    lk1=ceil(xx);
    rk1= floor(yy);
    yy=1.0*(y-miny)*g/a;
    xx=1.0*(y-maxy)*g/a;
    if(a<0) swap(yy,xx);
    lk2=ceil(xx);
    rk2= floor(yy);
    //cout<<lk1<<" "<<rk1<<" "<<lk2<<" "<<rk2<<el;
    ll low,high;
    low=max(lk1,lk2);
    high=min(rk1,rk2);
    //cout<<low<<" "<<high<<el;
    ll ret=high-low+1;
    if(ret<0) ret=0;
    return ret;
}
// related to linear diophantine 
// chicken mcnugget theorem
// if a,b are two coprime; largest number that cannot be expressed as ax+by is a*b-a-b
// where x,y>=0
