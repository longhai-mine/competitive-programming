#include <bits/stdc++.h>
// #pragma GCC optimize("O3")  
// #pragma GCC optimize("unroll-loops")  
// #pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
using namespace std;
#define int long long
#define ii pair<int,int>
#define iii pair<int,ii>
#define vi vector<int>
#define vii vector<ii>
#define mii map<int,int>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ep emplace_back
#define endl "\n"
#define MASK(i) (1LL << (i))
#define c_bit(i) __builtin_popcountll(i)
#define BIT(x,i) ((x) & MASK(i))
#define SET_ON(x,i) ((x) | MASK(i))
#define SET_OFF(x,i) ((x) & ~MASK(i))
#define oo 1e18
#define __lcm(a,b) (1ll * ((a) / __gcd((a), (b))) * (b))
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define FORR(i,l,r,k) for (int i=l;i<=r;i+=k)
#define FODD(i,l,r,k) for (int i=l;i<=r;i-=k)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define NAME "tiahoant"

int n, sum, ans;
int a[(int)1e2 + 10];

bool check()
{
	if(sum == 0 || sum == 1)
		return false;
	FOR(i, 2, sqrt(sum))
		if(sum % i == 0)
			return false;
	return true;
}

void dq(int i)
{
	if(i == n + 1)
	{
		if(check())
		{
			ans++;
		}
	}
	else
	{
		FOR(j, 0, 1)
		{
			if(j == 1)
			{
				sum += a[i];
				dq(i + 1);
				sum -= a[i];
			}
			else
				dq(i + 1);
		}
	}
}

signed main() 
{
	faster;
	freopen(NAME".inp", "r", stdin);
	freopen(NAME".out", "w", stdout);
	cin >> n;
	FOR(i, 1, n)
		cin >> a[i];
	dq(1);
	cout << ans;
	return 0;
}                                                                                         
                                                                                                                                                     
//  _       ___   _   _   ____  _   _     _     ___  _   _ __        __ _   _ 
// | |     / _ \ | \ | | / ___|| | | |   / \   |_ _|| | | |\ \      / /| | | |
// | |    | | | ||  \| || |  _ | |_| |  / _ \   | | | | | | \ \ /\ / / | | | |
// | |___ | |_| || |\  || |_| ||  _  | / ___ \  | | | |_| |  \ V  V /  | |_| |
// |_____| \___/ |_| \_| \____||_| |_|/_/   \_\|___| \___/    \_/\_/    \___/ 
                                                                           
//                                                                                    
