/*
    AUTHOR:    longhai
    CREATED:   01.11.2023 09:27:04

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	map <int, int> a;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int m;
	cin >> m;
	cout << a[m];	
  return 0;
}
