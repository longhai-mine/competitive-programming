#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[(int)1e7 + 10];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("tongk.inp", "r", stdin);
    freopen("tongk.out", "w", stdout);
    cin >> n >> k;  
    for(int i = 1; i <= n; i++)
    {
    	long long x;
    	cin >> x;
    	a[i] = x + a[i - 1];
    }
    int ans = -1e9;
    for(int i = 1; i + k - 1 <= n; i++)
    {
    	ans = max(ans, a[i + k - 1] - a[i - 1]);
    }
    cout << ans;
}
