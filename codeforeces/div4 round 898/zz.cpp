#include<bits/stdc++.h>
using namespace std;
int check(long long x)
{
	int res = 0;
	while(x != 0)
	{
		res++;
		x /= 10;
	}
	return res;
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin >> n;
    for(int i = 1;i <= 500; i++)
    {
    	if(check(i * 2310) == n)
    	{
    		cout << i * 2310;
    		return 0;
    	}
    } 
    cout << -1;
}
