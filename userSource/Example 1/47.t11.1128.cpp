#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll a,b,c,t;
    cin >> a >> b >> c;
    if (b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    if (c<a)
    {
        cout << 0;
        return 0;
    }
    if (c<a+b)
    {
        cout << 0;
        return 0;
    }
    ll cnt=0;
    ll luu1, kc;
    for (ll i=1; i<=c/a; i++)
    {
        ll j=(c-a*i)/b;
        if (j==0 && cnt<2)
        {
            cout << cnt;
            return 0;
        }
        if (i>9999999)
        {
            cout << cnt;
            return 0;
        }
        if (a*i+b*j==c)
        {
            cnt++;
            //cout << i << " " << j << " " << cnt <<  endl;
            if (cnt==1) luu1=i;
            if (cnt==2 && j==1)
            {
                cout << cnt;
                return 0;
            }
            if (cnt==2)
            {
                kc=i-luu1;
                break;
            }
        }
    }
    ll u=c/a;
    if (c%a==0) u--;
    for (ll i=u; i>0; i--)
    {
        ll j=(c-a*i)/b;
        if (a*i+b*j==c)
        {
            //cout << i << " " << j << " ";
            cout << (i-luu1)/kc + 1;
            return 0;
        }
    }
}