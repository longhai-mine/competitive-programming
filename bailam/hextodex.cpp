#include<bits/stdc++.h>
using namespace std;
string s;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    freopen("hextodec.inp", "r", stdin);
    freopen("hextodec.out", "w", stdout);
    cin >> s;
    int ans = 0;
    int dem = 1;
    for(int i = s.size() - 1; i >= 0; --i)
    {
        if('A' <= s[i] && s[i] <= 'Z') 
        {
            ans += (s[i] - '0' - 7) * dem;
        }
        else
            ans += (s[i] - '0') * dem;
        dem *= 16;
    }
    cout << ans;
}
