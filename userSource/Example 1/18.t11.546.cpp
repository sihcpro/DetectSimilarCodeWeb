#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[6][6];
int main ()
{
    for (int i=0; i<4; i++)
    {
        string s;
        cin >> s;
        for (int j=0; j<4; j++)
            if (s[j]=='#') a[i][j]=1;
            else a[i][j]=0;
    }
    for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
    {
        int x= a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
        if (x!=2)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}