//the number of permutations of length n
//without fixed points (i.e. no number i is
// in position  i- also called a derangement)
// we can also find this using formula n!/e
// where e = 2.718281828459045
ll dearrangement(ll n) {
    if (n == 1) return 0;
    if (n == 0) return 1;
    return (n-1) * dearrangement(n-1) + (n-1) * dearrangement(n-2);
}
