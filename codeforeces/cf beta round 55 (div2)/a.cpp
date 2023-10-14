#include <bits/stdc++.h>
using namespace std;

string s;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	int upper = 0, lower = 0;
	for(int i = 0; i <= size(s) - 1; i++) {
		if(s[i] >= 'A' and s[i] <= 'Z') {
			upper++;
			//cout << 1 << " ";
		}
		else {
			lower++;
			//cout << 2 << " ";
		}
	}
	if(upper > lower) 
	{
		for(int i = 0; i <= size(s) - 1; i++) {
			if(s[i] >= 'a' && s[i] <= 'z')
				cout << char(s[i] - 'a' + 'A');
			else
				cout << s[i];
		}
	}
	else {
		for(int i = 0; i <= size(s) - 1; i++) {
			if(s[i] >= 'A' && s[i] <= 'Z')
				cout << char(s[i] - 'A' + 'a');
			else
				cout << s[i];
		}
	}
	
	return 0;
}