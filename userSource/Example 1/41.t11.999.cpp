#include <bits/stdc++.h>
#define ll long long
using namespace std;

void process ()
{
    int a[5][5];
    int d1=0, d2=0, win1=0, win2=0;
    for (int i=0; i<3; i++)
    {
        string s;
        cin >> s;
        for (int j=0; j<3; j++)
            if (s[j]=='X') a[i][j]=1,d1++;
            else if (s[j]=='0') a[i][j]=2,d2++;
            else a[i][j]=0;
    }
    for (int i=0; i<3; i++)
    {
        if (a[i][0]==a[i][1] && a[i][0]==a[i][2] && a[i][0]==1) win1=1;
        if (a[i][0]==a[i][1] && a[i][0]==a[i][2] && a[i][0]==2) win2=1;
        if (a[0][i]==a[1][i] && a[0][i]==a[2][i] && a[0][i]==1) win1=1;
        if (a[0][i]==a[1][i] && a[0][i]==a[2][i] && a[0][i]==2) win2=1;
    }
    if ((a[0][0]==a[1][1] && a[0][0]==a[2][2]) || (a[2][0]==a[1][1] && a[2][0]==a[0][2]))
    {
        if (a[1][1]==1) win1=1;
        else if (a[1][1]==2) win2=1;
    }
    //cout << d1 << " " << d2 << endl; cout << win1 << " " << win2 << endl;
    if (d1-d2!=0 && d1-d2!=1)
    {
        cout << "illegal" << endl;
        return;
    }
    if ((win1==1 && win2==1) || (win1==1 && d1==d2) || (win2==1 && d1-d2==1))
    {
        cout << "illegal" << endl;
        return;
    }
    if (win1==1)
    {
        cout << "the first player won" << endl;
        return;
    }
    if (win2==1)
    {
        cout << "the second player won" << endl;
        return;
    }
    if (d1+d2==9)
    {
        cout << "draw" << endl;
        return;
    }
    if (d2==d1)
    {
        cout << "first" << endl;
        return;
    }
    if (d1-d2==1)
    {
        cout << "second" << endl;
        return;
    }
    cout << "illegal" << endl;
    return;

}
int main ()
{
    int n; cin >> n;
    while (n--)
    {
        process();
    }
}