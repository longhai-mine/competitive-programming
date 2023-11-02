/*
    AUTHOR:    longhai
    CREATED:   01.11.2023 09:40:15

*/
#include <bits/stdc++.h>

using namespace std;

int a[(int)1e3 + 5];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i < n; i++)
	{
		int pos = i;
		int mini = a[i];
		for(int j = i + 1; j <= n; j++)
		{
			if(a[j] < mini)
			{
				pos = j;
				mini = a[j];
			}
		}
		swap(a[i], a[pos]);
	}
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
  return 0;
}
