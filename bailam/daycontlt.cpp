#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("daycontlt.inp", "r", stdin);
    freopen("daycontlt.out", "w", stdout);
    int n;
    cin >> n;
    int temp = -1e18, dem = 0, ans = 0;
    for(int i = 1; i <= n; i++) 
    {
        int x;
        cin >> x;
        if(x > temp)
        {
            temp = x;
            dem++;
        }
        else
        {
            ans = max(dem, ans);
            dem = 1;
            temp = x;
        }
    }
    cout << ans;
}
