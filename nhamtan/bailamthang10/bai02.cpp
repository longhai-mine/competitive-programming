/*
    AUTHOR:    longhai
    CREATED:   01.11.2023 09:15:43

*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, ans;

main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  if(n <= 3000) 
  {
  	map <int, int> cnt;
  	int a[(int)3e3 + 10];
  	for(int i = 1; i <= n; i++)
  		cin >> a[i];
  	for(int i = 1; i < n; i++) 
  	{
  		for(int j = i + 1; j <= n; j++) 
  		{
  			if((a[i] + a[j]) % 2 == 0)
  				cnt[(a[i] + a[j]) / 2]++; 
  		}
  	}
  	for(int i = 1; i <= n; i++)
    {                
  	 		if(cnt[a[i]] != 0)
  	 	  {
  		 		ans++;
  				cnt[a[i]] == 0;
  		  }
  	}
  	cout << ans;
  }
  else if(n >= 3000)
  {
  	int a[(int)5e3 + 10], b[(int)5e3 + 10];
  	for(int i = 1; i <= n; i++)
  	{
  		int x;
  		cin >> x;
  		a[x]++;
  		b[x]++;
  	}
  	for(int i = 1; i <= 5e3; i++) 
  	{
  		for(int j = 1; j <= 5e3; j++)
  		{
  			if((i + j) % 2 == 0 && a[(i + j) / 2] != 0)
  			{
  				ans++;
  				a[(i + j) / 2] = 0;
  			}
  		}
  	}
  	cout << ans;
  }
  return 0;
}