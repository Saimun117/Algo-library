// point update of an array
//finding range sum in logn
ll tree1[2000];
ll arr[1000];
void build(ll node,ll start,ll end){
    if(start==end){
        tree1[node]=arr[start]; // in leaf values are as same as array
    }
    else{
        ll mid=(start+end)/2;
        build(2*node,start,mid); // recursion for left child
        build(2*node+1,mid+1,end); // recursion for right child
        tree1[node]=tree1[2*node]+tree1[2*node+1]; // node which are not leaves has sum of
                                                // their child nodes
    }
}
void update(ll node,ll start,ll end,ll index,ll val){
    if(start==end){
        arr[index]+=val;    // add value to its position in given array
        tree1[node]+=val;  // updating value in tree1
    }
    else{
        ll mid=(start+end)/2;
        if(start<=index && index<=mid){
            //that means  index in left child
            update(2*node,start,mid,index,val);//recursion for updating
        }
        else{
            //that means  index in right child
            update(2*node+1,mid+1,end,index,val);//recursion for updating
        }
        tree1[node]=tree1[2*node]+tree1[2*node+1]; //update node which are not leaves has sum of
                                                // their child nodes
    }
}
ll query(ll node,ll start,ll end,ll l,ll r){  //to find sum from l range to r;
    if(r<start || l>end){
        return 0;        // node completely outside of query so its sum doesn't need
                         // for this query
    }
    if (l<=start && r>=end){
        return tree1[node]; // node is completely inside of query
    }
    // node is partially inside of query
        ll mid=(start+end)/2;
        ll p1=query(2*node,start,mid,l,r); // again recursion for which node of left child are in query
        ll p2=query(2*node+1,mid+1,end,l,r);// again recursion for which node of right child are in query
        return (p1+p2);
}
