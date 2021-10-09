#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define in long long int
#define ll int
#define ld long double
#define dd double
#define repf(i, j, k) for (in i = j; i < k; i++)
#define repb(i, j, k) for (in i = j; i > k; i--)
#define repff(i, j, k) for (in i = j; i <= k; i++)
#define repbb(i, j, k) for (in i = j; i >= k; i--)
#define MOD 1000000007
#define mod 10000007
#define endl "\n"
/////////////////////////////////////////////////////////////////////////////////////////////////////
//debug template starts
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '"' << x << '"'; }
void __print(const string &x) { cerr << '"' << x << '"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
typedef tree<in, null_type, less_equal<in>, rb_tree_tag, tree_order_statistics_node_update> i_set; //indexed_set

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINEJUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
//debug template ends

#define YES()                  \
    ;                          \
    {                          \
        cout << "YES" << endl; \
        return;                \
    }
#define Yes()                  \
    ;                          \
    {                          \
        cout << "Yes" << endl; \
        return;                \
    }
#define NO()                  \
    ;                         \
    {                         \
        cout << "NO" << endl; \
        return;               \
    }
#define No()                  \
    ;                         \
    {                         \
        cout << "No" << endl; \
        return;               \
    }
in tim = 0;
void google(in n)
{
    cout << "Case #" << tim << ":"
         << " " << n << endl;
    return;
}

vector<in> dp(4 * 9);
void Build(in low, in high, in idx, vector<in> &v)
{
    if (low == high)
    {
        dp[idx] = v[low];
        return;
    }
    in mid = (low + high) >> 1;
    Build(low, mid, (2 * idx), v);
    Build(mid + 1, high, (2 * idx) + 1, v);
    dp[idx] = dp[2 * idx] + dp[(2 * idx) + 1];
}
void update(in low, in high, in idx, in l, in val, vector<in> &v)
{
    if (low == high)
    {
        dp[idx]+= val;
        return;
    }
    in mid = (low + high) >> 1;
    if (l <= mid)
        update(low, mid, (2 * idx), l, val, v);
    else
        update(mid+1,high, (2 * idx) + 1, l, val, v);
        
    dp[idx] = dp[2 * idx] + dp[(2 * idx) + 1];
}
in Sum(in low, in high, in left, in right, in idx)
{
    if (low >= left && right >= high)
    {
        return dp[idx];
    }
    if (low < left && high < left)
    {
        return 0;
    }
    if (right < low && right < high)
    {
        return 0;
    }
    in mid = (low + high) >> 1;
    return (Sum(low, mid, left, right, 2 * idx) + Sum(mid + 1, high, left, right, (2 * idx) + 1));
}
void solve()
{

    in n;
    cin >> n;
    vector<in> v(n + 1);
    repff(i, 1, n) cin >> v[i];
    Build(1, n, 1, v);
    debug(dp);
    in q;
    cin >> q;
    while (q--)
    {
        in l, val;
        cin >> l >> val;
        update(1, n, 1, l, val, v);
        debug(dp);
        in left,right;
        cin>>left>>right;
       cout<<Sum(1,n,left,right,1)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
}
