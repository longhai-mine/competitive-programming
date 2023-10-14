#include<bits/stdc++.h>
using namespace std;     	
int n;
int ans[15];
int check[11];
void ql(int i){
	if(i > n)
	{
		for(int i = 1; i <= n; i++){
			cout << ans[i];
		}
		cout << "\n";
	}
	else
	{
		for(int j = 1; j <= n; j++)
		{
			if(check[j] == 0)
			{
				ans[i] = j;
				check[j] = 1;
				ql(i + 1);
				check[j] = 0;
			}
		}
	}
}
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    cin >> n;
    ql(1);
}
