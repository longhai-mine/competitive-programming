#include <bits/stdc++.h>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("chiadau.inp", "r", stdin);
    freopen("chiadau.out", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        int du = min(a, b);
        du = (max(a, b) + du - 1) / du;
        if(du - 1 <= d)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
