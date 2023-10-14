#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int t;
    cin >> t;
    while(t--)
    {
    	int a, b, d;
    	cin >> a >> b >> d;
    	int du = abs(a - b);
    	if(((du + __gcd(a, b) - 1) / __gcd(a, b)) <= d)
    	{
    		cout << "YES" << "\n";
    	}
    	else
    		cout <<< "NO" << "\n";
    }
}
