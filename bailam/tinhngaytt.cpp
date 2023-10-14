#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int m, d;
    cin >> d >> m;
    int ans = 5;
    for(int i = 1; i <= m; i++)
    {
    	int j;
    	if(i == 2)
    	{
    		j = 28;
    	}
    	else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    		j = 31;
    	else
    		j = 30;
    	if(i == m)
            j = d;
        for(int k = 1; k <= j; k++)
        {
            ans++;
            ans %= 7;
        }
    }
    cout << ans;
}
