/*=========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   28.08.2023 14:41:22                                 
 
*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long;
using namespace std;
 
const int N = 1e3 + 5;
 
int n, m;
char a[N][N];
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 	cin >> n >> m;
 	for(int i = 1; i <= n; i++) {
 		for(int j = 1; j <= m; j++) {
 			cin >> a[i][j];
 		}
 	}  
 	int ans = 0;
 	for(int i = 1; i + 1 <= n; i++) {
 		for(int j = 1; j + 1 <= m; j++) {
 			int sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
 			if(sum == 'f' + 'a' + 'c' + 'e')
 				ans++;
 		}
 	}
 	cout << ans <<"\n";
	return 0;
}