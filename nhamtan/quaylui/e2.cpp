/*
    AUTHOR:    longhai
    CREATED:   11.10.2023 18:52:30

*/
#include <bits/stdc++.h>
using namespace std;
int ans, n;
int b[(int)15];
void solve(int i){
	for(int j = 0; j <= n; j++){
		if(b[j] == 0){
			if(i == 1 && j == 0) continue; 
			ans = ans * 10 + j;
			b[j] = 1;
			if(i < n) solve(i + 1);
			else cout << ans << "\n";
			b[j] = 0;
			ans /= 10;
		}
	}
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  b[1] = 0;
  cin >> n;
  solve(1);
  return 0;
}
