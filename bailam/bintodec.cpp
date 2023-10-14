#include<bits/stdc++.h>
using namespace std;
string s;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("BINTODEC.INP" , "r", stdin);
    //freopen("BINTODEC.out", "w", stdout);
    cin >> s;
    int ans = 0;
    int dem = 1;
    for(int i = s.size() - 1; i >= 0; --i)
    {
    	if(i == s.size() - 1)
    		ans += (s[i] - '0');
    	else
    		ans += (s[i] - '0') * dem;
    	dem *= 2;
    }  
    cout << ans;
}

