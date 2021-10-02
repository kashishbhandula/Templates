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

void solve()
{
    in n;
    cin >> n;
    vector<in> a(n);
    vector<in> ans(n);
    repf(i, 0, n) cin >> a[i];
    stack<in> st;
    st.push(a[0]);
    repf(i, 1, n)
    {
        if (st.empty())
        {
            st.push(a[i]);
            continue;
        }
        while (st.empty() == false && st.top() >a[i])
        {
            cout << st.top() << " --> " << a[i] << endl;
            st.pop();
        }
        st.push(a[i]);
    }
    while (st.empty() == false)
    {
        cout << st.top() << " --> " << -1 << endl;
        st.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
