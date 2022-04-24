
//link: https://codeforces.com/blog/entry/11080
// we can use 2 functions from this ds
// these are find_by_order(x),order_of_key(y)
// find_by_order(x) find the number in  index x [ 0 based]
// order_of_key(y) count the numbers that are strictly less than y
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set_pair;

//declaration 
ordered_set a;
ordered_set_pair b;
// insertion
a.insert(2);
a.insert(1);
b.insert({5,0});
int  x=*a.find_by_oreder(0); // result 2
x=*a.find_by_oreder(1); // result 1
a.order_of_key(3);// result 2
a.order_of_key(2); //result 1
a.oder_of_key(-1);// result 0
//same for b we just need to use pair for it 
// we can also use other functions same as set e.g find
// we can traverse order set as same as set 
