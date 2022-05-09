typedef long long ll;
const ll mod = 1e9 + 7;

vector<vector<int>> mat_expo(vector<vector<int>> &x, ll n) {
    if (n == 1) return x;
    vector<vector<int>> out = mat_expo(x, n / 2);
    vector<vector<int>> temp;
    vector<int> y(2);
    y[0] = (out[0][0] * out[0][0] + out[0][1] * out[1][0]) % mod;
    y[1] = (out[0][0] * out[0][1] + out[0][1] * out[1][1]) % mod;
    temp.push_back(y);
    y[0] = (out[1][0] * out[0][0] + out[1][1] * out[1][0]) % mod;
    y[1] = (out[1][0] * out[0][1] + out[1][1] * out[1][1]) % mod;
    temp.push_back(y);
    if (n % 2) {
        vector<vector<int>> temp1;
        y[0] = (temp[0][0] * x[0][0] + temp[0][1] * x[1][0]) % mod;
        y[1] = (temp[0][0] * x[0][1] + temp[0][1] * x[1][1]) % mod;
        temp1.push_back(y);
        y[0] = (temp[1][0] * x[0][0] + temp[1][1] * x[1][0]) % mod;
        y[1] = (temp[1][0] * x[0][1] + temp[1][1] * x[1][1]) % mod;
        temp1.push_back(y);
        temp = temp1;
    }
    return temp;
}
void find_n_th_fib(ll n) {
    if (n == 0) {
        cout << 0 << '\n';
    }
    else if (n == 1 or n == 2) {
        cout << 1 << '\n';
    }
    else {
        vector<vector<int>> x = {{1, 1}, {1, 0}}, fib;
        fib = mat_expo(x, n - 2);
        cout << (fib[0][0] + fib[0][1]) % mod << '\n';
    }
}
// time complexity o(logn)
