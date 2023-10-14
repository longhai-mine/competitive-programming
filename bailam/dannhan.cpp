#include<bits/stdc++.h>
using namespace std;
int n;
map <int , int> dem;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("dannhan.inp", "r", stdin);
    freopen("dannhan.out", "w", stdout);
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
    	int x;
    	cin >> x;
    	dem[x]++;
    	if(dem[x] > 1)
    		ans++;
    }
    cout << ans;
}
	