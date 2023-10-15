#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    string s;
    int n;
    cin >> n >> s;
    if(n % 2 == 0)
            cout << s << s << "\n";
        else if(n % 2 != 0)
        {
            cout << s;
            for(int i = s.size() - 2; i >= 0; i--)
                cout << s[i];
            cout << endl;
        }
        cout << s;
            for(int i = s.size() - 2; i >= 0; i--)
                cout << s[i];
            cout << endl;
}
