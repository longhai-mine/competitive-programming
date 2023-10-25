#include <bits/stdc++.h>
using namespace std;

long long bcnn(int x , int y)
{
    long long res = x * y / __gcd(x , y);
}
int n, lcmm = 1;
int t[(int)1e5 + 10] , m[(int)1e5 + 10];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("psmax.inp", "r", stdin);
    freopen("psmax.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> t[i] >> m[i];
        lcmm = bcnn(lcmm, m[i]);
    }
    int pos = 1, temp = (lcmm / m[1]) * t[1];
    for(int i = 2; i <= n; i++)
    {
        if((lcmm / m[i]) * t[i] > temp)
            pos = i;
    }
    cout << t[pos] << " " << m[pos];
}
