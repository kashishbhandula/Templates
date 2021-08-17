#include <bits/stdc++.h>
using namespace std;
#define in long long int
#define ll int
#define ld long double
#define dd double
#define repf(i, j, k) for (in i = j; i < k; i++)
#define repb(i, j, k) for (in i = j; i > k; i--)
#define repff(i, j, k) for (in i = j; i <= k; i++)
#define repbb(i, j, k) for (in i = j; i >= k; i--)
#define MOD 100000007
#define mod 10000007
#define endl "\n"
in POW(in b, in n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return b;
    in temp = POW(b, n / 2);
    if (n % 2 == 0)
        return (temp * temp) % MOD;
    else
        return (((temp * temp) % MOD) * b) % MOD;
}
in inverse(int a)
{
    return POW(a, MOD - 2);
}
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
