#include <bits/stdc++.h>
using namespace std;
string s[100];
int f[100][100], z[100][100];
int main()
{
    for (int i = 1; i <= 4; i++)
        getline(cin, s[i]);
    for (int i = 1; i <= 3; i++)
        for (int j = 0; j < 3; j++)
        {
            (s[i][j] == '#') ? f[i][j]++ : z[i][j]++;
            (s[i+1][j] == '#') ? f[i][j]++ : z[i][j]++;
            (s[i][j+1] == '#') ? f[i][j]++ : z[i][j]++;
            (s[i+1][j+1] == '#') ? f[i][j]++ : z[i][j]++;
        }
    for (int i = 1; i <= 3; i++)
        for (int j = 0; j < 3; j++)
            if (f[i][j] >= 3 || z[i][j] >= 3)
            {
                cout << "YES";
                return 0;
            }
        cout << "NO";
}