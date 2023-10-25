#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, q;
int f[(int)1e6 + 10], a[(int)1e6 + 10], p[(int)1e6 + 10], sum[(int)1e6 + 10];

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    cin >> n;
    for(int i = 1; i <= n; i++)
    	cin >> a[i];
    cin >> q;
    for(int i = 1; i <= q; i++)
    {
    	int l, r, x;
    	cin >> l >> r >> x;
    	f[l] += x;
    	f[r + 1] -= x;N
        p[l + 1]++;
        p[r + 1]--;
        sum[r + 1] -= r - l;
    }
    for(int i = 1; i <= n; i++)
    {
        f[i] += f[i - 1];
        p[i] += p[i - 1];
        sum[i] += sum[i - 1];
    }
    for(int i = 1; i <= n; i++)
        p[i] += p[i - 1];
    for(int i = 1; i <= n; i++)
    	cout << p[i] + sum[i] + a[i] + f[i] << " ";
}
