#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1005][1005],d[1005][1005];
ll res=0;
int main()
{
    ll n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    scanf ("%lld",&a[i][j]);


    for (int i=0; i<n; i++)
    {
        ll ans=0,x,y;
        for (int j=0; j<m; j++)
        if (ans<a[i][j])
        {
            ans=a[i][j];
            x=i, y=j;
        }
        d[x][y]=1;
    }
    for (int i=0; i<m; i++)
    {
        ll ans=0,x,y;
        for (int j=0; j<n; j++)
        if (ans<a[j][i])
        {
            ans=a[j][i];
            x=j, y=i;
        }
        d[x][y]=1;
    }
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    {
        if (d[i][j]==0)
        {
            //cout << a[i][j] << endl;
            res+=a[i][j];
        }
    }
    cout << res;


}