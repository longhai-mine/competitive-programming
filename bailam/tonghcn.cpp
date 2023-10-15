#include<bits/stdc++.h>
using namespace std;
int m, n, k;
int a[(int)1e3 + 10][(int)1e3 + 10], p[(int)1e3 + 10][(int)1e3 + 10];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("tonghcn.inp", "r", stdin);
    freopen("tonghcn.out", "w", stdout);
    cin >> m >> n >> k;
    for(int i = 1; i <= m; i++) { 
    	for(int j = 1; j <= n; j++) {
    		cin >> a[i][j];
    	}
    }
    for(int i = 1; i <= m; i++) {
    	for(int j = 1; j <= n; j++) {
    		p[i][j] = p[i][j - 1] + p[i - 1][j] - p[i - 1][j - 1] + a[i][j];
    	}
    }
    int ans = 0;
    for(int i = 1; i <= k; i++) {
    	int x1, y1, x2, y2;
    	cin >> x1 >> y1 >> x2 >> y2;
    	int temp = p[x2][y2] - p[x2][y1 - 1] - p[x1 - 1][y2] + p[x1 - 1][y1 - 1];
    	ans = max(ans, temp);
    }
    cout << ans;
}


