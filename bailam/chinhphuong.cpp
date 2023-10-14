#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("chinhphuong.inp", "r", stdin);
    freopen("chinhphuong.out", "w", stdout);
    int x, y;   
    cin >> x >> y;
    int dem1 = sqrt(y);
    int dem2 = sqrt(x - 1);
    cout << dem1 - dem2;
}
