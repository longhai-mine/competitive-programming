#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
int n, u, v;
pair <pair <int , int>, int> a[20];
int currenweight, maxvalue, currenvalue;

void ql(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(a[j].fi.se == 0 && currenweight + a[j].fi.fi <= v)
		{
			currenweight += a[j].fi.fi;
			a[j].fi.se = 1;
			currenvalue += a[j].se;
			if(currenweight >= u && currenweight <= v)
				maxvalue = max(maxvalue, currenvalue);
			ql(i + 1);
			currenweight -= a[j].fi.fi;
			a[j].fi.se = 0;
			currenvalue -= a[j].se;
			}
		}
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++)
    	cin >> a[i].fi.fi >> a[i].se;
    ql(1);
    cout << maxvalue;
}
