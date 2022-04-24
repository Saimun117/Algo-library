int bit[1002][1002];
void update(int x,int y,val){
    for(int i=x;i<=1000;i+=i&-i){
        for(int j=y;j<=1000;j+=j&-j){
            bit[i][j]+=val;
        }
    }
}
int query(int x,int y){
    int ret=0;
    for(int i=x;i>0;i-=i&-i){
        for(int j=y;j>0;j-=j&-j){
            ret+=bit[i][j];
        }
    }
    return ret;
}
int main(){
   update(x,y,val); // assign val to array[x][y]
   ans=query(x2,y2)-query(x1-1,y1); // show the value of range between x1,y1  ----> x2,y2;
}
