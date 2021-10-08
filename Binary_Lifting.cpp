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
#define MOD 10000007
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
in val1 = 20;
in val2 = 200005;
vector<vector<in>> Par(val1, vector<in>(val2, 0));
void Recursion(in node, vector<vector<in>> &graph, vector<in> &vis, vector<in> &Height, in Parent = 0)
{
    Par[0][node] = Parent;
    for (int i = 0; i < val1; i++)
    {
        Par[i][node] = Par[i - 1][Par[i - 1][node]];
    }
    Height[node] = 1 + Height[Parent];
    for (auto it : graph[node])
    {
        if (vis[it])
        {
            Recursion(it, graph, vis, node);
        }
    }
}
in Find(in node, in k)
{
    repf(i, 0, val1)
    {
        if (k & (1 << i))
        {
            node = Par[i][node];
        }
    }
    if (node == 0)
        return -1;
    return node;
}
in BinaryLifting(in u, in v, vector<in> &Height)
{
    if (Height[u] > Height[v])
        swap(u, v);
    in diff = Height[v] - Height[u];
    v = Find(v, diff);
    if (u == v)
    {
        retun v;
    }
    in idx = val1 - 1;
    while (idx >= 0)
    {
        if (Par[idx][u] != Par[idx][v])
        {
            u = Par[idx][u];
            v = Par[idx][v];
        }
        idx--;
    }
    return Par[0][u];
}
void solve()
{
    in n;
    cin >> n;
    vector<vector<in>> graph(n + 1);
    repf(i, 0, n - 1)
    {
        in u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<in> vis(n, 0);
    vector<in> Height(n, 0);
    Recursion(1, graph, vis, Height);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
