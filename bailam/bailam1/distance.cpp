#include <bits/stdc++.h>
using namespace std;

int x, y, ans;

main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> x >> y;
    while(x != 0)
    {
      int x_ = x % 10;
      int y_ = y % 10;
      x /= 10;
      y /= 10;
      ans += min({abs(x_ - y_), 10 + y_ - x_, 10 + x_ - y_});
    }
    cout << ans;
}
