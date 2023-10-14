#include <bits/stdc++.h>
using namespace std;
 
void createMap(unordered_map<string, char> *um)
{
    (*um)["0000"] = '0';
    (*um)["0001"] = '1';
    (*um)["0010"] = '2';
    (*um)["0011"] = '3';
    (*um)["0100"] = '4';
    (*um)["0101"] = '5';
    (*um)["0110"] = '6';
    (*um)["0111"] = '7';
    (*um)["1000"] = '8';
    (*um)["1001"] = '9';
    (*um)["1010"] = 'A';
    (*um)["1011"] = 'B';
    (*um)["1100"] = 'C';
    (*um)["1101"] = 'D';
    (*um)["1110"] = 'E';
    (*um)["1111"] = 'F';
}
string convertBinToHex(string bin)
{
    int l = bin.size();
    int t = bin.find_first_of('.');
     
    int len_left = t != -1 ? t : l;
     

    for (int i = 1; i <= (4 - len_left % 4) % 4; i++)
        bin = '0' + bin;
     
    if (t != -1)   
    {
        int len_right = l - len_left - 1;
        
        for (int i = 1; i <= (4 - len_right % 4) % 4; i++)
            bin = bin + '0';
    }
     
    unordered_map<string, char> bin_hex_map;
    createMap(&bin_hex_map);
     
    int i = 0;
    string hex = "";
     
    while (1)
    {

        hex += bin_hex_map[bin.substr(i, 4)];
        i += 4;
        if (i == bin.size())
            break;

        if (bin.at(i) == '.')   
        {
            hex += '.';
            i++;
        }
    }

    return hex;   
}
string bintooctal(string s)
{
    int ans = 0;
    int dem = 1;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * dem;
        dem *= 2;
    }
    string ans2;
    while(ans != 0)
    {
        int y = ans % 8;
        ans2 = to_string(y) + ans2;
        ans /= 8;
    }
    return ans2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("bintoa.inp", "w", stdin);
    freopen("bintoa.out", "r", stdout);
    string s;
    cin >> s;
    cout << bintooctal(s) << "\n";
    cout << convertBinToHex(s);
    return 0;    
}