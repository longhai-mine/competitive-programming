 
#include <bits/stdc++.h>
using namespace std;
 
const long long mxN=1e5+10;
 
long long a[mxN],pre[mxN];
long long n,p,q,r;
 
int tknp(int y , int p)
{
    int l = 1 , r = y;
    while(l <= r)
    {
        long long mid=(l+r)/2;
        if(pre[y]-pre[mid-1]==p) 
            return mid;
        else if(pre[y]-pre[mid-1]>p)
            l=mid+1;
        else   
            r=mid-1;
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> p >> q >> r;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
    long long ans=0;
    for(int w = 1 ; w <= n ; w++) // n lần
    {   
        int z = tknp(w , r);
        if(z != -1)
        {
            int y = tknp(z - 1 , q);
            if(y != -1)
            {
                int x = tknp(y - 1 , p);
                if(x != -1)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans;
}