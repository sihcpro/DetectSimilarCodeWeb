#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[500005],b[500005];
ll ans=1e19, res=0;
int main()
{
    ll n,m,c1,c2;
    cin >> n >> m >> c1 >> c2;
    for (int i=0; i<n ; i++) scanf ("%lld",&a[i]);
    for (int i=0; i<m ; i++) scanf ("%lld",&b[i]);
    sort (a,a+n);
    sort (b,b+m);
    ll t=0,d=0;
    while (t<n && d<m)
    {
        //cout << a[t] << " " << b[d] << " " << fabs(a[t]-b[d]) << endl;
        if (abs(a[t]-b[d])<ans)
        {
            res=1;
            ans=abs(a[t]-b[d]);
        }
        else if (abs(a[t]-b[d])==ans) res++;
        if (a[t]<=b[d]) t++;
        else d++;
        //cout << ans  << " " << res << endl;
    }
    cout << ans+abs(c1-c2) << " " << res;

}