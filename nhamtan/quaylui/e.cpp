/*
    AUTHOR:    longhai
    CREATED:   11.10.2023 18:40:22

*/
#include <bits/stdc++.h>

using namespace std;

int n;
int a[15];
int check[15];
void ql(int i)
{
	if(i > n)
	{
		if(a[1] != 0)
		{
			for(int i = 1; i <= n; i++)
			{
				cout << a[i];
			}
			cout << "\n";
		}
	}
	else
	{
		for(int j = 0; j <= n; j++)
		{
			if(check[j] == 0)
			{
				a[i] = j;
				check[j] = 1;
				ql(i + 1);
				check[j] = 0;
			}
		}
	}
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  ql(1);
  return 0;
}
