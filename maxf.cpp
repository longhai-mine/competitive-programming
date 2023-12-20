#include <bits/stdc++.h>
//#pragma GCC optimize("O3") 
//#pragma GCC optimize("unroll-loops") 
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt") 
using namespace std;

typedef tuple<int , int, int> t3;
typedef long long ll;
typedef long double LD;
typedef pair< int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
#define int long long
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pf push_front
#define rep(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,n) for(ll i=a;i<=n;i++)
#define FORD(i,n,a) for(ll i=n;i>=a;i++)
#define rf(i,e,s) for(ll i=e;i>=s;i--)
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);cerr.tie(nullptr)
#define NAME "maxf"

int n;
int a[(int)1e5 + 10];
int ans1, ans2, x, y;
int check1 = true;
main()
{
	fastio;
	freopen(NAME".inp", "r", stdin);
	freopen(NAME".out", "w", stdout);
	cin >> n;
	FOR(i, 1, n)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	FOR(i, 1, n)
	{
		if(check1 && a[i] < a[i + 1])
		{
			ans1 = a[i];
			ans2 = a[i + 1];
			x = ans1;
			y = ans2;
			check1 = false;
		}
		else if(a[i] < a[i + 1] && (double)a[i] / a[i + 1] > (double)x / y && a[i + 1] != 0)
		{
			ans1 = a[i];
			ans2 = a[i + 1];
			x = ans1;
			y = ans2;
		}
	}
	if(check1 == false)
		cout << ans1 << " " << ans2;
	else
		cout << -1;
}