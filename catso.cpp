#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("gen.inp", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("catso.inp", "r", stdin);
    freopen("catso.out", "w", stdout);
    string s;
    cin >> s;
    int ans = -1;
    int ans2 = -1;
    for(int i = 1; i < s.size(); i++)
    {
        string a = s.substr(0, i);
        string b = s.substr(i, s.size() - 1);
        int a_ = stoll(a, nullptr, 10);
        int b_ = stoll(b, nullptr, 10);
        //cout << a_ << " " << b_ << endl;
        if(b_ >= a_)
        {
            ans = a_;
            ans2 = b_;
        }
    }
    if(ans == -1)
        cout << -1;
    else
        cout << ans << " " << ans2;
}

