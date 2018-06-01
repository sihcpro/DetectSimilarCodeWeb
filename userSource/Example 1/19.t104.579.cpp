#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
string s;
bool f[1000];
int main()
{
    /*cin >> n >> m >> a >> b;
    if ((a-1)/m==(b-1)/m || (a==1&&b==n)) cout << 1; else
    if (a % m == 1)
    {
        if (b % m == 0)
            cout << 1;
        else
            cout << 2;
    }
    else if (b % m == 0)
        cout << 2;
    else cout << 2 + (b/m*m - ((a-1)/m+1)*m + 1)/m;*/
    cin >> s;
    f[0] = true;
    for (int i = 1; i < s.length(); i++)
        if (s[i] != '/' || (s[i] == '/' && s[i-1] != '/')) f[i] = true;
    for (int i = s.length() - 1; i >= 0; i--) if (s[i] == '/') f[i] = false; else break;
    if (!f[0]) cout << "/";
    else
    for (int i = 0; i < s.length(); i++)
        if (f[i]) cout << s[i] ;
}