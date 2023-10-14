#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int n, q;
    cin >> n >> q;
    char s[n * 2 + 5];
    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];
        s[i + n] = s[i];
    }
    int jump = 0;
    while(q--)
    {
        int i, x;
        cin >> i >> x;
        if(i == 2)
        {
            cout << s[x + jump + 1]; 
        }
        else
        {
            jump = (x + jump) % n;
        }
    }
}
