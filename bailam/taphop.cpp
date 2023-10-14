#include<bits/stdc++.h>
using namespace std;
set <int> a, b;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("TAPHOP.inp", "r", stdin);
    // freopen("TAPHOP.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
    	int x;
    	cin >> x;
    	a.insert(x);
    }  
    for(int i = 1; i <= m; i++) 
    {
    	int x; 
    	cin >> x;
    	b.insert(x);
    }
    for(int i = 1; i <= 100; i++) 
    {
    	if(a.count(i) == 1 || b.count(i) == 1)
    		cout << i << " ";
    }
    cout << "\n";
    for(int i = 1; i <= 100; i++) 
    {
    	if(a.count(i) == 1 && b.count(i) == 1)
    		cout << i << " ";
    }
    cout << "\n";
    for(int i = 1; i <= 100; i++)
    {
    	if(a.count(i) == 1 && b.count(i) == 0)
    		cout << i << " ";
    }
    cout << "\n";
    for(auto i : a)
    {
    	if(b.count(i) == 0)
    		cout << i << " ";
    }
}
