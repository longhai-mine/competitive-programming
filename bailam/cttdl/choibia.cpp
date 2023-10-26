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
#define endl '\n'
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
#define NAME "choibia"  

const int N = 1e5 + 5;
int a[N];
int n, temp;
bool check = true, stat = true;

main() {
	fastio;
	freopen(NAME".inp", "r", stdin);
	freopen(NAME".out", "w", stdout);
	cin >> n;
	FOR(i, 1, n) {
		cin >> a[i];
	}
	FOR(i, 1, n) {
		if(a[i] == n)
			stat = false;
		if(stat == true && a[i] < a[i + 1])
			continue;
		else if(stat == false && a[i] > a[i + 1]) 
			continue;
		cout << "YES";
		return 0;
	}
	cout << "NO";
}