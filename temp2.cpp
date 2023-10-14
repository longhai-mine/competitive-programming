#include<bits/stdc++.h>
using namespace std;
 array <int, 1000> a;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }
    for(auto it = a.begin(); it != a.end(); it++)
    	cout << *it + 1;
}
