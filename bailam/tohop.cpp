#include<iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("tohop.inp", "r", stdin);
    freopen("tohop.out", "w", stdout);
    int n, k;
    cin >> n;
    cin >> k;
    cout << C(k, n);
    return 0;
}