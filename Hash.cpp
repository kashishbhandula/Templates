#define mod 1000000007
int Hash(string str)
{
    int hash = 0;
    int pr = 1;
    for (int i = 0; i < n; i++)
    {
        hash = ((hash + (str[i] - 'a' + 1) * pr) % mod) % mod;
        pr = (pr * 31) % mod;
    }
    return hash;
}