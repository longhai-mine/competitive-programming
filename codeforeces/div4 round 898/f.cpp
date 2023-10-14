#include<bits/stdc++.h>
using namespace std;
vector <int> prime(1e6 + 5, 1);
int cnt[1000005];
void snt()
{
    prime[1] = prime[0] = 0;
    for(int i = 2; i * i <= 1e6; i++)
        if(prime[i])
            for(int j = i * i; j <= 1e6; j += i)
                prime[j] = false;
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  

    snt();
    int n;
    cin >> n;
    vector <int> f1,f2,f3;
    for(int i = 1; i <= 1e6; i++)
        if(prime[i])
            f1.push_back(i);
    for(int i = 1; i <= 1e3; i++)
        if(prime[i])
            f2.push_back(i);
    for(int i = 1; i <= 1e2; i++)
        if(prime[i])
            f3.push_back(i);
    for(int i = 0; i < f1.size(); i++)
        for(int j = 0; j < f2.size(); j++)
            for(int k = 0; k < f3.size(); k++)
                if(f1[i] + f2[j] * f2[j] + f3[k] * f3[k] * f3[k] <= 1e6)
                    cnt[f1[i] + f2[j] * f2[j] + f3[k] * f3[k] * f3[k]]++;
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        cout << cnt[a] << "\n";
    }
}
