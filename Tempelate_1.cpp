#include <bits/stdc++.h>
using namespace std;
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
//((1U << n) - 1);
//the number 0x55555555 is a 32 bit number with all odd bits set as 1 
//0xAAAAAAAA is a 32 bit number with all even bits set as 1
//abs->(n+n>>31)^n>>31
// 2^(n*n - n) count of reflix relation
//(n & i) == i imples i=(i-1)&n
//1 s complement=-(n+1);
// (1 << (sizeof(int) * 8 – 1)) – 1 highest positive integer
//(1 << m) – 1 for m setbits
//log2(n & -n) + 1;
// rotate left(n << d)|(n >> (INT_BITS - d));
//right bit off n & (n - 1)
//( n & (mod - 1) );
//pow(2, ceil(log(abs(diff))/log(2)));
//odd=(it-'0')%2
//cout<<setprecision(10)<<fixed<<ans<<endl;
//to_string(i_val);
//(1/a)%mod=(a^p-2)%mod;

/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*bool isPrime[1002];
int sieve(int 1000)
{
    //n++;

    fill(isPrime, isPrime + n, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            v.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    isPrime[1] = false;
    for (int i = 0; i < n; i++)
    {
        cout << isPrime[i];
    }
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*in POW(in b, in n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return b;
    in half = POW(b, n / 2);
    if (n % 2 == 0)
        return (half * half) % MOD;
    else
        return (((half * half) % MOD) * b) % MOD;
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*in Hash(string str)
{
    in size = str.size();
    in hash = 0;
    in pr = 1;
    repf(i, 0, size)
    {
        hash = (hash % mod + (str[i] * pr) % mod) % mod;
        pr = ((pr) % mod * 31) % mod;
    }
    return hash;
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*vector<in> LPS(string str)
{
    in n = str.length();
    vector<int> lps(n, 0);
    in len = 0, i = 1;
    while (i < n)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (str[len] != 0)
            {
                len = lps[i - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return lps;
}
void KMP(string str, string target)
{
    str = target + "$" + str;
    vector<int> lps = LPS(str);
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

/*void Multilpy(in a[2][2], in b[2][2])
{

    in x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    in y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    in w = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    in z = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a[0][0] = x;
    a[0][1] = y;
    a[1][0] = w;
    a[1][1] = z;
}
void FabPower(in Base[2][2], in n)
{
    if (n == 0 || n == 1)
        return;
    in a[2][2] = {{1, 1}, {1, 0}};
    FabPower(Base, n / 2);
    Multiply(Base, Base);
    if (n & 1)
        Multiply(Base, a);
}
in Fabonica(in n)
{
    in Base[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;

    FabPower(Base, n - 1);
    return Base[0][0];
}*/

///////////////////////////////////////////////////////////////////////////////////

/*vector<in> euler;
vector<in> height(6, 1);
in Par[20][200018];
void LCA(in node, vector<vector<in>> &adj, in parent = -1)
{
    if (parent != -1)
        Par[0][node] = parent;
    else
        Par[0][node] = 0;
    repf(i, 1, 20)
    {
        Par[i][node] = Par[i - 1][Par[i - 1][node]];
    }
    if (parent != -1)
        height[node] += height[parent];
    euler.push_back(node);
    for (auto it : adj[node])
    {

        if (parent != it)
        {

            LCA(it, adj, node);
            euler.push_back(node);
        }
    }
}
in FindPar(in node, in k)
{
    repf(i, 0, 20)
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
in BLT(in u, in v, vector<vector<in>> &adj, in idx = 19)
{
    if (height[u] > height[v])swap(u, v);
    in diff = height[v] - height[u];
    //cout << v << " " << u << " " << diff << " ";
    v = FindPar(v, diff);
    //cout << v << endl;
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
}*/

/*vector<vector<in>> adj(n + 1);
repf(i, 1, n)
{
    in u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
    
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
