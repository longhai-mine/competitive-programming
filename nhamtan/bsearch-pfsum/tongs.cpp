#include <bits/stdc++.h>
using namespace std;

int n;
double sum;

int main()
{
    //freopen("gen.inp", "r", stdin);
    ios_base::sync_with_stdio(0);
    freopen("tongs.inp", "r", stdin);
    freopen("tongs.out", "w", stdout);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + double(1) / i;
    }
    cout << fixed << setprecision(5) << sum;
}
