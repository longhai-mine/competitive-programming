#include <bits/stdc++.h>
using namespace std;

long long check(long long x)
{
	long long res = 0;
	while(x != 0)
	{
		res += x % 2;
		x /= 2;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n;
	cin >> n;
	long long ans = 0;
	while(n--)
	{
		long long a;
		cin >> a;
		ans = max(ans, check(a));
	}
	cout << ans;
	return 0;
}