#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define in int
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
in Hash(string str)
{
    in val = 0;
    in mul = 1;
    in pr = 31;
    in n = str.length();
    repf(i, 0, n)
    {
        val = (val + ((((str[i] - 'a') + 1) % MOD) * mul) % MOD) % MOD;
        mul = (mul * pr) % MOD;
    }
    return val;
}
void solve()
{
    string str;
    cin >> str;
    in temp = Hash(str);
    cout << temp << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
