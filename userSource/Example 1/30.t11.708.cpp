#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll f(ll x)
{
    if ((x*x*x + 6*x*x +5*x - 6)/6 <= n) return 1;
    else return 0;
}
int main ()
{
    cin >> n;
    ll l=1,r=4000000,mid1,mid;
    while (l<r)
    {
        mid=(l+r)/2;
        if (mid==mid1) break;
        mid1=mid;
        //cout << mid  << " "  << f(mid) << endl;
        if (f(mid)==1) l=mid+1;
        else r=mid;


    }
    if (f(mid+1)==1) cout << mid+1;
    else if (f(mid)==1) cout << mid;
    else if (f(mid-1)==1) cout << mid-1;
}