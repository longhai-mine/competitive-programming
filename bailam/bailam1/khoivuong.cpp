#include <bits/stdc++.h>
using namespace std;

int n;

main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(sqrt(n / i) == (int)sqrt(n / i))
        {
            cout << n / i;
            return 0;
        }
    }
}
