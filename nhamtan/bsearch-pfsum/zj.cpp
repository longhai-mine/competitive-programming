#include <bits/stdc++.h>
using namespace std;

int n, r, k, ans = INT_MAX;
int a[(int)1e6 + 10], sum[(int)1e6 + 10], f[(int)1e6 + 10];

int main()
{
    freopen("gen.inp", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> r >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        int left = max(0, i - r);
        int right = min(n, i + r);
        sum[left] += a[i];
        sum[right + 1] -= a[i];
    }
    for(int i = 1; i <= n; i++)
        sum[i] += sum[i - 1];
    for(int i = 0; i <= n; i++)
        cout << sum[i] << " ";
}
