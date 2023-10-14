/*
    AUTHOR:    longhai
    CREATED:   11.10.2023 19:16:18
 
*/
#include <bits/stdc++.h>
 
using namespace std;
bool b[(int)1e3] = {0};
int n, m, ans, temp = 0;
char s[10][10];
void duongcheo(int x){
	for(int k = )
}
void Try(int i){
	if(i > n){
		ans = max(ans, temp);
	}
	else
	{
		for(int j = 0; j <= m; j++){
			if(j == 0) Try(i + 1);
			else if(b[j] == 0 && s[i][j] == '.'){
				temp++;
				//OK = true;
				b[j] = 1;
				Try(i + 1);
				temp--;
				b[j] = 0;                                                  
			}
		}
	}	
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
  	for(int j = 1; j <= m; j++)
  		cin >> s[i][j];
  Try(1);
  cout << ans;
  return 0;
}