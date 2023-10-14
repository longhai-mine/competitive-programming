#include <bits/stdc++.h>
using namespace std;

bool check(long long x)
{
    if(x <= 1)
        return false;
    for(int i = 2; i * i <= x; i++)
        if(x % i == 0)
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    long long ans = 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) {
        ans++;
        while(n % i == 0)
            n /= i;
        }
    }
    if(ans == 0)
        cout << 1;
    else
        cout << ans;
}
