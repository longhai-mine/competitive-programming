#include<bits/stdc++.h>
using namespace std;

int n, kytu[300], cnt[300];
string s;

void ql(int i)
{
	if(i > n / 2 + 1 && n % 2 != 0)
	{
		cout << s;
		for(int k = s.size() - 2; k >= 0; k--)
			cout << s[k];
		cout << endl;
	}
	else if(i > n / 2 && n % 2 == 0)
	{
		cout << s;
		for(int k = s.size() - 1; k >= 0; k--)
			cout << s[k];
		cout << endl;
	}
	else
	{
		if(n % 2 != 0)
		{
			for(char j = 'A'; j <= 'D'; j++)
			{
				if(i == (n + 1) / 2 && cnt[j] + 1 <= kytu[j])
				{
					s = s + j;
					cnt[j]++;
					ql(i + 1);
					cnt[j]--;
					s.pop_back();
				}
				else if(i != (n + 1) / 2 && cnt[j] + 2 <= kytu[j])
				{
					s = s + j;
					cnt[j] += 2;
					ql(i + 1);
					cnt[j] -= 2;
					s.pop_back();
				}
			}
		}
		else
		{
			for(char j = 'A'; j <= 'D'; j++)
			{
				if(cnt[j] + 2 <= kytu[j])
				{
					s = s + j;
					cnt[j] += 2;
					ql(i + 1);
					cnt[j] -= 2;
					s.pop_back();
				}
			}
		}
	}
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);  
    cin >> n >> kytu['A'] >> kytu['B'] >> kytu['C'] >> kytu['D'];
    ql(1);
}
