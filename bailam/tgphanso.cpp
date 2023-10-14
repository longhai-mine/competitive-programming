#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("tgphanso.inp", "r", stdin);
    freopen("tgphanso.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout << a / __gcd(a, b) << " " << b / __gcd(a, b);  
}
