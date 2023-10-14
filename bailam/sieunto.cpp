#include<bits/stdc++.h>
using namespace std;
int t;
bool check(int x) {
	for(int i = 2; i * i <= x; i++)
		if(x % i == 0)
			return false;
	return true;
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("sieunto.inp", "r", stdin);
    freopen("sieunto.out", "w", stdout); 
    cin >> t;
    for(int i = 1; i <= t; i++) {
    	int x;
    	cin >> x;
    	if(check(x) && check(x / 10))
    		cout << 1;
    	else
    		cout << 0;
    } 
}
