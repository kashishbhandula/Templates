#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
vector<long long int> Fact(1000002);
void Build()
{
    Fact[0] = 1;
    for (int i = 1; i <= 1000000; i++)
    {
        Fact[i] = i * Fact[i - 1];
        Fact[i] %= mod;
    }
}
long long int Pow(long long int base, long long int n)
{
    if (n == 0)
        return 1;

    long long int value = Pow(base, n / 2) % mod;
    value = ((value * value) % mod);
    if (n & 1)
    {
        value = (value * base) % mod;
    }

    return value;
}
long long int Inverse(long long int n)
{
    return Pow(n, mod - 2);
}

long long int nCr(long long int n, long long int r)
{
    long long int num = Fact[n];
    long long int den = Fact[r] * Fact[n - r];
    den%=mod;
    num = (num * Inverse(den)) % mod;
    return num;
}
int main()
{
   
    Build();
    
    return 0;
}