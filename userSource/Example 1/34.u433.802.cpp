#include <bits/stdc++.h>
using namespace std;
long long f[3][100001];
long long res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a;
    for (int i = 0; i < s.size(); i++)
    {
        a = (int)(s[i] - '0');
        if (a != 0)
            f[a%3][i] = 1;
        else
            res++;
        if (i > 0)
        {
            f[(0+a)%3][i] += f[0][i-1];
            f[(1+a)%3][i] += f[1][i-1];
            f[(2+a)%3][i] += f[2][i-1];
        }
        if (a % 2 == 0)
            res += f[0][i];
    }
    cout << res;
    return 0;
}