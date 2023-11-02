#include <bits/stdc++.h>
using namespace std;

int n;
map <string, int> a;
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++) {
        string s;
        cin >> s;
        string s_ = s;
        reverse(s.begin(), s.end());
        a[s]++;
        a[s_]++;
        if(a[s] == 2 || a[s_] == 2) ans++;
    }
}
