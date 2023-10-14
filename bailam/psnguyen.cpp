#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("psnguyen.inp", "r", stdin);
    freopen("psnguyen.out", "w", stdout);
    long long n, m;
    cin >> m >> n;
    long long ans = 0;
    for(int i = 1; i < n; i++)
    {
        int temp = (2 * m - 1) / (n + i);
        int temp2 = max(m + 1, n + i);
        temp2 = (temp2 - 1) / (n + i);
        ans += temp - temp2;
    }
    cout << ans;
}
