#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("boiso.inp", "r", stdin);
    freopen("boi2t3.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = a; i <= b; i += a)
    	if(b % i == 0)
    		cout << i << " ";
    //cout << ans;
}
