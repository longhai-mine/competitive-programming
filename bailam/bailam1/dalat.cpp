#include <bits/stdc++.h>
using namespace std;

int n, ans;

main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    int i = 1;
    while(true)
    {
        if(i * (i + 1) * (2 * i + 1) / 6 <= n) ans = i;
        else break;
        ++i;
    }
    cout << ans;
}
