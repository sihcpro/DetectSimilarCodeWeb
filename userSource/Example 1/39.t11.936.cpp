#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll n;
    cin >> n;
    ll res=0;
    for (int i=0; i<n; i++)
    {
        int x;
        scanf ("%d",&x);
        int mu=x%10;
        int so=x/10;
        ll nhan=1;
        for (int j=0; j<mu; j++) nhan*=so;
        res+=nhan;
    }
    cout << res;
}