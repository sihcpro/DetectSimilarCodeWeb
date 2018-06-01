#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k;
    string a, b;
    cin >> k >> a >> b;
    ll x=0,y=0,mu=1;
    for (int i=a.size()-1; i>=0; i--)
    {
        x=x+(a[i]-'0')*mu;
        mu=mu*k;
    }
    mu=1;
    for (int i=b.size()-1; i>=0; i--)
    {
        y=y+(b[i]-'0')*mu;
        mu=mu*k;
    }
    //cout << x << " " << y << " " << x+y << endl;
    ll res[100],u=0;
    x=x+y;
    while (x!=0)
    {
        res[u++]=x%k;
        x=x/k;
    }
    for (int i=u-1; i>=0; i--) cout << res[i];
}