#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5 + 5;

int n;
int a[N];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	long long ans = 0;
	long long x = a[2] - a[1];
	long long temp = 2;
	for(int i = 2; i < n; i++)
	{
		if(a[i + 1] - a[i] == x)
		{
			temp++;
		}
		else if(a[i + 1] - a[i] != x)
		{
			x = a[i + 1] - a[i];
			temp = 2;
		}
		ans = max(ans, temp);
	}
	cout << ans;
	return 0;
}